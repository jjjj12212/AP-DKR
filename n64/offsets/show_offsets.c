#include <stdio.h>
#include <util.h>

ap_memory_t ap_memory;
//ap_memory_ptr_t ap_memory_ptr;
ap_version_t ap_version;
#define mem (void *)&ap_memory
#define ver (void *)&ap_version

//#define ptr (long int)&ap_memory_ptr
#define calc(base, offset) offset-base

int main() {
  printf("    base_index = 0x%X,\n",                      0x400000);
  printf("    pc = 0x%X,\n",                                  calc(mem, mem.pc));
  printf("    items = 0x%X,\n",                               calc(mem, mem.pc.items));
  printf("    door_cost = 0x%X,\n",                           calc(mem, mem.pc.door_cost));
  printf("    message = 0x%X,\n",                             calc(mem, mem.pc.message + 0x8));
  printf("    text_queue = 0x%X,\n",                          calc(mem, mem.pc.text_queue));
  printf("    settings = 0x%X,\n",                            calc(mem, mem.pc.settings));
  printf("      victory_condition = 0x%X,\n",                 calc(mem.pc.settings, mem.pc.settings.victory_condition));
  printf("      setting_open_worlds = 0x%X,\n",               calc(mem.pc.settings, mem.pc.settings.setting_open_worlds));
  printf("      setting_shuffle_wizpig_amulet = 0x%X,\n",     calc(mem.pc.settings, mem.pc.settings.setting_shuffle_wizpig_amulet));
  printf("      setting_shuffle_tt_amulet = 0x%X,\n",         calc(mem.pc.settings, mem.pc.settings.setting_shuffle_tt_amulet));
  printf("      setting_door_progression = 0x%X,\n",          calc(mem.pc.settings, mem.pc.settings.setting_door_progression));
  printf("      setting_max_door_requirement = 0x%X,\n",      calc(mem.pc.settings, mem.pc.settings.setting_max_door_requirement));
  printf("      setting_shuffle_door_requirements = 0x%X,\n", calc(mem.pc.settings, mem.pc.settings.setting_shuffle_door_requirements));
  printf("      setting_boss1_regional_balloons = 0x%X,\n",   calc(mem.pc.settings, mem.pc.settings.setting_boss1_regional_balloons));
  printf("      setting_boss2_regional_balloons = 0x%X,\n",   calc(mem.pc.settings, mem.pc.settings.setting_boss2_regional_balloons));
  printf("      setting_wizpig_amulet_pieces = 0x%X,\n",      calc(mem.pc.settings, mem.pc.settings.setting_wizpig_amulet_pieces));
  printf("      setting_tt_amulet_pieces = 0x%X,\n",          calc(mem.pc.settings, mem.pc.settings.setting_tt_amulet_pieces));
  printf("      setting_wizpig2_balloons = 0x%X,\n",          calc(mem.pc.settings, mem.pc.settings.setting_wizpig2_balloons));
  printf("      setting_skip_trophy_races = 0x%X,\n",         calc(mem.pc.settings, mem.pc.settings.setting_skip_trophy_races));
  printf("      setting_random_cart = 0x%X,\n",               calc(mem.pc.settings, mem.pc.settings.setting_random_cart));
  printf("      setting_change_balloons = 0x%X,\n",           calc(mem.pc.settings, mem.pc.settings.setting_change_balloons));
  printf("      setting_balloon_type = 0x%X,\n",              calc(mem.pc.settings, mem.pc.settings.setting_balloon_type));
  printf("      setting_shuffle_vehicles = 0x%X,\n",          calc(mem.pc.settings, mem.pc.settings.setting_shuffle_vehicles));
  printf("      setting_sv_including_overworld = 0x%X,\n",    calc(mem.pc.settings, mem.pc.settings.setting_sv_including_overworld));

  printf("    n64_text_queue = 0x%X,\n",                      calc(mem, mem.pc.n64_text_queue));
  printf("    n64_keys_location = 0x%X,\n",                   calc(mem, mem.pc.n64_keys_location));
  printf("    n64_balloon_locations = 0x%X,\n",               calc(mem, mem.pc.n64_balloons));
  printf("      n64_balloon_id = 0x%X,\n",                    calc(mem, mem.pc.n64_balloons->balloon_id));
  printf("      n64_balloon_collected = 0x%X,\n",             calc(mem, mem.pc.n64_balloons->collected));
  printf("      n64_balloon_index = 0,\n");

  printf("    total_balloons = 0x%X,\n",                      calc(mem, mem.pc.total_balloons));
  printf("    n64_silvercoins_locations = 0x%X,\n",           calc(mem, mem.pc.n64_silvercoins));
  printf("      n64_silvercoins_id = 0x%X,\n",                calc(mem, mem.pc.n64_silvercoins->silvercoin_id));
  printf("      n64_silvercoins_collected = 0x%X,\n",         calc(mem, mem.pc.n64_silvercoins->collected));
  printf("      n64_silvercoins_index = 0,\n");
  printf("    rom_major_version = 0x%X,\n",                   calc(mem, ver.major));
  printf("    rom_minor_version = 0x%X,\n",                   calc(mem, ver.minor));
  printf("    rom_patch_version = 0x%X,\n",                   calc(mem, ver.patch));
  return 0;
}
