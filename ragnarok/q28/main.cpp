//--------------------------------------------------------------------------------------
// File: main.cpp
//--------------------------------------------------------------------------------------
#include "stdafx.h"

//--------------------------------------------------------------------------------------
// Constants
#if defined(_DBG)
const TCHAR* kConfigXml = _T("./config.dbg.xml");
#else
const TCHAR* kConfigXml = _T("./config.xml");
#endif

//--------------------------------------------------------------------------------------
extern HRESULT WebLogin(const ACCOUNTINFO& account);

//--------------------------------------------------------------------------------------
int _tmain(int argc, wchar_t** argv)
{
    _bstr_t reqName;

#if defined(_DBG)
    reqName = _T("debug");
#else
    if (argc == 2)
        reqName = argv[1];
    else
    {
        _tprintf(_T("Illigal arguments.\n"));
        return -1;
    }
#endif

    HRESULT hr;

    // Initialize COM
    hr = ::CoInitializeEx(NULL, COINIT_MULTITHREADED);
    if (FAILED(hr))
    {
        _tprintf(_T("*** Failure CoInitializeEx %08X\n"), hr);
        return -1;
    }

    // Load XML
    hr = LoadXml(kConfigXml);
    if (FAILED(hr))
    {
        _tprintf(_T("*** Failure loading XML. %08X\n"), hr);
        ::CoUninitialize();
        return -1;
    }

#if defined(_DBG)
    _tprintf(_T("XML=%d\n"), AccountList.size());
#endif

    // Web login
    hr = E_FAIL;

    for (ACCOUNTLIST::iterator it=AccountList.begin(); it!=AccountList.end(); it++)
    {
        if (static_cast<_bstr_t>(it->varName) == reqName)
        {
            hr = WebLogin(*it);
            break;
        }
    }

    if (FAILED(hr))
    {
        _tprintf(_T("*** Failure WebLogin. %08X\n"), hr);
        ::CoUninitialize();
        return -1;
    }

    ::CoUninitialize();
    return 0;
}

