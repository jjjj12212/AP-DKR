#ifndef DKR_FN_MUSIC_H
#define DKR_FN_MUSIC_H

    enum MUSIC {
        MUSIC_OVERWORLD           = 0x05,
        MUSIC_ANCIENT_LAKE        = 0x0A,
        MUSIC_SNOWBALL_VALLEY     = 0x16,
        MUSIC_CRESCENT_ISLAND     = 0x25,
        MUSIC_HOT_TOP_VOLC        = 0x0E,
        MUSIC_JUNGLE_FALLS        = 0x09,
        MUSIC_FOSSIL_CANYON       = 0x0D,
        MUSIC_FROSTY_VILLAGE      = 0x0B,
        MUSIC_EVERFROST_PEAK      = 0x16,
        MUSIC_WALRUS_COVE         = 0x10,
        MUSIC_WHALE_BAY           = 0x0F,
        MUSIC_PIRATE_LAGOON       = 0x41,
        MUSIC_TREASURE_CAVES      = 0x41,
        MUSIC_WINDMILL_PLAINS     = 0x1F,
        MUSIC_GREENWOOD_VILLAGE   = 0x1F,
        MUSIC_BOULDER_CANYON      = 0x28,
        MUSIC_HAUNTED_WOODS       = 0x3F,
        MUSIC_SPACEDUST_ALLEY     = 0x27,
        MUSIC_DARKMOON_CAVERNS    = 0x08,
        MUSIC_SPACEPORT_ALPHA     = 0x2A,
        MUSIC_STAR_CITY           = 0x27
    };
    typedef void (*dkr_fnt_music_race)(u8 race_id);
    #define dkr_fn_music_race ((dkr_fnt_music_race)0x80000B34)
#endif
