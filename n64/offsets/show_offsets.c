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
  printf("    BASE_POINTER = 0x%X,\n",                      0x400000);
  printf("    PC = 0x%X,\n",                                  calc(mem, mem.pc));
  printf("    MAX_MESSAGE_BYTES = 50,\n");
  printf("    RECEIVED_ITEM_COUNTS = 0x%X,\n",                calc(mem, mem.pc.items));
  printf("    DOOR_COSTS = 0x%X,\n",                          calc(mem, mem.pc.door_cost));
  printf("    TRACKS  = 0x%X,\n",                             calc(mem, mem.pc.tracks));
  printf("      ACTUAL_TRACK = 0x%X,\n",                      calc(mem.pc.tracks, mem.pc.tracks->actual_track));
  printf("      MIRROR = 0x%X,\n",                            calc(mem.pc.tracks, mem.pc.tracks->mirror));
  printf("      MUSIC = 0x%X,\n",                            calc(mem.pc.tracks, mem.pc.tracks->music));

  printf("    MESSAGE_TEXT = 0x%X,\n",                        calc(mem, mem.pc.message + 0x8));

  printf("    N64_RECEIVED_MESSAGE_COUNT = 0x%X,\n",          calc(mem, mem.pc.text_queue));
  printf("    SETTINGS = 0x%X,\n",                            calc(mem, mem.pc.settings));
  printf("      VICTORY_CONDITION = 0x%X,\n",                 calc(mem.pc.settings, mem.pc.settings.victory_condition));
  printf("      OPEN_WORLDS = 0x%X,\n",                       calc(mem.pc.settings, mem.pc.settings.setting_open_worlds));
  printf("      SHUFFLE_WIZPIG_AMULET = 0x%X,\n",             calc(mem.pc.settings, mem.pc.settings.setting_shuffle_wizpig_amulet));
  printf("      SHUFFLE_TT_AMULET = 0x%X,\n",                 calc(mem.pc.settings, mem.pc.settings.setting_shuffle_tt_amulet));
  printf("      DOOR_PROGRESSION = 0x%X,\n",                  calc(mem.pc.settings, mem.pc.settings.setting_door_progression));
  printf("      MAX_DOOR_REQUIREMENT = 0x%X,\n",              calc(mem.pc.settings, mem.pc.settings.setting_max_door_requirement));
  printf("      SHUFFLE_DOOR_REQUIREMENTS = 0x%X,\n",         calc(mem.pc.settings, mem.pc.settings.setting_shuffle_door_requirements));
  printf("      BOSS_1_REGIONAL_BALLOONS = 0x%X,\n",          calc(mem.pc.settings, mem.pc.settings.setting_boss1_regional_balloons));
  printf("      BOSS_2_REGIONAL_BALLOONS = 0x%X,\n",          calc(mem.pc.settings, mem.pc.settings.setting_boss2_regional_balloons));
  printf("      WIZPIG_1_AMULET_PIECES = 0x%X,\n",            calc(mem.pc.settings, mem.pc.settings.setting_wizpig_amulet_pieces));
  printf("      WIZPIG_2_AMULET_PIECES = 0x%X,\n",            calc(mem.pc.settings, mem.pc.settings.setting_tt_amulet_pieces));
  printf("      WIZPIG_2_BALLOONS = 0x%X,\n",                 calc(mem.pc.settings, mem.pc.settings.setting_wizpig2_balloons));
  printf("      SKIP_TROPHY_RACES = 0x%X,\n",                 calc(mem.pc.settings, mem.pc.settings.setting_skip_trophy_races));
  printf("      RANDOMIZE_CHARACTER_ON_MAP_CHANGE = 0x%X,\n", calc(mem.pc.settings, mem.pc.settings.setting_random_cart));
  printf("      CHANGE_BALLOONS = 0x%X,\n",                   calc(mem.pc.settings, mem.pc.settings.setting_change_balloons));
  printf("      POWER_UP_BALLOON_TYPE = 0x%X,\n",             calc(mem.pc.settings, mem.pc.settings.setting_balloon_type));
  printf("      SHUFFLE_VEHICLES = 0x%X,\n",                  calc(mem.pc.settings, mem.pc.settings.setting_shuffle_vehicles));
  printf("      SHUFFLE_VEHICLES_INCLUDING_OVERWORLD = 0x%X,\n",    calc(mem.pc.settings, mem.pc.settings.setting_sv_including_overworld));
  printf("    N64_PROCESSED_MESSAGE_COUNT = 0x%X,\n",         calc(mem, mem.pc.n64_text_queue));
  printf("    N64_KEYS_LOCATION = 0x%X,\n",                   calc(mem, mem.pc.n64_keys_location));
  printf("    N64_BALLOON_LOCATIONS = 0x%X,\n",               calc(mem, mem.pc.n64_balloons));
  printf("      N64_BALLOON_ID = 0x%X,\n",                    calc(mem, mem.pc.n64_balloons->balloon_id));
  printf("      N64_BALLOON_COLLECTED = 0x%X,\n",             calc(mem, mem.pc.n64_balloons->collected));
  printf("      N64_BALLOON_INDEX = 0,\n");
  printf("    TOTAL_BALLOONS = 0x%X,\n",                      calc(mem, mem.pc.total_balloons));
  printf("    N64_SILVERCOINS_LOCATIONS = 0x%X,\n",           calc(mem, mem.pc.n64_silvercoins));
  printf("      N64_SILVERCOINS_ID = 0x%X,\n",                calc(mem, mem.pc.n64_silvercoins->silvercoin_id));
  printf("      N64_SILVERCOINS_COLLECTED = 0x%X,\n",         calc(mem, mem.pc.n64_silvercoins->collected));
  printf("      N64_SILVERCOINS_INDEX = 0,\n");
  printf("    ROM_MAJOR_VERSION = 0x%X,\n",                   calc(mem, ver.major));
  printf("    ROM_MINOR_VERSION = 0x%X,\n",                   calc(mem, ver.minor));
  printf("    ROM_PATCH_VERSION = 0x%X,\n",                   calc(mem, ver.patch));
  return 0;
}
