//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/trainers.h' to remove #line markers.
//

#line 1 "src/data/trainers.party"

#line 11
    [TRAINER_NONE] =
    {
#line 13
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 14
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 16
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 17
        .doubleBattle = FALSE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 19
    [TRAINER_SAWYER_1] =
    {
#line 20
        .trainerName = _("SAWYER"),
#line 21
        .trainerClass = TRAINER_CLASS_HIKER,
#line 22
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 24
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 25
        .doubleBattle = FALSE,
#line 26
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 28
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 30
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 29
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 32
    [TRAINER_JOSHUA] =
    {
#line 33
        .trainerName = _("JOSHUA"),
#line 34
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 35
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
0,
#line 37
        .doubleBattle = FALSE,
#line 38
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 40
            .species = SPECIES_RATTATA_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 42
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 41
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 44
    [TRAINER_JAKE] =
    {
#line 45
        .trainerName = _("JAKE"),
#line 46
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 47
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
0,
#line 49
        .doubleBattle = FALSE,
#line 50
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 52
            .species = SPECIES_KRICKETOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 54
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 53
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 56
            .species = SPECIES_KRICKETOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 58
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 57
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 60
    [TRAINER_JENNY] =
    {
#line 61
        .trainerName = _("JENNY"),
#line 62
        .trainerClass = TRAINER_CLASS_LASS,
#line 63
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 64
F_TRAINER_FEMALE | 
0,
#line 65
        .doubleBattle = FALSE,
#line 66
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 68
            .species = SPECIES_RALTS_REGIONAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 70
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 69
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 72
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 74
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 73
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 76
    [TRAINER_RED] =
    {
#line 77
        .trainerName = _("RED"),
#line 78
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 79
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 81
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 82
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 84
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 86
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 85
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 88
    [TRAINER_LEAF] =
    {
#line 89
        .trainerName = _("LEAF"),
#line 90
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 91
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender = 
#line 92
F_TRAINER_FEMALE | 
#line 93
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 94
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 96
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 98
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 97
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 100
    [TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 101
        .trainerName = _("BRENDAN"),
#line 102
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 103
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender = 
#line 105
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 106
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 108
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 109
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 112
    [TRAINER_MAY_PLACEHOLDER] =
    {
#line 113
        .trainerName = _("MAY"),
#line 114
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 115
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender = 
#line 116
F_TRAINER_FEMALE | 
#line 117
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 118
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 120
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 122
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 121
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
