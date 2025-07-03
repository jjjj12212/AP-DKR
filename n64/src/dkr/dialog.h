#ifndef DKR_FN_DIALOG_H
#define DKR_FN_DIALOG_H

    #define world_dialog_timer (*(u16*)0x8012A7AC)
    #define world_dialog_show_dialog (*(u16*)0x8012A7B6)
    typedef void (*dkr_fnt_test_dialog)();
    #define dkr_fn_dialog ((dkr_fnt_test_dialog)0x800C2D6C)
    #define test_dialog_text_ptr (*(u32*)0x8012A7D0)

#endif