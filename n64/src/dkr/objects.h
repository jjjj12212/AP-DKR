#ifndef DKR_FN_OBJECTS_H
#define DKR_FN_OBJECTS_H

    typedef struct {
        u32 empty;
        u32 _unkown1;
        u32 _unkown3;
        u32 object_type;
        u32 ptr1;
        u32 ptr2;
        u32 ptr3;
        u32 ptr4;

        u16 empty1;
        u8  empty2;
        u8  object_id;
    } parent_object_type_t;

    typedef struct {
        u32 empty;
        u32 _unkown1;
        u32 _unkown2;
        u32 object_type;
        u32 ptr1;
        u32 ptr2;
        u32 ptr3;
        u32 ptr4;

        u16 empty1;
        u8  empty2;
        u8  object_id;
        u32 ptr5;
        u32 _unkown3;
        u32 _unkown4;
        u32 _unkown5;
        u32 _unkown6;
        u32 _unkown7;
        u32 _unkown8;

        u32 _unkown9;
        u32 _unkown10;
        u32 _unkown11;
        u32 _unkown12;
        u32 _unkown13;
        u32 _unkown14;
        u32 _unkown15;
        u32 _unkown16;

        u32 _unkown17;
        u32 _unkown18;
        u32 _unkown19;
        u32 _unkown20;
        u32 _unkown21;
        u32 _unkown22;
        u16 _empty3;
        u16 amulet_0;
        u16 _empty4;
        u16 amulet_1;

        u16 _empty5;
        u16 amulet_2;
        u16 _empty6;
        u16 amulet_3;
    } pighead_header_object_t;


    //802176AC Access 0x0 and 0x10 from this pointer.. unsure what this does yet. 
    //if 802176AC, access 0x0015 to get Coin cost door //Code: 8003BDA8
    //802176C1 = 06
    //802176AC = 19
    //802176BC = 00
    typedef struct {
        u8 _unkown1;
        u8 _unkown2;
        u16 _unkown3;

        u32 _unkown4;
        u32 _unkown5;
        u32 _unkown6;
        u32 _unkown7;

        u8 _unkown8;
        u8 second_cost;
    } second_cost_t;

    typedef struct {
        u16 id;
        u16 _unknown1;
        u16 _unknown2;
        u16 _unknown3;
        float size;
        float pos_z;
        float pos_y;
        float pos_x;
        u32 _empty1;
        u32 _empty2;

        u32 _empty3;
        u32 _empty4;
        u32 _empty5;
        u16 _unknown4;
        u16 _unknown_val5;
        float distance_calc;
        float _unkown5;
        u8 _unknown6;
        u8 opacity; //Potential Trap: 8002A940 = 24050000 instead of 240500FF
        u8 graphic;
        u8 _empty6;
        second_cost_t *second_cost_pointer; //Access 0x0 and 0x10 from this pointer.. unsure what this does yet. //if 802176AC, access 0x0015 to get Coin cost door //Code: 8003BDA8

        parent_object_type_t *parent_obj_pointer;
        u32 object_pointer; //controls more Door Properties... we don't need to mess with this this. ID D points to 8021EDB0
        u16 object_behaviour;
        u16 _unknown7;
        u32 _unknown_pointer; //points lower part of its own object... unsure if its really that useful.
        u32 _none_pointer1; // Not used
        u32 _none_pointer2; //Not used
        u32 _none_pointer3; //Not used
        u32 _unknown_pointer2; //points lower part of its own object... unsure if its really that useful.

        u32 _none_pointer4; //Not used
        u32 door_property_pointer; //points lower part of its own object... unsure if its really that useful. (if door allowed to open and cost)
        u32 _unknown_pointer3; //points lower part of its own object... unsure if its really that useful.
        u32 _empty7;
        u32 _empty8;
        u32 _empty9;
        u32 swapped_id;    //ID swapped // D000 = FFFD //unused
        u32 _unknown8;

        u32 _unknown_pointer4;
        u32 _unknown_pointer5;
        u32 _unknown_pointer6;
        u32 _unknown_pointer7;
        u32 _unknown_pointer8;
        float _unknown9;
        u32 animation_pointer; //Open/close door
        u32 _empty10;

        //0x801D9B00
        u16 countdown; //Not sure what this is used for yet
        u8  open_close_door; // 0xff = keep closed 0x01 = open
        u8 state; //00 = flip 01 = flip back 02 = open 03 = close 
        u8 door_cost;
        u8 _unknown10;
        u8 _unknown11; //Also opens door when val > C6
        u8 _unknown12; //Not used?
        u8 _unknown13;
        u8 openbit; //1 = open door
        u16 _empty11;
        u32 _empty12;
        u32 close_pointer; //triggers when you get close to object 
        float readonly_pos_z;
        float readonly_pos_y;
        float readonly_pos_x;

        u8 _unknown14;
        u8 _unknown15; //Object Type?? controls the Close Pointer
        u8 _empty13;
        u8 distance; //0xFF = Really far, 0x2C = tigger text 
        u16 unkown16; //related to Close Pointer
        u16 _empty14;
        u32 _empty15;
        u32 _empty16;
        u32 _empty17;
        u32 _empty18;
        //The rest is properties of the door that always get overwritten based on properties above
    } level_doors_t;

    typedef struct {
        u16 id;
        u16 _unknown1;
        u16 _unknown2;
        u16 _unknown3;
        float size;
        float pos_z;
        float pos_y;
        float pos_x;
        u32 _empty1;
        u32 _empty2;

        u32 _empty3;
        u32 _empty4;
        u32 _empty5;
        u16 _unknown4;
        u16 _unknown_val5;
        float distance_calc;
        float _unkown5;
        u8 _unknown6;
        u8 opacity; //Potential Trap: 8002A940 = 24050000 instead of 240500FF
        u8 graphic;
        u8 _empty6;
        second_cost_t *second_cost_pointer; //Access 0x0 and 0x10 from this pointer.. unsure what this does yet. //if 802176AC, access 0x0015 to get Coin cost door //Code: 8003BDA8

        parent_object_type_t *parent_obj_pointer;
        u32 object_pointer; //controls more Door Properties... we don't need to mess with this this. ID D points to 8021EDB0
        u16 object_behaviour;
        u16 _unknown7;
        u32 _unknown_pointer; //points lower part of its own object... unsure if its really that useful.
        u32 _none_pointer1; // Not used
        u32 _none_pointer2; //Not used
        u32 _none_pointer3; //Not used
        u32 _unknown_pointer2; //points lower part of its own object... unsure if its really that useful.

        u32 _none_pointer4; //Not used
        u32 door_property_pointer; //points lower part of its own object... unsure if its really that useful. (if door allowed to open and cost)
        u32 _unknown_pointer3; //points lower part of its own object... unsure if its really that useful.
        u32 _empty7;
        u32 _empty8;
        u32 _empty9;
        u32 swapped_id;    //ID swapped // D000 = FFFD //unused
        u32 _unknown8;

        u32 _unknown_pointer5; 
        u32 _unknown_pointer6; 
        u32 _unknown_pointer7; 
        u32 _unknown_pointer8;
        float _unkown9;
        u32 _empty10;
        u32 _empty11;    //ID swapped // D000 = FFFD //unused
        u32 _unknown9;

        u8 world_door_cost;
        u8 _unkownval;
        u16 _another_unkown;
        u32 _unknown_FF;
        u32 _empty12;
        u32 _empty13;
        u32 _empty14;
        u32 _empty15;
        u32 _empty16;
        u32 _unkown10;
    } world_doors_t;

        typedef struct {
        u16 id;
        u16 _unknown1;
        u16 _unknown2;
        u16 _unknown3;
        float size;
        float pos_z;
        float pos_y;
        float pos_x;
        u32 _empty1;
        u32 _empty2;

        u32 _empty3;
        u32 _empty4;
        u32 _empty5;
        u16 _unknown4;
        u16 _unknown_val5;
        float distance_calc;
        float _unkown5;
        u8 _unknown6;
        u8 opacity;
        u8 graphic;
        u8 _empty6;
        second_cost_t *second_cost_pointer;

        parent_object_type_t *parent_obj_pointer;
        u32 object_pointer;
        u16 object_behaviour;
        u16 _unknown7;
        u32 _unknown_pointer;
        u32 _none_pointer1;
        u32 _none_pointer2;
        u32 _none_pointer3;
        u32 _unknown_pointer2;

        u32 _none_pointer4;
        u32 door_property_pointer;
        u32 _unknown_pointer3;
        u32 _empty7;
        u32 _empty8;
        u32 _empty9;
        u32 swapped_id;
        u32 _unknown8;

        u32 _unknown_pointer5; 
        u32 _unknown_pointer6; 
        u32 _unknown_pointer7; 
        u32 _unknown_pointer8;
        float _unkown9;
        u32 _empty10;
        u32 _empty11;
        u8 door_cost;
        u8 _unkownval;
        u16 _another_unkown;

        u32 _unknown_FF;
        u32 _empty12;
        u32 _empty13;
        u32 _empty14;
        u32 _empty15;
        u32 _empty16;
        u32 _empty17;
        u32 _unkown10;
    } boss_doors_t;

    typedef struct {
        u32 kartptr;
    } cart_ptr_t;

    typedef struct {
        u16 id;
        u16 _unknown1;
        u16 _unknown2; 
        u16 collected; //0x4002 means collected
        float size;
        float pos_z;
        float pos_y;
        float pos_x;
        u32 _empty1;
        u32 _empty2;

        u32 _empty3;
        u32 _empty4;
        u32 _empty5;
        u16 _unknown4;
        u16 _unknown_val5;
        float distance_calc;
        float _unkown5;
        u8 _unknown6;
        u8 opacity;
        u8 graphic;
        u8 _empty6;
        second_cost_t *second_cost_pointer;

        parent_object_type_t *parent_obj_pointer;
        u32 object_pointer;
        u16 object_behaviour;
        u16 _unknown7;
        cart_ptr_t *collected_ptr;
        u32 _none_pointer1;
        u32 _none_pointer2;
        u32 _none_pointer3;
        u32 _unknown_pointer2;

        u32 _empty;
        u32 _unknown_pointer3;
        u32 _unknown_pointer4;
        u32 _unknown_pointer5;
        u32 _empty8;
        u32 _always1;
        u32 balloon_property;
        u32 _unknown8;

        u32 _unknown_pointer6; 
        u32 _unknown_pointer7; 
        u32 _unknown_pointer8; 
        u32 _unknown_pointer9;
        u32 _unknown_pointer10;
        float _unknown9;
        u32 _unknown10;
    } balloon_t;

    typedef struct {
        u32 _empty;
        u16 __empty1;
        u16 collected; //0202 means collected
        float size;
        float pos_z;
        float pos_y;
        float pos_x;
        u32 _empty1;
        u32 _empty2;

        u32 _empty3;
        u32 _empty4;
        u32 _empty5;
        u16 _unknown4;
        u16 _unknown_val5;
        float distance_calc;
        float _unkown5;
        u8 _unknown6;
        u8 opacity; //Potential Trap: 8002A940 = 24050000 instead of 240500FF
        u8 graphic;
        u8 _empty6;
        second_cost_t *second_cost_pointer; //Access 0x0 and 0x10 from this pointer.. unsure what this does yet. //if 802176AC, access 0x0015 to get Coin cost door //Code: 8003BDA8

        parent_object_type_t *parent_obj_pointer;
        u32 object_pointer; //controls more Door Properties... we don't need to mess with this this. ID D points to 8021EDB0
        u16 object_behaviour;
        u16 _unknown7;
        u32 _unknown_pointer; //points lower part of its own object... unsure if its really that useful.
        u32 _none_pointer1; // Not used
        u32 _none_pointer2; //Not used
        u32 _none_pointer3; //Not used
        u32 _unknown_pointer2; //points lower part of its own object... unsure if its really that useful.
    } silvercoin_t;



    typedef void(*dkr_fnt_init_door_obj) (u32 obj_pointer, u32 pointer2, u8 zero, u8 id);
    typedef void(*dkr_fnt_init_balloon_obj) (u32 obj_pointer, u32 pointer2, u8 zero, u16 id);

    #define dkr_init_leveldoor_obj ((dkr_fnt_init_door_obj)0x8003B7CC)
    #define dkr_init_balloon_obj ((dkr_fnt_init_balloon_obj)0x8003DFCC)
    #define dkr_init_kart_obj ((dkr_fnt_init_door_obj)0x8004DAB0)
    #define dkr_init_silvercoin_obj ((dkr_fnt_init_balloon_obj)0x8003DC5C)




    enum level_door_ids {
        ANCIENT_LAKE_ID    =   0xB000,
        FOSSIL_CANYON_ID   =   0xD000,
        JUNGLE_FALLS_ID    =   0x9000,
        HOT_TOP_VOLCA_ID   =   0x1000,
        
        EVERFROST_PEA_ID   =   0x3800,
        SNOWBALL_VALL_ID   =   0x5800,
        WALRUS_COVE_ID     =   0x1800,
        FROSTY_VILLAG_ID   =   0x7800,

        WHALE_BAY_ID       =   0xAC00,
        CRESCENT_ISLA_ID   =   0x9400,
        TREASURE_CAVES_ID  =   0x5800, //great.... need to check what map your on too...
        PIRATE_LAGOON_ID   =   0x6800,

        WINDMILL_PLAIN_ID  =   0x1000, //bruh..... why?!
        GREENWOOD_VILL_ID  =   0xD000,
        BOULDER_CANYON_ID  =   0xAC00,
        HAUNTED_WOODS_ID   =   0x9000,

        SPACEDUST_VALL_ID  =   0xB000,
        SPACEPORT_ALPH_ID  =   0x5C00,
        STAR_CITY_ID       =   0x3C00,
        DARKMOON_CAVER_ID  =   0x9000
    };

    enum object_type {
        WORLD_GATE = 0x3F800000,
        LEVEL_DOOR = 0x40000000,
        WEAPON     = 0x3FB33333,
        SILVER_COIN = 0x3FC00000,
    };

    enum object_ids {
        LEVEL_DOORID = 0xA0,
        WORLD_GATEID = 0x88,
        PIGHEADID    = 0x8C,
        BOSS_DOORID  = 0x84,
        WEAPONID     = 0x94,
        SILVER_COINID = 0x84,
    };

    enum door_graphic {
        COMPLETED = 0x00,
        DOUBLE_COMPLETED = 0x01,
        SINGLE_DIGIT = 0x02,
        DOUBLE_DIGIT = 0x03
    };

    enum worlddoor_graphic {
        RIGHT_SINGLE = 0x00,
        LEFT_SINGLE = 0x01,
        RIGHT_DOUBLE = 0x02,
        LEFT_DOUBLE = 0x03
    };

    enum pighead_state {
        AMULET_0 = 0x164,
        AMULET_1 = 0x165,
        AMULET_2 = 0x166,
        AMULET_3 = 0x167,
        ENOUGH_AMULET = 0x168
    };

    enum baloon_type {
        BALLOON_SPEED = 0x0,
        BALLOON_MISSLE = 0x1,
        BALLOON_SLIP = 0x2,
        BALLOON_SHIELD = 0x3,
        BALLOON_MAGNET = 0x4,
        BALLOON_NONE  = 0x5
    };

    enum map_balloons {
        BALLOON_DD_AL_R = 4,
        BALLOON_DD_AL_G = 0,
        BALLOON_DD_AL_B = 4,
        BALLOON_DD_AL_P = 0,
        BALLOON_DD_AL_W = 0,
        BALLOON_DD_FC_R = 4,
        BALLOON_DD_FC_G = 8,
        BALLOON_DD_FC_B = 3,
        BALLOON_DD_FC_P = 0,
        BALLOON_DD_FC_W = 0,
        BALLOON_DD_JF_R = 7,
        BALLOON_DD_JF_G = 3,
        BALLOON_DD_JF_B = 1,
        BALLOON_DD_JF_P = 2,
        BALLOON_DD_JF_W = 2,
        BALLOON_DD_HV_R = 8,
        BALLOON_DD_HV_G = 0,
        BALLOON_DD_HV_B = 9,
        BALLOON_DD_HV_P = 0,
        BALLOON_DD_HV_W = 0,

        BALLOON_SM_EP_R = 6,
        BALLOON_SM_EP_G = 0,
        BALLOON_SM_EP_B = 8,
        BALLOON_SM_EP_P = 0,
        BALLOON_SM_EP_W = 1,
        BALLOON_SM_WC_R = 4,
        BALLOON_SM_WC_G = 1,
        BALLOON_SM_WC_B = 5,
        BALLOON_SM_WC_P = 4,
        BALLOON_SM_WC_W = 1,
        BALLOON_SM_SV_R = 4,
        BALLOON_SM_SV_G = 3,
        BALLOON_SM_SV_B = 8,
        BALLOON_SM_SV_P = 2,
        BALLOON_SM_SV_W = 0,
        BALLOON_SM_FV_R = 6,
        BALLOON_SM_FV_G = 6,
        BALLOON_SM_FV_B = 2,
        BALLOON_SM_FV_P = 2,
        BALLOON_SM_FV_W = 3,

        BALLOON_SI_WB_R = 3,
        BALLOON_SI_WB_G = 3,
        BALLOON_SI_WB_B = 6,
        BALLOON_SI_WB_P = 1,
        BALLOON_SI_WB_W = 3,
        BALLOON_SI_CI_R = 8,
        BALLOON_SI_CI_G = 2,
        BALLOON_SI_CI_B = 0,
        BALLOON_SI_CI_P = 2,
        BALLOON_SI_CI_W = 3,
        BALLOON_SI_PL_R = 4,
        BALLOON_SI_PL_G = 3,
        BALLOON_SI_PL_B = 5,
        BALLOON_SI_PL_P = 1,
        BALLOON_SI_PL_W = 1,
        BALLOON_SI_TC_R = 8,
        BALLOON_SI_TC_G = 2,
        BALLOON_SI_TC_B = 6,
        BALLOON_SI_TC_P = 0,
        BALLOON_SI_TC_W = 1,
 
        
        BALLOON_DF_WP_R = 8,
        BALLOON_DF_WP_G = 8,
        BALLOON_DF_WP_B = 5,
        BALLOON_DF_WP_P = 1,
        BALLOON_DF_WP_W = 2,
        BALLOON_DF_GV_R = 5,
        BALLOON_DF_GV_G = 6,
        BALLOON_DF_GV_B = 1,
        BALLOON_DF_GV_P = 2,
        BALLOON_DF_GV_W = 1,
        BALLOON_DF_BC_R = 5,
        BALLOON_DF_BC_G = 3,
        BALLOON_DF_BC_B = 6,
        BALLOON_DF_BC_P = 1,
        BALLOON_DF_BC_W = 2,
        BALLOON_DF_HW_R = 5,
        BALLOON_DF_HW_G = 6,
        BALLOON_DF_HW_B = 0,
        BALLOON_DF_HW_P = 1,
        BALLOON_DF_HW_W = 1,

        BALLOON_FL_SA_R = 7,
        BALLOON_FL_SA_G = 8,
        BALLOON_FL_SA_B = 6,
        BALLOON_FL_SA_P = 1,
        BALLOON_FL_SA_W = 2,
        BALLOON_FL_DC_R = 8,
        BALLOON_FL_DC_G = 9,
        BALLOON_FL_DC_B = 3,
        BALLOON_FL_DC_P = 2,
        BALLOON_FL_DC_W = 1,
        BALLOON_FL_SAA_R = 7,
        BALLOON_FL_SAA_G = 7,
        BALLOON_FL_SAA_B = 4,
        BALLOON_FL_SAA_P = 6,
        BALLOON_FL_SAA_W = 0,
        BALLOON_FL_SC_R = 4,
        BALLOON_FL_SC_G = 8,
        BALLOON_FL_SC_B = 5,
        BALLOON_FL_SC_P = 3,
        BALLOON_FL_SC_W = 0,
    };

    /*
    0x801FCAF7
    bit 0 = entered
    bit 1 = win first race
    */
    // Level door object size: 1F0


    //801D9B09 = 01 = open door
#endif
