#include <stdint.h>
#include <stdbool.h>
#include "dkr.h"
#include "dialog.h"
#include "ap.h"


bool dpad_pressed = false;
bool a_pressed = false;
bool cutscene_trigger = false;
u8 counter = 0;
bool init = false;
bool show_version = false;
bool show_credits1 = false;
bool show_credits2 = false;

void character_rando()
{
  counter +=1;
  if(counter >= 0xA) counter = 0x0;
  character = counter;
}

bool pre_loop()
{
  if(!init)
  {
    ap_memory.pc.settings.setting_boss1_regional_balloons = 4; //set back to 4 when releasing
    ap_memory.pc.settings.setting_boss2_regional_balloons = 8; // set back to 8 when releasing
    ap_memory.pc.settings.setting_tt_amulet_pieces = 4; //set back to 4 when releasing
    ap_memory.pc.settings.setting_wizpig2_balloons = 47; //set back to 47 when releasing
    ap_memory.pc.settings.setting_wizpig_amulet_pieces = 4; //set back to 4 when releasing
    init = true;
  }
  if(dkr_ingame_timer >= 0x00000020 && dkr_ingame_timer <= 0x00000030 && !show_version)
  {
    showVersion();
    show_version = true;
  }
  if(dkr_ingame_timer >= 0x00000085 && dkr_ingame_timer <= 0x00000090 && !show_credits1)
  {
    showCreditsText("RANDOMIZER BY ZAKWIZ", 0x00FF);
    show_credits1 = true;
  }
  if(dkr_ingame_timer >= 0x0000010A && dkr_ingame_timer <= 0x0000011A && !show_credits2)
  {
    showCreditsText("ROM BY jjjj12212", 0x0050);
    show_credits2 = true;
  }

  //INTRO CUTSCENE SKIP
  if(dkr_demo_cart_state == 0x001 && dkr_current_map == 0x0)
  {
    if(dkr_unknown_address1 == 0x028B || dkr_unknown_address1 == 0x028F || dkr_unknown_address1 == 0x0287
      || dkr_unknown_address1 == 0x028C || dkr_unknown_address1 == 0x028C || dkr_unknown_address1 == 0x0285
      || dkr_unknown_address1 == 0x027F || dkr_unknown_address1 == 0x0288 || dkr_unknown_address1 == 0x0291
    ) 
     dkr_intro_cutscene_skip_flag = 0x01;
  }
  //EO INTRO CUTSCENE SKIP

  if(dkr_demo_cart_state == 0x0 && ap_memory.pc.settings.setting_random_cart)
  {
    character_rando();
  }
  if(ap_memory.pc.settings.setting_skip_trophy_races)
  {
    dkr_trophies.dino_bronze = 1;
    dkr_trophies.dino_gold = 1;
    dkr_trophies.snow_bronze = 1;
    dkr_trophies.snow_gold = 1;
    dkr_trophies.island_bronze = 1;
    dkr_trophies.island_gold = 1;
    dkr_trophies.dragon_bronze = 1;
    dkr_trophies.dragon_gold = 1;
  }
  setTTDoor();
  setCutscenes();
  apItemCheck();
  apDialogCheck();

  if(ap_memory.pc.settings.setting_change_balloons && 
    (ap_memory.pc.settings.setting_balloon_type == 0x05 || ap_memory.pc.settings.setting_balloon_type == 0x06))
  {
    balloon_rando();
    changeWeaponBalloonsDynamic();
  }
  watchCollectedBalloons();
  watchCollectedSilverCoins();

  deInitializeAPBalloons();
  deInitializeAPSilverCoins();
  overworldTransformAllowed();
  overworldTranformFix();
  return false;
}

void checkKeySpawn(u32 *obj_pointer, u32 data_pointer, u8 zero, u8 id)
{
  if(ap_memory.pc.n64_keys_location.dino_key && dkr_current_map == MAP_ANCIENT_LAKE)
  {
    dkr_fn_dont_spawn_key((u32) obj_pointer, data_pointer, zero, id);
  }
  if(ap_memory.pc.n64_keys_location.snowflake_key && dkr_current_map == MAP_SNOWBALL_VALLEY)
  {
    dkr_fn_dont_spawn_key((u32) obj_pointer, data_pointer, zero, id);
  }
  if(ap_memory.pc.n64_keys_location.island_key && dkr_current_map == MAP_CRESCENT_ISLAND)
  {
    dkr_fn_dont_spawn_key((u32) obj_pointer, data_pointer, zero, id);
  }
  if(ap_memory.pc.n64_keys_location.dragon_key && dkr_current_map == MAP_BOULDER_CANYON)
  {
    dkr_fn_dont_spawn_key((u32) obj_pointer, data_pointer, zero, id);
  }
}

void collectKeyLocation(u32 *obj_pointer, u32 data_pointer, u8 zero, u8 id)
{
  if(dkr_current_map == MAP_ANCIENT_LAKE)
  {
    ap_memory.pc.n64_keys_location.dino_key = 1;
  }
  if(dkr_current_map == MAP_SNOWBALL_VALLEY)
  {
    ap_memory.pc.n64_keys_location.snowflake_key = 1;
  }
  if(dkr_current_map == MAP_CRESCENT_ISLAND)
  {
    ap_memory.pc.n64_keys_location.island_key = 1;
  }
  if(dkr_current_map == MAP_BOULDER_CANYON)
  {
    ap_memory.pc.n64_keys_location.dragon_key = 1;
  }
  dkr_fn_collect_key_v0();
}

void objectOverrides(u32 *obj_pointer, u32 data_pointer, u8 zero, u8 id)
{
  dkr_init_leveldoor_obj((u32)obj_pointer, data_pointer, zero, id);
  
  if(ap_memory.pc.settings.setting_door_progression || ap_memory.pc.settings.setting_shuffle_door_requirements)
  {
    changeLevelDoorCost((level_doors_t*)obj_pointer);
  }
  if(ap_memory.pc.settings.setting_open_worlds || ap_memory.pc.settings.setting_shuffle_door_requirements 
    || ap_memory.pc.settings.setting_door_progression)
  {
    changeWorldDoorCost((world_doors_t*)obj_pointer);
    if(ap_memory.pc.settings.setting_open_worlds)
    {
      dkr_progression.lighthouse_rocket = 1;
    }
  }
  if(ap_memory.pc.settings.setting_boss1_regional_balloons < 4 || ap_memory.pc.settings.setting_boss2_regional_balloons < 8)
  {
    changeBossDoorCost((boss_doors_t*)obj_pointer);
  }
}

void balloonOverrides(u32 *obj_pointer, u32 data_pointer, u8 zero, u16 id)
{
  dkr_init_balloon_obj((u32)obj_pointer, data_pointer, zero, id);

  if(dkr_current_map != MAP_DINO_BOSS1 && dkr_current_map != MAP_DINO_BOSS2 &&
    dkr_current_map != MAP_WALRUS_BOSS1 && dkr_current_map != MAP_WALRUS_BOSS2 &&
    dkr_current_map != MAP_OCTO_BOSS1 && dkr_current_map != MAP_OCTO_BOSS2 &&
    dkr_current_map != MAP_DRAGON_BOSS1 && dkr_current_map != MAP_DRAGON_BOSS2 &&
    dkr_current_map != MAP_WIZPIG_BOSS1 &&  dkr_current_map != MAP_WIZPIG_BOSS2 &&
    dkr_current_map != MAP_CREDITS && dkr_current_map != MAP_OVERWORLD &&
    dkr_current_map != MAP_ICE_PYRAMID && dkr_current_map != MAP_DARKWATER_BEACH
  )
  {
    if(ap_memory.pc.settings.setting_change_balloons)
    {
      changeWeaponBalloons((balloon_t*)obj_pointer, id);
    }
    initializeAPBalloons((balloon_t*)obj_pointer, id);
  }
}

void silverCoinOverrides(u32 *obj_pointer, u32 data_pointer, u8 zero, u16 id)
{
  dkr_init_silvercoin_obj((u32)obj_pointer, data_pointer, zero, id);
  initializeAPSilverCoins((silvercoin_t*)obj_pointer, id);
}

void objectInit(pighead_header_object_t *header_ptr, u32 *ptr2, u8 _unknown, u16 _unkown2)
{
  if(header_ptr->object_type == WORLD_GATE && header_ptr->object_id == PIGHEADID && dkr_current_map == MAP_OVERWORLD)
  {
    checkAmuletCost(header_ptr);
  }
  u32 object = (u32) ptr2;
  if(object == 0x00378380 && dkr_current_map == MAP_FUTURE_FUN) //TT Door Text Object
  {
    TTDoorText((char *) header_ptr);
  }
  if(object == 0x00378120) //Boss Door Text Object
  {
    BossDoorText((char *) header_ptr);
  }
  return;
}

u32 transformRacer(u8 vehicle_type, u8 _zero, u8 _zero2, u32 ptr)
{
  if(ap_memory.pc.settings.setting_shuffle_vehicles)
  {
    u8 vt = transformationMap();
    return dkr_fn_transform_racer(vt, _zero, _zero2, ptr);
  }
  else
  {
    return dkr_fn_transform_racer(vehicle_type, _zero, _zero2, ptr);
  }
}

void overworldTransformRacer( u32 ptr, u8 vehicle_type)
{
  storeVehicle(vehicle_type);
  return dkr_fn_overworld_transform_racer(ptr, vehicle_type);
}

void setRacetrack(u8 race_id)
{
  u8 check_actual_track = shuffleTrack(race_id);
  if(check_actual_track == 0)
  {
    dkr_adv2 = ap_memory.pc.mirror_current_race;
    return dkr_fn_race_course(race_id);
  }
  else
  {
    dkr_adv2 = ap_memory.pc.mirror_current_race;
    return dkr_fn_race_course(check_actual_track);
  }
}

u32 inject_hooks() {
  AP_MEMORY_PTR = &ap_memory;
  util_inject(UTIL_INJECT_FUNCTION, 0x80400048, (u32)pre_loop, 1);
  util_inject(UTIL_INJECT_FUNCTION, 0x80023A18, (u32)objectOverrides, 1);
  util_inject(UTIL_INJECT_FUNCTION, 0x80023A58, (u32)balloonOverrides, 1);
  util_inject(UTIL_INJECT_FUNCTION, 0x80023D88, (u32)silverCoinOverrides, 1);
  util_inject(UTIL_INJECT_FUNCTION, 0x800D2AA4, (u32)objectInit, 1);
  util_inject(UTIL_INJECT_FUNCTION, 0x8003DED8, (u32)checkKeySpawn, 1); //Remove key if in Fake Flags
  util_inject(UTIL_INJECT_FUNCTION, 0x8003DF84, (u32)collectKeyLocation, 1); //add key to Fake Flags
  util_inject(UTIL_INJECT_FUNCTION, 0x80024BD4, (u32)transformRacer, 0); 
  util_inject(UTIL_INJECT_FUNCTION, 0x80039EA8, (u32)overworldTransformRacer, 0); 

  util_inject(UTIL_INJECT_FUNCTION, 0x8006CBA8, (u32)setRacetrack, 0); 

  util_inject(UTIL_INJECT_RAW, 0x8001A788, 0, 0); //No balloon from winning races
  util_inject(UTIL_INJECT_RAW, 0x8003B670, 0, 0); //No balloon from collecting in overworld
  util_inject(UTIL_INJECT_RAW, 0x8005A418, 0, 0); //Head Spins if above is in place (checksum??)
  util_inject(UTIL_INJECT_RAW, 0x8003DF9C, 0, 0); //don't add key to mem

  return 0;
}
