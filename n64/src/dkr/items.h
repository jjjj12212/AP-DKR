#ifndef DKR_FN_ITEMS_H
#define DKR_FN_ITEMS_H

#define total_golden_balloons (*(u8*)0x801FCBED)
#define dino_golden_balloons (*(u16*)0x801FCBEE)
#define island_golden_balloons (*(u16*)0x801FCBF0)
#define snowflake_golden_balloons (*(u16*)0x801FCBF2)
#define dragon_golden_balloons (*(u16*)0x801FCBF4)
#define future_golden_balloons (*(u16*)0x801FCBF6)

typedef struct {
    u8 _notused: 3;
    u8 dragon_key: 1;
    u8 snowflake_key: 1;
    u8 island_key: 1;
    u8 dino_key: 1;
    u8 notused1: 1;
} dkr_keys_t;

typedef struct {
    u8 _unused1: 6;
    u8 dragon_second_race: 1;
    u8 walrus_second_race: 1;
    u8 octo_second_race: 1;
    u8 dino_second_race: 1;
    u8 wizpig2: 1;
    u8 dragon_first_race: 1;
    u8 walrus_first_race: 1;
    u8 octo_first_race: 1;
    u8 dino_first_race: 1;
    u8 wizpig1: 1;
} boss_t;

typedef struct {
    u8 dragon_gold: 1;
    u8 dragon_bronze: 1;
    u8 snow_gold: 1;
    u8 snow_bronze: 1;
    u8 island_gold: 1;
    u8 island_bronze: 1;
    u8 dino_gold: 1;
    u8 dino_bronze: 1;
} trophies_t;

#define dkr_keys (*(dkr_keys_t*)0x801FC9D9)
#define dkr_beaten_bosses (*(boss_t*) 0x801FC9DC)
#define dkr_wizpig_amulet (*(u8*)0x801FC9E7)
#define dkr_tt_amulet (*(u8*)0x801FC9E6)
#define dkr_trophies (*(trophies_t*)0x801FC9DF)

typedef void (*dkr_fnt_dont_spawn_key)(u32 ptr, u32 ptr2, u8 zero, u8 id);
#define dkr_fn_dont_spawn_key ((dkr_fnt_dont_spawn_key)0x8000FFB8)

typedef void (*dkr_fnt_collect_key_v0)();
#define dkr_fn_collect_key_v0 ((dkr_fnt_collect_key_v0)0x8006EA90)

#endif