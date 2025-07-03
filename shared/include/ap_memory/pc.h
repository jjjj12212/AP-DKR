#ifndef PC_H
#define PC_H

#include "util.h"
#include "dkr/door_cost.h"
#include "dkr/items.h"
#include "dkr/objects.h"
#include "items.h"
#include "dkr/cart.h"

//Dialog:
//first 16 bits are reserved
//make sure last bit is set to 00.


typedef struct {
    u8 items[AP_MAX_ITEM];
    u8 door_cost[AP_MAX_DOORS];
    u8 message[67];
    u8 text_queue; 
    struct {
        u8 victory_condition; //don't think ROM will need this
        u8 setting_open_worlds; 
        u8 setting_shuffle_wizpig_amulet; 
        u8 setting_shuffle_tt_amulet; 
        u8 setting_door_progression; 
        u8 setting_max_door_requirement; //don't think ROM will need this 
        u8 setting_shuffle_door_requirements; 
        u8 setting_boss1_regional_balloons; 
        u8 setting_boss2_regional_balloons; 
        u8 setting_wizpig_amulet_pieces; 
        u8 setting_tt_amulet_pieces; 
        u8 setting_wizpig2_balloons; 
        u8 setting_skip_trophy_races; 
        u8 setting_random_cart; 
        u8 setting_change_balloons; 
        u8 setting_balloon_type; 
        u8 setting_shuffle_vehicles;
        u8 setting_sv_including_overworld;
    } settings;
    u8 n64_text_queue; 
    dkr_keys_t n64_keys_location;
    struct {
        balloon_t *balloon_ptrs;
        u16 balloon_id;
        bool collected;  
    } n64_balloons[64];
    u8 balloons_map;
    u8 total_balloons;
    struct {
        silvercoin_t *silvercoin_ptrs;
        u16 silvercoin_id;
        bool collected;
    } n64_silvercoins[8];
    u8 coin_map;
} ap_memory_pc_t;

#endif
