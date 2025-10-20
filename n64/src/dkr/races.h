#ifndef DKR_FN_RACES_H
#define DKR_FN_RACES_H
typedef struct {
        u8 _unkown7: 1;
        u8 _unkown6: 1;
        u8 _unkown5: 1;
        u8 _unkown4: 1;
        u8 _unkown3: 1;
        u8 race2_complete: 1;
        u8 race1_complete: 1;
        u8 visited: 1;
    } dkr_race_status_t;

    #define dkr_ancient_lake_flags (*(dkr_race_status_t*)0x801FCAFF) 
    #define dkr_fossil_canyon_flags (*(dkr_race_status_t*)0x801FCAF7) 
    #define dkr_jungle_falls_flags (*(dkr_race_status_t*)0x801FCB5F) 
    #define dkr_hot_top_volcano_flags (*(dkr_race_status_t*)0x801FCB07) 

    #define dkr_everfrost_peak_flags (*(dkr_race_status_t*)0x801FCB1F) 
    #define dkr_walrus_cove_flags (*(dkr_race_status_t*)0x801FCB03) 
    #define dkr_snowball_valley_flags (*(dkr_race_status_t*)0x801FCB0F) 
    #define dkr_frosty_village_flags (*(dkr_race_status_t*)0x801FCB5B) 

    #define dkr_whale_bay_flags (*(dkr_race_status_t*)0x801FCB0B) 
    #define dkr_cresent_island_flags (*(dkr_race_status_t*)0x801FCB13) 
    #define dkr_pirate_lagoon_flags (*(dkr_race_status_t*)0x801FCAFB) 
    #define dkr_treasure_caves_flags (*(dkr_race_status_t*)0x801FCB63) 

    #define dkr_windmill_plains_flags (*(dkr_race_status_t*)0x801FCB3B) 
    #define dkr_greenwood_village_flags (*(dkr_race_status_t*)0x801FCB33) 
    #define dkr_boulder_canyon_flags (*(dkr_race_status_t*)0x801FCB37) 
    #define dkr_haunted_woods_flags (*(dkr_race_status_t*)0x801FCB67) 

    #define dkr_spacedust_valley_flags (*(dkr_race_status_t*)0x801FCB2F) 
    #define dkr_darkmoon_cavern_flags (*(dkr_race_status_t*)0x801FCB6B) 
    #define dkr_spaceport_alpha_flags (*(dkr_race_status_t*)0x801FCB27) 
    #define dkr_star_city_flags (*(dkr_race_status_t*)0x801FCB6F) 

    typedef void (*dkr_fnt_race_course)(u8 race_id, u32 unknown_1, u32 unknown_2, u32 unknown_3);
    #define dkr_fn_race_course ((dkr_fnt_race_course)0x8006CB58)

    typedef void (*dkr_fnt_race_replay)(u8 race_id);
    #define dkr_fn_race_replay ((dkr_fnt_race_replay)0x8006E2E8)

    typedef u8 (*dkr_fnt_mirror_race)();
    #define dkr_fn_mirror_race ((dkr_fnt_mirror_race)0x8009EC70)

    #define dkr_adv2 (*(u8*)0x800DF497)

    #define dkr_coin_requirements (*(u8*)0x801FCA18)

#endif
