#include "dialog.h"

void show_ap_dialog()
{
  ap_memory.pc.message[0] = 0x01;
  ap_memory.pc.message[1] = 0xFF;
  ap_memory.pc.message[2] = 0xFF;
  ap_memory.pc.message[3] = 0xFF;

  ap_memory.pc.message[4] = 0xFF;
  ap_memory.pc.message[5] = 0x01;
  ap_memory.pc.message[6] = 0x04;
  ap_memory.pc.message[7] = 0x19;

  test_dialog_text_ptr = (u32) ap_memory.pc.message;
  dkr_fn_dialog();
}

void TTDoorText(char *ptr)
{
  if(dkr_current_map == MAP_FUTURE_FUN)
  {
    if(ap_memory.pc.settings.setting_wizpig2_balloons != 47)
    {
      if(ap_memory.pc.settings.setting_wizpig2_balloons < 10)
      {
        ptr[89] = 0x20;
        ptr[90] = 0x30 + ap_memory.pc.settings.setting_wizpig2_balloons;
      }
      else if(ap_memory.pc.settings.setting_wizpig2_balloons >= 10  && ap_memory.pc.settings.setting_wizpig2_balloons < 20)
      {
        ptr[89] = 0x31;
        ptr[90] = 0x30 + + (ap_memory.pc.settings.setting_wizpig2_balloons - 10);
      }
      else if(ap_memory.pc.settings.setting_wizpig2_balloons >= 20  && ap_memory.pc.settings.setting_wizpig2_balloons < 30)
      {
        ptr[89] = 0x32;
        ptr[90] = 0x30 + (ap_memory.pc.settings.setting_wizpig2_balloons - 20);
      }
      else if(ap_memory.pc.settings.setting_wizpig2_balloons >= 30  && ap_memory.pc.settings.setting_wizpig2_balloons < 40)
      {
        ptr[89] = 0x33;
        ptr[90] = 0x30 + + (ap_memory.pc.settings.setting_wizpig2_balloons - 30);
      }
      else if(ap_memory.pc.settings.setting_wizpig2_balloons >= 40  && ap_memory.pc.settings.setting_wizpig2_balloons < 50)
      {
        ptr[89] = 0x34;
        ptr[90] = 0x30 + + (ap_memory.pc.settings.setting_wizpig2_balloons - 40);
      }
    }
    if(ap_memory.pc.settings.setting_tt_amulet_pieces < 4)
    {
      ptr[34] = 0x30 + ap_memory.pc.settings.setting_tt_amulet_pieces;
      ptr[35] = 0x20;
      ptr[36] = 0x20;
    }
  }
}

void BossDoorText(char *ptr)
{
  if(ap_memory.pc.settings.setting_boss1_regional_balloons < 4)
    {
      ptr[58] = 0x30 + ap_memory.pc.settings.setting_boss1_regional_balloons;
      ptr[59] = 0x20;
      ptr[60] = 0x20;
    }
}
void showVersion() 
{
  strncpy(ap_memory.pc.message, "", sizeof(ap_memory.pc.message));

  ap_memory.pc.message[0] = 0x01; // UNKOWN
  ap_memory.pc.message[1] = 0xFF; // RED
  ap_memory.pc.message[2] = 0xDF; // GREEN
  ap_memory.pc.message[3] = 0x01; // BLUE

  ap_memory.pc.message[4] = 0xFF; //Ocpacity
  ap_memory.pc.message[5] = 0x01; //KEEP AT 01
  ap_memory.pc.message[6] = 0x04; //01 = RIGHT ALIGN 02/03 = NO TEXT 04
  ap_memory.pc.message[7] = 0x19; //UNUSED

  char text[56] = "DKRR V";
  char major[3];
  char minor[3];
  char patch[3];
  itoa(AP_VERSION_MAJOR, major, 10);
  itoa(AP_VERSION_MINOR, minor, 10);
  itoa(AP_VERSION_PATCH, patch, 10);
  strcat(text, major);
  strcat(text, ".");
  strcat(text, minor);
  if (AP_VERSION_PATCH) {
    strcat(text, ".");
    strcat(text, patch);
  }
  strcat(ap_memory.pc.message, text);
  char end[1];
  end[0] = 0x00;
  strcat(ap_memory.pc.message, end);
  test_dialog_text_ptr = (u32) ap_memory.pc.message;
  dkr_fn_dialog();
}

void showCreditsText(char *text, u16 timer) 
{
  strncpy(ap_memory.pc.message, "", sizeof(ap_memory.pc.message));

  ap_memory.pc.message[0] = 0x01; // UNKOWN
  ap_memory.pc.message[1] = 0xFF; // RED
  ap_memory.pc.message[2] = 0xDF; // GREEN
  ap_memory.pc.message[3] = 0x01; // BLUE

  ap_memory.pc.message[4] = 0xFF; //Ocpacity
  ap_memory.pc.message[5] = 0x01; //KEEP AT 01
  ap_memory.pc.message[6] = 0x04; //01 = RIGHT ALIGN 02/03 = NO TEXT 04
  ap_memory.pc.message[7] = 0x19; //UNUSED

  strcat(ap_memory.pc.message, text);
  char end[1];
  end[0] = 0x00;
  strcat(ap_memory.pc.message, end);
  test_dialog_text_ptr = (u32) ap_memory.pc.message;
  dkr_fn_dialog();
}
