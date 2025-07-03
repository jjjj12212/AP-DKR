#ifndef DKR_FN_PLAYER_H
#define DKR_FN_PLAYER_H
    typedef struct {
    u8 a : 1;
    u8 b : 1;
    u8 z : 1;
    u8 _unused1 : 1;

    u8 dup: 1;
    u8 ddown: 1;
    u8 dleft: 1;
    u8 dright: 1;
    u8 _unused2 : 2;

    u8 l : 1;
    u8 r : 1;
    u8 cup : 1;
    u8 cdown : 1;
    u8 cleft : 1;
    u8 cright : 1;
    struct {
        u8 x;
        u8 y;
    } joystick;
    } dkr_controller_buttons_t;

    typedef struct {
        dkr_controller_buttons_t held;
        u64 _unused1;
        u64 _unused2;
        u32 _unused3;
        dkr_controller_buttons_t pressed;
        u32 _unused4;
        dkr_controller_buttons_t release;
    } dkr_controller_t;

    #define controller ((dkr_controller_t*)0x80121128)

    #define character (*(u8*)0x801FCA29)
    #define player_kart_ptr (*(u32 *) 0x801EFF90)
    #define overworld_transformation (*(u8*)0x8011AD45)
    #define overworld_saved_transformation (*(u8*)0x800DD314)

    enum characters {
        DKR_CRUNCH = 0,
        DKR_BULLPUP,
        DKR_TIPTUP,
        DKR_CONKER,
        DKR_TIMBER,
        DKR_BANJO,
        DKR_DRUMSTICK,
        DKR_PIPSY,
        DKR_TT,
        DKR_DIDDY
    };
#endif
