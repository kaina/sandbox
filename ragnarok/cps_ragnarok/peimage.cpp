#include "peimage.hpp"


////////////////////////////////////////////////////////////////////////////////


void PEImage::initialize()
{
	IMAGE_DOS_HEADER* _dos = reinterpret_cast<IMAGE_DOS_HEADER*>(m_handle);
	m_nt = reinterpret_cast<IMAGE_NT_HEADERS*>(reinterpret_cast<LONG>(_dos)+_dos->e_lfanew);

	clearFF25();
}


void PEImage::getSectionRange(int __section, DWORD &__start, DWORD &__end)
{
	IMAGE_SECTION_HEADER* _sect = reinterpret_cast<IMAGE_SECTION_HEADER*>(m_nt+1) + __section;
	__start = m_nt->OptionalHeader.ImageBase + _sect->VirtualAddress;
	__end = __start + _sect->Misc.VirtualSize;
}

////////////////////////////////////////////////////////////////////////////////


bool PEImage::waitASProtect()
{
	DWORD addr_entry = m_nt->OptionalHeader.ImageBase + m_nt->OptionalHeader.AddressOfEntryPoint;
	DbgPrint(_T("address_entry=%08X"), addr_entry);

	while (*reinterpret_cast<const BYTE*>(addr_entry) != 0x55)	// push ebp
		::Sleep(0x10);

	return true;
}

////////////////////////////////////////////////////////////////////////////////


void PEImage::attachMemory(void* __dest, const void* __source, size_t __length)
{
	MEMORY_BASIC_INFORMATION memInfo;

	::VirtualQuery(reinterpret_cast<const void*>(__dest), &memInfo, sizeof(MEMORY_BASIC_INFORMATION));
	::VirtualProtect(memInfo.BaseAddress, memInfo.RegionSize, PAGE_READWRITE, &memInfo.Protect);

	::RtlCopyMemory(__dest, __source, __length);

	DWORD dummy;
	::VirtualProtect(memInfo.BaseAddress, memInfo.RegionSize, memInfo.Protect, &dummy);
}

////////////////////////////////////////////////////////////////////////////////


void PEImage::displayFF25()
{
	for (std::map<DWORD, DWORD>::iterator i=m_jmptbl.begin(); i!=m_jmptbl.end(); i++)
		DbgPrint(_T("FF25 [%08X]=%08X"), i->second, i->first);
}


void PEImage::analysisFF25()
{
	IMAGE_SECTION_HEADER* _sect = reinterpret_cast<IMAGE_SECTION_HEADER*>(m_nt+1);
	DWORD addr_start = m_nt->OptionalHeader.ImageBase + _sect->VirtualAddress;
//	DbgPrint(_T("address_start=%08X"), addr_start);
	DWORD addr_end = addr_start + _sect->Misc.VirtualSize;
//	DbgPrint(_T("address_end=%08X"), addr_end);


	MEMORY_BASIC_INFORMATION memInfo;

	::VirtualQuery(reinterpret_cast<const void *>(addr_start), &memInfo, sizeof(MEMORY_BASIC_INFORMATION));
	::VirtualProtect(memInfo.BaseAddress, memInfo.RegionSize, PAGE_READWRITE, &memInfo.Protect);


	BYTE cj[2];
	cj[0] = 0xFF;
	cj[1] = 0x25;	// jmp [________]

	for (DWORD i=addr_start; i<addr_end; i++)
	{
		if (memcmp(reinterpret_cast<const void *>(i), cj, 2) == 0)
		{
			DWORD d = *reinterpret_cast<DWORD*>(i+2);

			if (::IsBadReadPtr(reinterpret_cast<const void*>(d), sizeof(DWORD)) == 0)
			{
				DWORD e = *reinterpret_cast<DWORD*>(d);
				m_jmptbl.insert(std::pair<DWORD, DWORD>(e, d));

			}
		}
	}


	DWORD dummy;
	::VirtualProtect(memInfo.BaseAddress, memInfo.RegionSize, memInfo.Protect, &dummy);
}


void* PEImage::rewriteFF25(const TCHAR* __module, const char* __export, void* __function)
{
	void* original = ::GetProcAddress(::GetModuleHandle(__module), __export);
	if (original == NULL)
		return 0;

	std::map<DWORD, DWORD>::iterator i = m_jmptbl.find(reinterpret_cast<DWORD>(original));
	if (i == m_jmptbl.end())
		return 0;

	DbgPrint(_T("%s.%s=%08X [%08X]=%08X to %08X"), __module, __export, original, i->second, i->first, __function);

	attachMemory(reinterpret_cast<void*>(i->second), &__function, sizeof(DWORD));

	return original;
}

////////////////////////////////////////////////////////////////////////////////

// .data

DWORD PEImage::matchFirstByData(const char* __string)
{
	IMAGE_SECTION_HEADER* _sect = reinterpret_cast<IMAGE_SECTION_HEADER*>(	m_nt+1) + 2;
	DWORD addr_start = m_nt->OptionalHeader.ImageBase + _sect->VirtualAddress;
	DWORD addr_end = addr_start + _sect->Misc.VirtualSize;

	for (DWORD i=addr_start; i<addr_end; i++)
	{
		if (strcmp(__string, reinterpret_cast<const char*>(i)) == 0)
			return i;
	}

	return -1;
}

// .text

DWORD PEImage::matchFirstByText(const BYTE* __data, size_t __length)
{
	IMAGE_SECTION_HEADER* _sect = reinterpret_cast<IMAGE_SECTION_HEADER*>(m_nt+1);
	DWORD addr_start = m_nt->OptionalHeader.ImageBase + _sect->VirtualAddress;
	DWORD addr_end = addr_start + _sect->Misc.VirtualSize;

	for (DWORD i=addr_start; i<addr_end; i++)
	{
		if (memcmp(__data, reinterpret_cast<const void*>(i), __length) == 0)
			return i;
	}

	return -1;
}


// matchFirstBy???îninterface


DWORD PEImage::searchCode(const BYTE* __data, size_t __length)
{
	DWORD address = matchFirstByText(__data, __length);
	if (address == -1)
		return 0;

	return address;
}


DWORD PEImage::searchCodeRef(const BYTE* __data, size_t __length, size_t __shift)
{
	DWORD address = matchFirstByText(__data, __length);
	if (address == -1)
		return 0;
	else
		address += __shift;


	if (::IsBadReadPtr(reinterpret_cast<const void*>(address), sizeof(DWORD)) == 0)
		return *reinterpret_cast<DWORD*>(address);

	return 0;
}


DWORD PEImage::searchString(const char* __string)
{
	DWORD address = matchFirstByData(__string);
	if (address == -1)
		return 0;

	return address;
}

