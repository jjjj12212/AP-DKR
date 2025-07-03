#ifndef DKR_FN_INJECTED_H
#define DKR_FN_INJECTED_H

// typedef void (*sg_fnt_main_init)(u32);
// #define sg_fn_main_init ((sg_fnt_main_init)0x80057950)
//8003B5DC JAL 0x80057950

typedef bool (*dkr_fnt_unknown_start_loop)();
#define dkr_fn_unknown_start_loop ((dkr_fnt_unknown_start_loop)0x8006C60C)

#define dkr_unknown_address1 (*(u32*) 0x80123584)
#define dkr_demo_cart_state (*(u32*) 0x801234EC)
#define dkr_intro_cutscene_skip_flag (*(u8*) 0x8011AD22)

typedef void (*dkr_fnt_unknown_object_init)(u32 ptr, u32 ptr2, u8 _unkown1, u16 _unkown2);
#define dkr_fn_unknown_object_init ((dkr_fnt_unknown_object_init)0x800C8BB0)

#define dkr

#define dkr_tt_door_amulet_override (*(u8*) 0x8003C4EB)
#define dkr_tt_ldoor_amulet_digit_1 (*(u8*) 0x8020B752)
#define dkr_tt_ldoor_amulet_digit_2 (*(u8*) 0x8020B753)
#define dkr_tt_ldoor_amulet_digit_3 (*(u8*) 0x8020B754)
#define dkr_tt_rdoor_amulet_digit_1 (*(u8*) 0x8020BB11)
#define dkr_tt_rdoor_amulet_digit_2 (*(u8*) 0x8020BB12)
#define dkr_tt_rdoor_amulet_digit_3 (*(u8*) 0x8020BB13)

#define dkr_tt_door_balloon_override (*(u8*) 0x8003C523) 
#define dkr_tt_ldoor_balloon_digit_1 (*(u8*) 0x8020B789)
#define dkr_tt_ldoor_balloon_digit_2 (*(u8*) 0x8020B78A)
#define dkr_tt_rdoor_balloon_digit_1 (*(u8*) 0x8020BB49)
#define dkr_tt_rdoor_balloon_digit_2 (*(u8*) 0x8020BB4A)


#define dkr_boss_l_door_digit_1 (*(u8*) 0x8020B76A)
#define dkr_boss_l_door_digit_2 (*(u8*) 0x8020B76B)
#define dkr_boss_l_door_digit_3 (*(u8*) 0x8020B76C)
#define dkr_boss_r_door_digit_1 (*(u8*) 0x8020BB2A)
#define dkr_boss_r_door_digit_2 (*(u8*) 0x8020BB2B)
#define dkr_boss_r_door_digit_3 (*(u8*) 0x8020BB2C)

#define dkr_open_pig_cutscene_override (*(u8*) 0x8006B5E7)
#define dkr_open_boss_race1_cutscene_override (*(u8*) 0x8006B97B)
#define dkr_open_boss_race2_cutscene_override (*(u8*) 0x8006B9BB)
#define dkr_open_boss_race2_graphic_override (*(u8*) 0x8003BEFB)

#define dkr_open_boss_race2_race_override1 (*(u8*) 0x80038FFF)
#define dkr_open_boss_race2_race_override2 (*(u8*) 0x80038FCB)

#define dkr_minigame_cutscene (*(u32*) 0x8012351C)

#define dkr_ingame_timer (*(u32*) 0x800DC680)

typedef u32 (*dkr_fnt_transform_racer)(u8 vehicle_type, u8 _zero, u8 _zero2, u32 ptr);
#define dkr_fn_transform_racer ((dkr_fnt_transform_racer)0x8000CC7C)

typedef void (*dkr_fnt_overworld_transform_racer)(u32 ptr, u8 vehicle_type);
#define dkr_fn_overworld_transform_racer ((dkr_fnt_overworld_transform_racer)0x8000E1EC)


#endif