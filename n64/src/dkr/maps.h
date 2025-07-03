#ifndef DKR_FN_MAPS_H
#define DKR_FN_MAPS_H

    enum MAPS {
        MAP_OVERWORLD           = 0x00,
        MAP_DINO_DOMAIN         = 0x0C,
        MAP_DINO_BOSS1          = 0x26,
        MAP_DINO_BOSS2          = 0x2E,
        MAP_DRAGON_FOREST       = 0x02,
        MAP_DRAGON_BOSS1        = 0x29,
        MAP_DRAGON_BOSS2        = 0x36,
        MAP_SHERBET_ISLAND      = 0x0E,
        MAP_OCTO_BOSS1          = 0x28,
        MAP_OCTO_BOSS2          = 0x35,
        MAP_SNOWFLAKE_MOUNTAIN  = 0x18,
        MAP_WALRUS_BOSS1        = 0x01,
        MAP_WALRUS_BOSS2        = 0x34,
        MAP_FUTURE_FUN          = 0x23,
        MAP_ANCIENT_LAKE        = 0x05,
        MAP_SNOWBALL_VALLEY     = 0x09,
        MAP_CRESCENT_CAVE       = 0x0A,
        MAP_BOULDER_CANYON      = 0x13,
        MAP_WIZPIG_BOSS1        = 0x25,
        MAP_WIZPIG_BOSS2        = 0x37,
        MAP_CREDITS             = 0xFE,
        MAP_ICE_PYRAMID         = 0x1B,
        MAP_DARKWATER_BEACH     = 0x1A,
        MAP_FIRE_MOUNTAIN       = 0x0B,
        MAP_HOT_TOP_VOLC        = 0x07,
        MAP_JUNGLE_FALLS        = 0x1D,
        MAP_FOSSIL_CANYON       = 0x03,
        MAP_FROSTY_VILLAGE      = 0x1C,
        MAP_EVERFROST_PEAK      = 0x0D,
        MAP_WALRUS_COVE         = 0x06,
        MAP_WHALE_BAY           = 0x08,
        MAP_PIRATE_LAGOON       = 0x04,
        MAP_TREASURE_CAVES      = 0x1E,
        MAP_WINDMILL_PLAINS     = 0x14,
        MAP_GREENWOOD_VILLAGE   = 0x12,
        MAP_HAUNTED_WOODS       = 0x1F,
        MAP_SMOKEY_CASTLE       = 0x19,
        MAP_SPACEDUST_ALLEY     = 0x11,
        MAP_DARKMOON_CAVERNS    = 0x20,
        MAP_SPACEPORT_ALPHA     = 0x0F,
        MAP_STAR_CITY           = 0x21
    };

    typedef struct {
        u8 wizpig_2_cutscene: 1;
        u8 _unkown6: 1;
        u8 _unkown5: 1;
        u8 _unkown4: 1;
        u8 _unkown3: 1;
        u8 _unkown2: 1;
        u8 _unkown1: 1;
        u8 lighthouse_rocket : 1;
    } progression_t;

    #define dkr_current_map (*(u8*)0x801234F7) 
    #define dkr_progression (*(progression_t*) 0x801FC9E3)



#endif
