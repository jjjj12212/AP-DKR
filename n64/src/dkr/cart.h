#ifndef DKR_FN_CART_H
#define DKR_FN_CART_H
    typedef struct {
        u16 id;
        u16 _unknown1;
        u16 _unknown2;
        u16 _unknown3;
        float size;
        float pos_z;
        float pos_y;
        float pos_x;
        u32 neck_pos;
        float _gavity;
//2
        float acceleration;
        float acceleration2;
        u32 _empty;
        u16 _unknown4;
        u16 _unknown_val5;
        float distance_calc;
        u32 _unused;
        u8 _unused1;
        u8 opacity;
        u8 _empty2;
        u8 _empty3;
        u32 _empty4;
//3
        parent_object_type_t *parent_obj_pointer;
        u32 object_pointer;
        u16 object_behaviour;
        u16 _unknown5;
        u32 _unknown_pointer;
        u32 _unknown_pointer1;
        u32 _unknown_pointer2;
        u32 _unknown_pointer3;
        u32 _empty5;
//4
        u32 _unknown_pointer4;
        u32 _unknown_pointer5;
        u32 _unknown_pointer6;
        u32 _unknown_pointer7;
        u32 _empty6;
        u32 _unknown6;
        u32 _empty7;
        u32 _empty8;
//5
        u32 _unknown_pointer8; 
        u32 _empty9; 
        u32 _empty10; 
        u32 _empty11;
        u32 _empty12;
        u16 controls; //if 0xE000, you go crazy
        u8  __empty13;
        u8 __unknown7;
//6
        float __unknown8; 
        u32 _empty13;
        u32 _empty14;
        u32 _empty15;
        u32 _empty16;
        u32 _empty17;
        u32 _empty18;
        u32 _empty19;
//7
        u64 _unknown7; 
        u64 _unknown8;
        u64 _unknown9;
        u64 _unknown10;
//8
        u64 _unknown11; 
        u64 _unknown12;
        u64 _unknown13;
        u64 _unknown14;
//9
        u64 _unknown15; 
        u64 _unknown16;
        u64 _unknown17;
        u64 _unknown18;
//10
        u64 _unknown19; 
        u64 _unknown20;
        u64 _unknown21;
        u64 _unknown22;
//11
        u64 _unknown23; 
        u64 _unknown24;
        u64 _unknown25;
        u64 _unknown26;
//12
        u64 _unknown27; 
        u64 _unknown28;
        u64 _unknown29;
        u64 _unknown30;
//13
        u64 _unknown31; 
        u64 _unknown32;
        u64 _unknown33;
        u64 _unknown34;
//14
        u64 _unknown35; 
        u64 _unknown36;
        u64 _unknown37;
        u64 _unknown38;
//15
        u64 _unknown39; 
        u64 _unknown40;
        u64 _unknown41;
        u64 _unknown42;
//16
        u64 _unknown43; 
        u64 _unknown44;
        u64 _unknown45;
        u64 _unknown46;
//17
        u64 __unknown46;
        u32 _unknown47; 
        u32 _unknown48;

        u16 _unknown49;
        u8 weapon_type; //0-4
        u8 weapon_amount; //0-0xa

        u8 weapon_upgrade; //0-1-2
        u16 _unknown50;
        u8 _unknown51;

        u32 _unknown52;
        u32 __unknown52;

        u16 _unknown53;
        u8 _unknown54;
        u8 damaged;

    } cart_t;

    typedef enum {
        MISSILED = 0x01,
        SLIPPED  = 0x02,
        SQUISHED = 0x04,
        SUPERFLIP = 0x05,
        BUBBLED  = 0x06,
    } damage;

    typedef struct {
        cart_t *kart_racer_1_ptr;
        cart_t *kart_racer_2_ptr;
        cart_t *kart_racer_3_ptr;
        cart_t *kart_racer_4_ptr;
        cart_t *kart_racer_5_ptr;
        cart_t *kart_racer_6_ptr;
        cart_t *kart_racer_7_ptr;
    } racers_ptrs_t;

    typedef enum {
        KART = 0x00,
        HOVERCAR = 0x01,
        PLANE = 0x02,
        HOVERPLANE = 0x03
    } kart_type;

    #define racers ((racers_ptrs_t *) 0x801EFF94)
    
#endif
