#ifndef _ENUMAEGIS_
#define _ENUMAEGIS_

//------------------------------------------------------------------------------
//  PACKET_xxx
//  VarType : USHORT
//------------------------------------------------------------------------------
enum AEGIS_PACKET
{
    PACKET_CA_AUTH1                         = 0x0064,
    PACKET_AC_ACK_AUTH                      = 0x0069,
    PACKET_CC_ACK_CONNECT                   = 0x006B,
    PACKET_CC_ACK_SELECT_CHARACTER          = 0x0071,
//    PACKET_ZC_ACK_CONNECT                   = 0x0073,
    PACKET_ZC_ERASE_ACTOR                   = 0x0080,
    PACKET_ZC_ATTACK_DAMAGE                 = 0x008A,
    PACKET_CZ_CHAT                          = 0x008C,
    PACKET_ZC_CHAT                          = 0x008D,
    PACKET_ZC_CHAT_OWN                      = 0x008E,
    PACKET_ZC_PORTAL                        = 0x0091,
    PACKET_ZC_PORTAL_ZONE                   = 0x0092,
    PACKET_CZ_WHISPER                       = 0x0096,
    PACKET_ZC_WHISPER                       = 0x0097,
    PACKET_ZC_ACK_WHISPER                   = 0x0098,
    PACKET_CZ_BROADCAST                     = 0x0099,
    PACKET_ZC_BROADCAST                     = 0x009A,
    PACKET_CZ_EMOTION                       = 0x00BF,
    PACKET_ZC_EMOTION                       = 0x00C0,
    PACKET_CZ_CHAT_PARTY                    = 0x0108,
    PACKET_ZC_CHAT_PARTY                    = 0x0109,
    PACKET_ZC_MPV_CHARACTER                 = 0x010C,
    PACKET_ZC_SKILL_DAMAGE1                 = 0x0114,
    PACKET_ZC_LOOK_OPTION1                  = 0x0119,
//    PACKET_ZC_SKILL_NODAMAGE                = 0x011A,
    PACKET_ZC_ADD_TEMPORARY_SKILL           = 0x0147,
    PACKET_CZ_CHAT_GUILD                    = 0x017E,
    PACKET_ZC_CHAT_GUILD                    = 0x017F,
    PACKET_ZC_EFFECT_STATE                  = 0x0196,
    PACKET_ZC_MULTICAST                     = 0x01C3,
    PACKET_CZ_REQ_SEED                      = 0x01DB,
    PACKET_ZC_ACK_REQ_SEED                  = 0x01DC,
    PACKET_CA_AUTH2                         = 0x01DD,
    PACKET_ZC_SKILL_DAMAGE2                 = 0x01DE,
    PACKET_GG_KEY16_SV                      = 0x0227,   // R
    PACKET_GG_KEY16_CL                      = 0x0228,   // S
    PACKET_ZC_LOOK_OPTION2                  = 0x0229,
    PACKET_GG_REQ_QUERY                     = 0x0258,
    PACKET_GG_ACK_REQ_QUERY                 = 0x0259,   // 0x0259 <TYPE>.b
    PACKET_CA_AUTH3                         = 0x027C,
    PACKET_ZC_LIVECRYPT_SEED                = 0x02A3,
    PACKET_ZC_MIXEDCRYPT_SEED               = 0x02BD,
    PACKET_CZ_ACK_SEED                      = 0x02BE,
    PACKET_ZC_MSG                           = 0x02C1,   // 0x02C1 <LENGTH>.w <OID>.d <COLORREF>.d <BODY>.?
    PACKET_ZC_MSG_VARS                      = 0x02C2,   // 0x02C2 <LENGTH?>.w <STRINGID>.w <ARGS>.?
/*
    PACKET_ZC_ACK_DISCONNECT_CHARACTER,
    PACKET_CZ_CREATE_ITEM,
    PACKET_CZ_COMMAND_PET,
    PACKET_CZ_MAKE_GROUP,
    PACKET_CZ_PET_ACT,
    PACKET_CZ_PETEGG_INFO,
    PACKET_CZ_RENAME_MER,
    PACKET_CZ_RENAME_PET,
    PACKET_CZ_SELECT_PETEGG,
    PACKET_CZ_TRYCAPTURE_MONSTER,
    PACKET_ZC_CASH_TIME_COUNTER,
    PACKET_CZ_ENTER,
    PACKET_ZC_ACTION_FAILURE,
    PACKET_ZC_COMPASS,
    PACKET_ZC_GROUP_INFO_CHANGE,
    PACKET_ZC_PC_PURCHASE_RESULT_FROMMC,
    PACKET_ZC_RECOVERY,
    PACKET_ZC_RESSURECTION,
*/
};

enum AEGIS_PACKET_CURRENT
{
    PACKET_ZC_SKILL_DAMAGE                  = PACKET_ZC_SKILL_DAMAGE2,  // 0x01DE
    PACKET_ZC_LOOK_OPTION                   = PACKET_ZC_LOOK_OPTION2,   // 0x0229
    PACKET_CA_AUTH                          = PACKET_CA_AUTH3,          // 0x027C
/*
    // 2008-03-28aRagexe
    // OP Shuffle
    PACKET_ZC_ERASE_ACTOR                   = 0x0098,
    PACKET_ZC_ADD_TEMPORARY_SKILL           = 0x00D8,
    PACKET_ZC_SKILL_DAMAGE                  = 0x0103,
    PACKET_ZC_LOOK_OPTION                   = 0x0125,
    PACKET_ZC_BROADCAST                     = 0x012C,
//    PACKET_ZC_ITEM_THROW_ACK                = 0x012E,
    PACKET_ZC_CHAT_PARTY                    = 0x0141,
    PACKET_ZC_ACK_CONNECT                   = 0x0142,
//    PACKET_ZC_ATTACK_FAILURE_FOR_DISTANCE   = 0x0147,
    PACKET_ZC_MULTICAST                     = 0x0165,
//    PACKET_ZC_SKILL_NODAMAGE                = 0x0170,   // 0x0170 <SkillID>.w <DstOID>.d <SrcOID>.d <Val>.w <Flag>.b
    PACKET_ZC_MPV_CHARACTER                 = 0x0178,
    PACKET_ZC_CHAT_GUILD                    = 0x01BC,
    PACKET_ZC_ATTACK_DAMAGE                 = 0x01C9,
    PACKET_ZC_CHAT                          = 0x01D4,
    PACKET_ZC_EFFECT_STATE                  = 0x0206,
    PACKET_ZC_WHISPER                       = 0x0217,
    PACKET_ZC_CHAT_OWN                      = 0x0233,
    PACKET_ZC_ACK_WHISPER                   = 0x02FA,
*/
/*
  0x00B3 -> 0x00E7
  0x010B -> 0x01FE
*/
    PACKET_ZC_ACK_CONNECT                   = 0x02EB,
};

enum AEGIS_PACKET_SVR
{
    PACKET_IZ_ACK_MAKE_GROUP                = 0x2921,
//    PACKET_??_REQ_LIST_GROUP,
    PACKET_IZ_ACK_REQ_JOIN_GROUP            = 0x2924,
    PACKET_IZ_REQ_JOIN_GROUP,
    PACKET_IZ_DELETE_MEMBER_FROM_GROUP      = 0x292A,
    PACKET_ZI_GRID_UPDATE                   = 0x292C,
    PACKET_IZ_CHAT_PARTY                    = 0x292E,
//    PACKET_??_CHARGDID_UPDATE               = 0x295D,
//    PACKET_??_REQ_LIST_MAIL                 = 0x29A4,
//    PACKET_??_REQ_OPEN_MAIL                 = 0x29A6,
};

//------------------------------------------------------------------------------
//  BODY_xxx
//  VarType : USHORT
//------------------------------------------------------------------------------
enum AEGIS_BODY
{
    BODY_FREEZING           = 0x0002,
    BODY_STUN,
    BODY_SLEEP,
    BODY_STONECURSE         = 0x0006,
//    BODY_UNDEAD,
//    BODY_ALL,

    BODY_FORCE_USHORT       = 0x7FFF,
};

//------------------------------------------------------------------------------
//  HEALTH_xxx
//  VarType : USHORT
//------------------------------------------------------------------------------
enum AEGIS_HEALTH
{
    HEALTH_POISON           = 0x0001,
    HEALTH_CURSE            = 0x0002,
    HEALTH_SILENCE          = 0x0004,
    HEALTH_CONFUSION        = 0x0008,
    HEALTH_BLIND            = 0x0010,
    HEALTH_ANGELUS          = 0x0020,   // NODEF
    HEALTH_SIGNUMCRUCIS     = 0x0040,   // NODEF
    HEALTH_DEADLYPOISON     = 0x0080,   // NODEF

    HEALTH_FORCE_USHORT     = 0x7FFF,
};

//------------------------------------------------------------------------------
//  EFLO_xxx
//  VarType : ULONG
//  Notes   : NODEF in AEGIS
//------------------------------------------------------------------------------
enum AEGIS_EFLO
{
    EFLO_SIGHT              = 0x00000001,
    EFLO_HIDING             = 0x00000002,
    EFLO_CLOAKING           = 0x00000004,
    EFLO_CART               = 0x00000008,
    EFLO_FALCON             = 0x00000010,
    EFLO_PECO               = 0x00000020,
    EFLO_INVISIBLE          = 0x00000040,
    EFLO_CART2              = 0x00000080,
    EFLO_CART3              = 0x00000100,
    EFLO_CART4              = 0x00000200,
    EFLO_CART5              = 0x00000400,
    EFLO_REVERSEORCISH      = 0x00000800,
    EFLO_WEDDING            = 0x00001000,
    EFLO_RUWACH             = 0x00002000,
    EFLO_CHASEWALK          = 0x00004000|EFLO_CLOAKING,
    EFLO_UNKNOWN            = 0x00008000,
    EFLO_SANTA              = 0x00010000,
    EFLO_SUMMER             = 0x00040000,

    EFLO_FORCE_ULONG        = 0x7FFFFFFF,
};

//------------------------------------------------------------------------------
//  EFLF_???
//  VarType : ULONG
//  Notes   : NODEF in AEGIS
//------------------------------------------------------------------------------
enum AEGIS_EFLF
{
    EFLF_QUICKEN            = 0x00000001,
    EFLF_OVERTRUST          = 0x00000002,
    EFLF_ENERGYCOAT         = 0x00000004,
    EFLF_EXPLOSIONSPIRITS   = 0x00000008,
    EFLF_STEELBODY          = 0x00000010,
    EFLF_BLADESTOP          = 0x00000020,
    EFLF_BERSERK            = 0x00000080,
    EFLF_MARIONETTE         = 0x00000400,
    EFLF_ASSUMPTIO          = 0x00000800,
    EFLF_SG_WARM            = 0x00001000,
    EFLF_SL_KAITE           = 0x00002000,
    EFLF_PERMANENTMASK      = 0x00004000,
    EFLF_SOULLINK           = 0x00008000,

    EFLF_SL_SWOO            = EFLF_QUICKEN,
    EFLF_SL_SKE             = EFLF_OVERTRUST,
    EFLF_SK_SKA             = EFLF_ENERGYCOAT,

    EFLF_FORCE_ULONG        = 0x7FFFFFFF,
};

//------------------------------------------------------------------------------
//  EFSC_xxx
//  VarType : ULONG
//  Notes   : NODEF in AEGIS
//------------------------------------------------------------------------------
enum AEGIS_EFSC
{
    EFSC_NIGHT              = 0x000000A0,   // 160
    EFSC_RAIN               = 0x000000A1,   // 161
    EFSC_SNOW               = 0x000000A2,   // 162
    EFSC_SAKURA             = 0x000000A3,   // 163
    EFSC_CLOUD1             = 0x000000E6,   // 230
    EFSC_CLOUD2             = 0x000000E9,   // 233
    EFSC_FIREWORKS1         = 0x00000129,   // 297
    EFSC_FIREWORKS2         = 0x0000012B,   // 299
    EFSC_FIREWORKS3         = 0x0000012D,   // 301
    EFSC_LEAVES             = 0x0000014D,   // 333
    EFSC_FOG1               = 0x00000203,   // 515
    EFSC_FOG2               = 0x00000204,   // 516

    EFSC_FORCE_ULONG        = 0x7FFFFFFF,
};

//------------------------------------------------------------------------------
//  EFBD_xxx
//  VarType : ULONG
//  Notes   : NODEF in AEGIS
//------------------------------------------------------------------------------
enum AEGIS_EFBD
{
    EFBD_ASSUMPTIO          = 0x00000177,   // 375
    EFBD_SPRITEDEC          = 0x000001A6,   // 422
    EFBD_SPRITEINC          = 0x000001A7,   // 423
    EFBD_SOULLINK           = 0x000001A8,   // 424
    EFBD_UNK_01B0           = 0x000001B0,   // 432
    EFBD_UNK_021F           = 0x0000021F,   // 543

    EFBD_FORCE_ULONG        = 0x7FFFFFFF,
};

//------------------------------------------------------------------------------
//  EFST_xxx
//  VarType : USHORT
//------------------------------------------------------------------------------
enum AEGIS_EFST
{
    EFST_PROVOKE                    = 0x0000,
    EFST_ENDURE,
    EFST_TWOHANDQUICKEN,
    EFST_CONCENTRATION,             //0x0003
    EFST_ENCHANTPOISON              = 0x0006,
    EFST_POISONREACT,
    EFST_QUAGMIRE,
    EFST_ANGELUS,
    EFST_BLESSING,                  //0x000A
    EFST_INC_AGI                    = 0x000C,
    EFST_DEC_AGI,
    EFST_SLOWPOISON,
    EFST_IMPOSITIO,
    EFST_SUFFRAGIUM,
    EFST_ASPERSIO,
    EFST_BENEDICTIO,
    EFST_KYRIE,
    EFST_MAGNIFICAT,
    EFST_GLORIA,
    EFST_LEXAETERNA,
    EFST_ADRENALINE,
    EFST_WEAPONPERFECT,
    EFST_OVERTHRUST,
    EFST_MAXIMIZE,                  //0x001A
    EFST_TRICKDEAD                  = 0x001D,
    EFST_SHOUT,
    EFST_ENERGYCOAT,
    EFST_BREAKSHIELD,                           // NODEF
    EFST_BREAKWEAPON,                           // NODEF
    EFST_HALLUCINATION,             //0x0022    // NODEF
    EFST_ATTHASTE_POTION1           = 0x0025,
    EFST_ATTHASTE_POTION2,
    EFST_ATTHASTE_POTION3,          //0x0027
    EFST_MOVHASTE_POTION            = 0x0029,
    EFST_BARRIER                    = 0x0031,
    EFST_NOEQUIPWEAPON,
    EFST_NOEQUIPSHIELD,
    EFST_NOEQUIPARMOR,
    EFST_NOEQUIPHELM,
    EFST_PROTECTWEAPON,
    EFST_PROTECTSHIELD,
    EFST_PROTECTARMOR,
    EFST_PROTECTHELM,
    EFST_AUTOGUARD,
    EFST_REFLECTSSHIELD,
    EFST_DIVOTION,
    EFST_PROVIDENCE,
    EFST_DEFENDER,
    EFST_MAGICROD,
    EFST_WEAPONPROPERTY,
    EFST_AUTOSPELL,
    EFST_SPECIALZONE                = 0x0042,
    EFST_MASK,
    EFST_SPEARQUICKEN,              //0x0044
    EFST_BLADESTOP                  = 0x0055,
    EFST_EXPLOSIONSPIRITS,
    EFST_STEELBODY,                 //0x0057
    EFST_PROPERTYFIRE               = 0x005A,
    EFST_PROPERTYWATER,
    EFST_PROPERTYWIND,
    EFST_PROPERTYGROUND,
    EFST_ARMOR_PROPERTYUNDEAD,
    EFST_STOP,                      //0x005F
    EFST_PROPERTYUNDEAD             = 0x0061,
    EFST_STATUSONE                  = 0x0066,
    EFST_AURABLADE,
    EFST_PARRYING,
    EFST_LKCONCENTRATION,
    EFST_TENSIONRELAX,
    EFST_BERSERK,
    EFST_SACRIFICE,
    EFST_GOSPEL,
    EFST_ASSUMPTIO,
    EFST_BASILICA,
    EFST_GROUNDMAGIC,
    EFST_MAGICPOWER,                //0x0071
    EFST_TRUESIGHT                  = 0x0073,
    EFST_WINDWALK,                  //0x0074
    EFST_BLOODING                   = 0x007C,
    EFST_JOINTBEAT,
    EFST_MINDBREAKER,
    EFST_MEMORIZE,
    EFST_FOGWALL,                   //0x0080
    EFST_RUN                        = 0x0085,
    EFST_STRUP                      = 0x0091,
    EFST_PROPERTYDARK,
    EFST_ADRENALINE2,
    EFST_PROPERTYTELEKINESIS,
    EFST_SOULLINK,                  //0x0095
    EFST_PLUSATTACKPOWER,
    EFST_PLUSMAGICPOWER,            //0x0097
    EFST_KAITE                      = 0x0099,
    EFST_KAAHI                      = 0x009D,
    EFST_KAUPE,                     //0x009E
    EFST_NIGHT                      = 0x00A0,   // NODEF
    EFST_ONEHANDQUICKEN,
    EFST_PRESERVE                   = 0x00B5,
    EFST_CHASEwALK2,                //0x00B6
    EFST_TRUESCENE                  = 0x00B8,   // NODEF
    EFST_MOVESLOW_POTION,
    EFST_DOUBLECASTING,
    EFST_GRAVITATION,
    EFST_OVERTHRUSTMAX,             //0x00BC
    EFST_TAROTCARD                  = 0x00BF,
    EFST_RG_CCONFINE_M              = 0x00C8,
    EFST_RG_CCONFINE_S,             //0x00C9
    EFST_NJ_UTSUSEMI                = 0x00CE,
    EFST_NJ_BUNSINJYUTSU,           //0x00CF
    EFST_MENTAL                     = 0x00D5,
    EFST_EXPMEMORY,
    EFST_PERFORMANCE,
    EFST_GAIN,                      //0x00D8
    EFST_DRIFT                      = 0x00DA,
    EFST_WALLSHIFT,
    EFST_REINCARNATION,             //0x00DC
    EFST_DENERGY                    = 0x00E3,
    EFST_DAURA                      = 0x00E8,
    EFST_DFREEZER,
    EFST_DPUNISH,
    EFST_DBARRIER,
    EFST_DWARNING,
    EFST_MOUSEWHEEL,                //0x00ED
    EFST_DACCEL                     = 0x00EF,
    EFST_DBLOCK,
    EFST_FOOD_STR,
    EFST_FOOD_AGI,
    EFST_FOOD_VIT,
    EFST_FOOD_DEX,
    EFST_FOOD_INT,
    EFST_FOOD_LUK,
    EFST_FOOD_BASICAVOIDANCE,
    EFST_FOOD_BASICHIT,
    EFST_FOOD_CRITICALSUCCESSVALUE, //0x00F9
    EFST_CASH_PLUSEXP,
    EFST_CASH_DEATHPENALTY,
    EFST_CASH_RECEIVEITEM,
    EFST_CASH_BOSS_ALARM,
    EFST_DA_ENERGY,
    EFST_DA_FIRSTSLOT,
    EFST_DA_HEADDEF,
    EFST_DA_SPACE,                  //0x0101
    EFST_DA_ITEMREBUILD             = 0x0103,
    EFST_DA_ILLUSION,               //0x0104
    EFST_DA_EARPLUG                 = 0x0106,
    EFST_DA_CONTRACT,
    EFST_DA_BLACK,
    EFST_DA_MAGICCART,
    EFST_DA_CRYSTAL,
    EFST_DA_REBUILD,
    EFST_DA_EDARKNESS,
    EFST_DA_EGUARDIAN,
    EFST_DA_TIMEOUT,
    EFST_FOOD_STR_CASH,
    EFST_FOOD_AGI_CASH,
    EFST_FOOD_VIT_CASH,
    EFST_FOOD_DEX_CASH,
    EFST_FOOD_INT_CASH,
    EFST_FOOD_LUK_CASH,             //0x0114
    EFST_MER_FLEE,
    EFST_MER_ATK,
    EFST_MER_HP,
    EFST_MER_SP,
    EFST_MER_HIT,                   //0x0119
    EFST_SLOWCAST                   = 0x011A,
    EFST_CRITICALWOUND              = 0x011E,
    EFST_MOVHASTE_HORSE             = 0x0121,
    EFST_PROTECT_DEF,
    EFST_PROTECT_MDEF,
    EFST_HEALPLUS,
    EFST_S_LEFEPOTION,
    EFST_L_LIFEPOTION,
    EFST_CRITICALPERCENT,
    EFST_PLUSAVOIDVALUE,
    EFST_ATKER_ASPD,
    EFST_TARGET_ASPD,
    EFST_ATKER_MOVESPEED,
    EFST_ATKER_BLOOD,
    EFST_TARGET_BLOOD,
    EFST_ARMOR_PROPERTY,
    EFST_REUSE_LIMIT_A,
    EFST_HELLPOWER,                 //0x0130

    EFST_ALL,
    EFST_NONE                       = EFST_MASK,

    EFST_FORCE_USHORT               = 0x7FFF,
};

//------------------------------------------------------------------------------
//  ClassID
//  VARTYPE : USHORT
//  Notes   : NODEF in AEGIS
//            ただしNPC_???の???はAEGIS定義
//------------------------------------------------------------------------------
enum AEGIS_CLASSID
{
    ACT_NOVICE                  = 0,
    ACT_SWORDMAN,
    ACT_MAGE,
    ACT_ARCHER,
    ACT_ACOLYTE,
    ACT_MARCHANT,
    ACT_THIEF,
    ACT_KNIGHT,
    ACT_PRIEST,
    ACT_WIZARD,
    ACT_BLACKSMITH,
    ACT_HUNTER,
    ACT_ASSASSIN,
    ACT_KNIGHT_WITH_PECO,
    ACT_CRUSADER,
    ACT_MONK,
    ACT_SAGE,
    ACT_ROGUE,
    ACT_ALCHEMIST,
    ACT_BARD,
    ACT_DANCER,
    ACT_CRUSADER_WITH_PECO,
    ACT_SUPERNOVICE             = 23,   // 0x0017
    ACT_GUNSLINGER,
    ACT_NINJA,
    ACT_NOVICE_HIGH             = 4001, // 0x0FA1
    ACT_SWORDMAN_HIGH,
    ACT_MAGE_HIGH,
    ACT_ARCHER_HIGH,
    ACT_ACOLYTE_HIGH,
    ACT_MARCHANT_HIGH,
    ACT_THIEF_HIGH,
    ACT_LORDKNIGHT,
    ACT_HIGHPRIEST,
    ACT_HIGHWIZARD,
    ACT_WHITESMITH,
    ACT_SNIPER,
    ACT_ASSASSINCROSS,
    ACT_LORDKNIGHT_WITH_PECO,
    ACT_PALADIN,
    ACT_CHAMPION,
    ACT_PROFESSOR,
    ACT_CHASER,
    ACT_CREATOR,
    ACT_CLOWN,
    ACT_GYPSY,
    ACT_PALADIN_WITH_PECO,
    ACT_SWORDMAN_B,
    ACT_MAGE_B,
    ACT_ARCHER_B,
    ACT_ACOLYTE_B,
    ACT_MARCHANT_B,
    ACT_THIEF_B,
    ACT_KNIGHT_B,
    ACT_PRIEST_B,
    ACT_WIZARD_B,
    ACT_BLACKSMITH_B,
    ACT_HUNTER_B,
    ACT_ASSASSIN_B,
    ACT_KNIGHT_B_WITH_PECO,
    ACT_CRUSADER_B,
    ACT_MONK_B,
    ACT_SAGE_B,
    ACT_ROGUE_B,
    ACT_ALCHEMIST_B,
    ACT_BARD_B,
    ACT_DANCER_B,
    ACT_CRUSADER_B_WITH_PECO,
    ACT_SUPERNOVICE_B,
    ACT_TAEKWON                 = 4046, // 0x0FCE
    ACT_STARGRADIATOR_M         = 4047, // 0x0FCF
    ACT_STARGRADIATOR_F,
    ACT_SOULLINKER              = 4049, // 0x0FD1
    ACT_MUNAK,
    ACT_DEATHKNIGHT,
    ACT_DARKCOLLCTOR,

    // alias
    ACT_MAGICIAN                = ACT_MAGE,
    ACT_STALKER                 = ACT_CHASER,
    // mask
    ACT_SECONDHIGH_JOB          = 4000,

    ACT_FORCE_USHORT            = 0x7FFF,
};

//------------------------------------------------------------------------------
//  SkillID
//  VARTYPE : USHORT
//------------------------------------------------------------------------------
enum AEGIS_SKILLID
{
    NV_BASIC                    = 1,
    SM_SWORD,
    SM_TWOHAND,
    SM_RECOVERY,
    SM_BASH,
    SM_PROVOKE,
    SM_MAGNUM,
    SM_ENDURE,
    MG_SRECOVERY,
    MG_SIGHT,
    MG_NAPALMBEAT,
    MG_SAFETYWALL,
    MG_SOULSTRIKE,
    MG_COLDBOLT,
    MG_FROSTDIVER,
    MG_STONECURSE,
    MG_FIREBALL,
    MG_FIREWALL,
    MG_FIREBOLT,
    MG_LIGHTNINGBOLT,
    MG_THUNDERSTORM,
    AL_DP,
    AL_DEMONBANE,
    AL_RUWACH,
    AL_PNEUMA,
    AL_TELEPORT,
    AL_WARP,
    AL_HEAL,
    AL_INCAGI,
    AL_DECAGI,
    AL_HOLYWATER,
    AL_CRUCIS,
    AL_ANGELUS,
    AL_BLESSING,
    AL_CURE,
    MC_INCCARRY,
    MC_DISCOUNT,
    MC_OVERCHARGE,
    MC_PUSHCART,
    MC_IDENTIFY,
    MC_VENDING,
    MC_MAMMONITE,
    AC_OWL,
    AC_VULTURE,
    AC_CONCENTRATION,
    AC_DOUBLE,
    AC_SHOWER,
    TF_DOUBLE,
    TF_MISS,
    TF_STEAL,
    TF_HIDING,
    TF_POISON,
    TF_DETOXIFY,
    ALL_RESURRECTION,
    KN_SPEARMASTERY,
    KN_PIERCE,
    KN_BRANDISHSPEAR,
    KN_SPEARSTAB,
    KN_SPEARBOOMERANG,
    KN_TWOHANDQUICKEN,
    KN_AUTOCOUNTER,
    KN_BOWLINGBASH,
    KN_RIDING,
    KN_CAVALIERMASTERY,
    PR_MACEMASTERY,
    PR_IMPOSITIO,
    PR_SUFFRAGIUM,
    PR_ASPERSIO,
    PR_BENEDICTIO,
    PR_SANCTUARY,
    PR_SLOWPOISON,
    PR_STRECOVERY,
    PR_KYRIE,
    PR_MAGNIFICAT,
    PR_GLORIA,
    PR_LEXDIVINA,
    PR_TURNUNDEAD,
    PR_LEXAETERNA,
    PR_MAGNUS,
    WZ_FIREPILLAR,
    WZ_SIGHTRASHER,
    WZ_FIREIVY,
    WZ_METEOR,
    WZ_JUPITEL,
    WZ_VERMILION,
    WZ_WATERBALL,
    WZ_ICEWALL,
    WZ_FROSTNOVA,
    WZ_STORMGUST,
    WZ_EARTHSPIKE,
    WZ_HEAVENDRIVE,
    WZ_QUAGMIRE,
    WZ_ESTIMATION,
    BS_IRON,
    BS_STEEL,
    BS_ENCHANTEDSTONE,
    BS_ORIDEOCON,
    BS_DAGGER,
    BS_SWORD,
    BS_TWOHANDSWORD,
    BS_AXE,
    BS_MACE,
    BS_KNUCKLE,
    BS_SPEAR,
    BS_HILTBINDING,
    BS_FINDINGORE,
    BS_WEAPONRESEARCH,
    BS_REPAIRWEAPON,
    BS_SKINTEMPER,
    BS_HAMMERFALL,
    BS_ADRENALINE,
    BS_WEAPONPERFECT,
    BS_OVERTHRUST,
    BS_MAXIMIZE,
    HT_SKIDTRAP,
    HT_LANDMINE,
    HT_ANKLESNARE,
    HT_SHOCKWAVE,
    HT_SANDMAN,
    HT_FLASHER,
    HT_FREEZINGTRAP,
    HT_BLASTMINE,
    HT_CLAYMORETRAP,
    HT_REMOVETRAP,
    HT_TALKIEBOX,
    HT_BEASTBANE,
    HT_FALCON,
    HT_STEELCROW,
    HT_BLITZBEAT,
    HT_DETECTING,
    HT_SPRINGTRAP,
    AS_RIGHT,
    AS_LEFT,
    AS_KATAR,
    AS_CLOAKING,
    AS_SONICBLOW,
    AS_GRIMTOOTH,
    AS_ENCHANTPOISON,
    AS_POISONREACT,
    AS_VENOMDUST,
    AS_SPLASHER,
    NV_FIRSTAID,
    NV_TRICKDEAD,
    SM_MOVINGRECOVERY,
    SM_FATALBLOW,
    SM_AUTOBERSERK,
    AC_MAKINGARROW,
    AC_CHARGEARROW,
    TF_SPRINKLESAND,
    TF_BACKSLIDING,
    TF_PICKSTONE,
    TF_THROWSTONE,
    MC_CARTREVOLUTION,
    MC_CHANGECART,
    MC_LOUD,
    AL_HOLYLIGHT,
    MG_ENERGYCOAT,
    NPC_PIERCINGATT,
    NPC_MENTALBREAKER,
    NPC_RANGEATTACK,
    NPC_ATTRICHANGE,
    NPC_CHANGEWATER,
    NPC_CHANGEGROUND,
    NPC_CHANGEFIRE,
    NPC_CHANGEWIND,
    NPC_CHANGEPOISON,
    NPC_CHANGEHOLY,
    NPC_CHANGETELEKINESIS,
    NPC_CHANGEDARKNESS,
    NPC_CRITICALSLASH,
    NPC_COMBOATTACK,
    NPC_GUIDEDATTACK,
    NPC_SELFDESTRUCTION,
    NPC_SPLASHATTACK,
    NPC_SUICIDE,
    NPC_POISON,
    NPC_BLINDATTACK,
    NPC_SILENCEATTACK,
    NPC_STUNATTACK,
    NPC_PETRIFYATTACK,
    NPC_CURSEATTACK,
    NPC_SLEEPATTACK,
    NPC_RANDOMATTACK,
    NPC_WATERATTACK,
    NPC_GROUNDATTACK,
    NPC_FIREATTACK,
    NPC_WINDATTACK,
    NPC_POISONATTACK,
    NPC_HOLYATTACK,
    NPC_DARKNESSATTACK,
    NPC_TELEKINESISATTACK,
    NPC_MAGICALATTACK,
    NPC_METAMORPHOSIS,
    NPC_PROVOCATION,
    NPC_SMOKING,
    NPC_SUMMONSLAVE,
    NPC_EMOTION,
    NPC_TRANSFORMATION,
    NPC_BLOODDRAIN,
    NPC_ENERGYDRAIN,
    NPC_KEEPING,
    NPC_DARKBREATH,
    NPC_DARKBLESSING,
    NPC_BARRIER,
    NPC_DEFENDER,
    NPC_LICK,
    NPC_HALLUCINATION,
    NPC_REBIRTH,
    NPC_SUMMONMONSTER,
    RG_SNATCHER,
    RG_STEALCOIN,
    RG_BACKSTAP,
    RG_TUNNELDRIVE,
    RG_RAID,
    RG_STRIPWEAPON,
    RG_STRIPSHIELD,
    RG_STRIPARMOR,
    RG_STRIPHELM,
    RG_INTIMIDATE,
    RG_GRAFFITI,
    RG_FLAGGRAFFITI,
    RG_CLEANER,
    RG_GANGSTER,
    RG_COMPULSION,
    RG_PLAGIARISM,
    AM_AXEMASTERY,
    AM_LEARNINGPOTION,
    AM_PHARMACY,
    AM_DEMONSTRATION,
    AM_ACIDTERROR,
    AM_POTIONPITCHER,
    AM_CANNIBALIZE,
    AM_SPHEREMINE,
    AM_CP_WEAPON,
    AM_CP_SHIELD,
    AM_CP_ARMOR,
    AM_CP_HELM,
    AM_BIOETHICS,
    AM_BIOTECHNOLOGY,
    AM_CREATECREATURE,
    AM_CULTIVATION,
    AM_FLAMECONTROL,
    AM_CALLHOMUN,
    AM_REST,
    AM_DRILLMASTER,
    AM_HEALHOMUN,
    AM_RESURRECTHOMUN,
    CR_TRUST,
    CR_AUTOGUARD,
    CR_SHIELDCHARGE,
    CR_SHIELDBOOMERANG,
    CR_REFLECTSHIELD,
    CR_HOLYCROSS,
    CR_GRANDCROSS,
    CR_DEVOTION,
    CR_PROVIDENCE,
    CR_DEFENDER,
    CR_SPEARQUICKEN,
    MO_IRONHAND,
    MO_SPIRITSRECOVERY,
    MO_CALLSPIRITS,
    MO_ABSORBSPIRITS,
    MO_TRIPLEATTACK,
    MO_BODYRELOCATION,
    MO_DODGE,
    MO_INVESTIGATE,
    MO_FINGEROFFENSIVE,
    MO_STEELBODY,
    MO_BLADESTOP,
    MO_EXPLOSIONSPIRITS,
    MO_EXTREMITYFIST,
    MO_CHAINCOMBO,
    MO_COMBOFINISH,
    SA_ADVANCEDBOOK,
    SA_CASTCANCEL,
    SA_MAGICROD,
    SA_SPELLBREAKER,
    SA_FREECAST,
    SA_AUTOSPELL,
    SA_FLAMELAUNCHER,
    SA_FROSTWEAPON,
    SA_LIGHTNINGLOADER,
    SA_SEISMICWEAPON,
    SA_DRAGONOLOGY,
    SA_VOLCANO,
    SA_DELUGE,
    SA_VIOLENTGALE,
    SA_LANDPROTECTOR,
    SA_DISPELL,
    SA_ABRACADABRA,
    SA_MONOCELL,
    SA_CLASSCHANGE,
    SA_SUMMONMONSTER,
    SA_REVERSEORCISH,
    SA_DEATH,
    SA_FORTUNE,
    SA_TAMINGMONSTER,
    SA_QUESTION,
    SA_GRAVITY,
    SA_LEVELUP,
    SA_INSTANTDEATH,
    SA_FULLRECOVERY,
    SA_COMA,
    BD_ADAPTATION,
    BD_ENCORE,
    BD_LULLABY,
    BD_RICHMANKIM,
    BD_ETERNALCHAOS,
    BD_DRUMBATTLEFIELD,
    BD_RINGNIBELUNGEN,
    BD_ROKISWEIL,
    BD_INTOABYSS,
    BD_SIEGFRIED,
    BD_RAGNAROK,
    BA_MUSICALLESSON,
    BA_MUSICALSTRIKE,
    BA_DISSONANCE,
    BA_FROSTJOKE,
    BA_WHISTLE,
    BA_ASSASSINCROSS,
    BA_POEMBRAGI,
    BA_APPLEIDUN,
    DC_DANCINGLESSON,
    DC_THROWARROW,
    DC_UGLYDANCE,
    DC_SCREAM,
    DC_HUMMING,
    DC_DONTFORGETME,
    DC_FORTUNEKISS,
    DC_SERVICEFORYOU,
    NPC_SELFDESTRUCTION2,
    WE_MALE                     = 334,
    WE_FEMALE,
    WE_CALLPARTNER,
    ITM_TOMAHAWK,
    NPC_DARKCROSS,
    NPC_DARKGRANDCROSS,
    NPC_DARKSOULSTRIKE,
    NPC_DARKJUPITEL,
    NPC_HOLDWEB,
    NPC_BREAKWEAPON,
    NPC_BREAKARMOR,
    NPC_BREAKHELM,
    NPC_BREAKSIELD,
    NPC_UNDEADATTACK,
    NPC_RUNAWAY,
    NPC_EXPLOSIONSPIRITS,
    NPC_INCREASEFLEE,
    NPC_ELEMENTUNDEAD,
    NPC_INVISIBLE,
    NPC_RECALL                  = 354,
    LK_AURABLADE,
    LK_PARRYING,
    LK_CONCENTRATION,
    LK_TENSIONRELAX,
    LK_BERSERK,
    LK_FURY,
    HP_ASSUMPTIO,
    HP_BASILICA,
    HP_MEDITATIO,
    HW_SOULDRAIN,
    HW_MAGICCRASHER,
    HW_MAGICPOWER,
    PA_PRESSURE,
    PA_SACRIFICE,
    PA_GOSPEL,
    CH_PALMSTRIKE,
    CH_TIGERFIST,
    CH_CHAINCRUSH,
    PF_HPCONVERSION,
    PF_SOULCHANGE,
    PF_SOULBURN,
    ASC_KATAR,
    ASC_HALLUCINATION,
    ASC_EDP,
    ASC_BREAKER,
    SN_SIGHT,
    SN_FALCONASSAULT,
    SN_SHARPSHOOTING,
    SN_WINDWALK,
    WS_MELTDOWN,
    WS_CREATECOIN,
    WS_CREATENUGGET,
    WS_CARTBOOST,
    WS_SYSTEMCREATE,
    ST_CHASEWALK,
    ST_REJECTSWORD,
    ST_STEALBACKPACK,
    CR_ALCHEMY,
    CR_SYNTHESISPOTION,
    CG_ARROWVULCAN,
    CG_MOONLIT,
    CG_MARIONETTE,
    LK_SPIRALPIERCE,
    LK_HEADCRUSH,
    LK_JOINTBEAT,
    HW_NAPALMVULCAN,
    CH_SOULCOLLECT,
    PF_MINDBREAKER,
    PF_MEMORIZE,
    PF_FOGWALL,
    PF_SPIDERWEB,
    ASC_METEORASSAULT,
    ASC_CDP,
    WE_BABY,
    WE_CALLPARENT,
    WE_CALLBABY,
    TK_RUN,
    TK_READYSTORM,
    TK_STORMKICK,
    TK_READYDOWN,
    TK_DOWNKICK,
    TK_READYTURN,
    TK_TURNKICK,
    TK_READYCOUNTER,
    TK_COUNTER,
    TK_DODGE,
    TK_JUMPKICK,
    TK_HPTIME,
    TK_SPTIME,
    TK_POWER,
    TK_SEVENWIND,
    TK_HIGHJUMP,
    SG_FEEL,
    SG_SUN_WARM,
    SG_MOON_WARM,
    SG_STAR_WARM,
    SG_SUN_COMFORT,
    SG_MOON_COMFORT,
    SG_STAR_COMFORT,
    SG_HATE,
    SG_SUN_ANGER,
    SG_MOON_ANGER,
    SG_STAR_ANGER,
    SG_SUN_BLESS,
    SG_MOON_BLESS,
    SG_STAR_BLESS,
    SG_DEVIL,
    SG_FRIEND,
    SG_KNOWLEDGE,
    SG_FUSION,
    SL_ALCHEMIST,
    AM_BERSERKPITCHER,
    SL_MONK,
    SL_STAR,
    SL_SAGE,
    SL_CRUSADER,
    SL_SUPERNOVICE,
    SL_KNIGHT,
    SL_WIZARD,
    SL_PRIEST,
    SL_BARDDANCER,
    SL_ROGUE,
    SL_ASSASIN,
    SL_BLACKSMITH,
    BS_ADRENALINE2,
    SL_HUNTER,
    SL_SOULLINKER,
    SL_KAIZEL,
    SL_KAAHI,
    SL_KAUPE,
    SL_KAITE,
    SL_KAINA,
    SL_STIN,
    SL_STUN,
    SL_SMA,
    SL_SWOO,
    SL_SKE,
    SL_SKA,
    ST_PRESERVE                 = 475,
    ST_FULLSTRIP,
    WS_WEAPONREFINE,
    CR_SLIMPITCHER,
    CR_FULLPROTECTION,
    PA_SHIELDCHAIN,
    HP_MANARECHARGE,
    PF_DOUBLECASTING,
    HW_GANBANTEIN,
    HW_GRAVITATION,
    WS_CARTTERMINATION,
    WS_OVERTHRUSTMAX,
    CG_LONGINGFREEDOM,
    CG_HERMODE,
    CG_TAROTCARD,
    CR_ACIDDEMONSTRATION,
    CR_CULTIVATION,
    ITEM_ENCHANTARMS            = 492,  // 0x01EC
    TK_MISSION                  = 493,
    SL_HIGH,
    KN_ONEHAND,
    AM_TWILIGHT1,
    AM_TWILIGHT2,
    AM_TWILIGHT3,
    HT_POWER,
    NPC_EARTHQUAKE              = 653,
    NPC_FIREBREATH,
    NPC_ICEBREATH,
    NPC_THUNDERBREATH,
    NPC_ACIDBREATH,
    NPC_DARKNESSBREATH,
    NPC_DRAGONFEAR,
    NPC_BLEEDING,
    NPC_PULSESTRIKE,
    NPC_HELLJUDGEMENT,
    NPC_WIDESILENCE,
    NPC_WIDEFREEZE,
    NPC_WIDEBLEEDING,
    NPC_WIDESTONE,
    NPC_WIDECONFUSE,
    NPC_WIDESLEEP,
    NPC_WIDESIGHT,
    NPC_EVILLAND,
    NPC_MAGICMIRROR,
    NPC_SLOWCAST,
    NPC_CRITICALWOUND,
    NPC_EXPULSION,
    NPC_STONESKIN,
    NPC_ANTIMAGIC,
    NPC_WIDECURSE,
    NPC_WIDESTUN,
    NPC_VAMPIRE_GIFT,
    NPC_WIDESOULDRAIN,
    KN_CHARGEATK                = 1001,
    CR_SHRINK,
    AS_SONICACCEL,
    AS_VENOMKNIFE,
    RG_CLOSECONFINE,
    WZ_SIGHTBLASTER,
    SA_CREATECON,
    SA_ELEMENTWATER,
    HT_PHANTASMIC,
    BA_PANGVOICE,
    DC_WINKCHARM,
    BS_UNFAIRLYTRICK,
    BS_GREED,
    PR_REDEMPTIO,
    MO_KITRANSLATION,
    MO_BALKYOUNG,
    SA_ELEMENTGROUND,
    SA_ELEMENTFIRE,
    SA_ELEMENTWIND,
    HLIF_HEAL                   = 8001,
    HLIF_AVOID,
    HLIF_BRAIN,
    HLIF_CHANGE,
    HAMI_CASTLE,
    HAMI_DEFENCE,
    HAMI_SKIN,
    HAMI_BLOODLUST,
    HFLI_MOON,
    HFLI_FLEET,
    HFLI_SPEED,
    HFLI_SBR44,
    HVAN_CAPRICE,
    HVAN_CHAOTIC,
    HVAN_INSTRUCT,
    HVAN_EXPLOSION,
    GD_APPROVAL                 = 10000,
    GD_KAFRACONTACT,
    GD_GUARDIANRESEARCH,
    GD_GUARDUP,
    GD_EXTENSION,
    GD_GLORYGUILD,
    GD_LEADERSHIP,
    GD_GLORYWOUNDS,
    GD_SOULCOLD,
    GD_HAWKEYES,
    GD_BATTLEORDER,
    GD_REGENERATION,
    GD_RESTORE,
    GD_EMERGENCYCALL,
    GD_DEVELOPMENT,

    SKILLID_FORCE_USHORT        = 0x7FFF,
};

#endif  // _ENUMAEGIS_
