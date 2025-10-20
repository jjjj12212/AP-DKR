#ifndef PC_H
#define PC_H

#include "util.h"
#include "dkr/door_cost.h"
#include "dkr/items.h"
#include "dkr/objects.h"
#include "items.h"
#include "dkr/cart.h"
#include "dkr/tracks.h"

//Dialog:
//first 16 bits are reserved
//make sure last bit is set to 00.


/* setting_balloon_type:
    setting_change_balloons must be set
    0 = All Speed
    1 = All Missle
    2 = All Slip
    3 = All Shield
    4 = All Magnet
    5 = Random
    6 = Random but hidden
    7 = in-level shuffle
    8 = random shuffle
*/

typedef struct {
    u8 items[AP_MAX_ITEM];
    u8 door_cost[AP_MAX_DOORS];
    struct {
        u8 actual_track;
        u8 mirror;
        u8 music;
    } tracks[AP_MAX_TRACKS];
    u8 message[67];
    u8 text_queue;
    struct {
        u8 victory_condition;
        u8 setting_open_worlds;
        u8 setting_shuffle_wizpig_amulet;
        u8 setting_shuffle_tt_amulet;
        u8 setting_door_progression;
        u8 setting_max_door_requirement;
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
        u8 setting_bridge_balloon;
        u8 setting_shuffle_vehicles;
        u8 setting_sv_including_overworld;
        u8 setting_shuffle_tracks;
        u8 setting_shuffle_opponent_karts;
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
        u8 red;
        u8 green;
        u8 blue;
        u8 purple;
        u8 rainbow;
    } total_balloon_colour_map;
    struct {
        u8 red;
        u8 green;
        u8 blue;
        u8 purple;
        u8 rainbow;
    } balloon_colour_map;
    struct {
        silvercoin_t *silvercoin_ptrs;
        u16 silvercoin_id;
        bool collected;
    } n64_silvercoins[8];
    u8 coin_map;
    u8 mirror_current_race;
    u8 overworld_cart;
} ap_memory_pc_t;

#endif
