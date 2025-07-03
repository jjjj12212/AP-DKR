
#include "ap.h"

bool displayed_text = false;
bool process_text = false;
u16 timer_check = 0x0000;
u8 bcounter = 0;
u8 bbcounter = 0;
u8 overworld_cart = 0;

void changeLevelDoorCost(level_doors_t *obj_pointer)
{
    if(dkr_current_map == MAP_DINO_DOMAIN 
        && obj_pointer->parent_obj_pointer->object_id == LEVEL_DOORID && obj_pointer->graphic != COMPLETED)
    {
        if(obj_pointer->id == ANCIENT_LAKE_ID)
        {
            obj_pointer->second_cost_pointer->second_cost = ap_memory.pc.door_cost[ANCIENT_LAKE_DOOR2];
            obj_pointer->door_cost = ap_memory.pc.door_cost[ANCIENT_LAKE];
            if(!dkr_ancient_lake_flags.race1_complete)
            {
                if(obj_pointer->door_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
            else if(dkr_ancient_lake_flags.race1_complete)
            {
                if(obj_pointer->second_cost_pointer->second_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
        }
        if(obj_pointer->id == FOSSIL_CANYON_ID)
        {
            obj_pointer->second_cost_pointer->second_cost = ap_memory.pc.door_cost[FOSSIL_CANYON_DOOR2];
            obj_pointer->door_cost = ap_memory.pc.door_cost[FOSSIL_CANYON];
            if(!dkr_fossil_canyon_flags.race1_complete)
            {
                if(obj_pointer->door_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
            else if(dkr_fossil_canyon_flags.race1_complete)
            {
                if(obj_pointer->second_cost_pointer->second_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
        }
        if(obj_pointer->id == JUNGLE_FALLS_ID)
        {
            obj_pointer->second_cost_pointer->second_cost = ap_memory.pc.door_cost[JUNGLE_FALLS_DOOR2];
            obj_pointer->door_cost = ap_memory.pc.door_cost[JUNGLE_FALLS];
            if(!dkr_jungle_falls_flags.race1_complete)
            {
                if(obj_pointer->door_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
            else if(dkr_jungle_falls_flags.race1_complete)
            {
                if(obj_pointer->second_cost_pointer->second_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
        }
        if(obj_pointer->id == HOT_TOP_VOLCA_ID)
        {
            obj_pointer->second_cost_pointer->second_cost = ap_memory.pc.door_cost[HOT_TOP_VOLCANO_DOOR2];
            obj_pointer->door_cost = ap_memory.pc.door_cost[HOT_TOP_VOLCANO];
            if(!dkr_hot_top_volcano_flags.race1_complete)
            {
                if(obj_pointer->door_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
            else if(dkr_hot_top_volcano_flags.race1_complete)
            {
                if(obj_pointer->second_cost_pointer->second_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
        }
    }
    if(dkr_current_map == MAP_SNOWFLAKE_MOUNTAIN 
        && obj_pointer->parent_obj_pointer->object_id == LEVEL_DOORID && obj_pointer->graphic != COMPLETED)
    {
        if(obj_pointer->id == EVERFROST_PEA_ID)
        {
            obj_pointer->second_cost_pointer->second_cost = ap_memory.pc.door_cost[EVERFROST_PEAK_DOOR2];
            obj_pointer->door_cost = ap_memory.pc.door_cost[EVERFROST_PEAK];
            if(!dkr_everfrost_peak_flags.race1_complete)
            {
                if(obj_pointer->door_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
            else if(dkr_everfrost_peak_flags.race1_complete)
            {
                if(obj_pointer->second_cost_pointer->second_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
        }
        if(obj_pointer->id == WALRUS_COVE_ID)
        {
            obj_pointer->second_cost_pointer->second_cost = ap_memory.pc.door_cost[WALRUS_COVE_DOOR2];
            obj_pointer->door_cost = ap_memory.pc.door_cost[WALRUS_COVE];
            if(!dkr_walrus_cove_flags.race1_complete)
            {
                if(obj_pointer->door_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
            else if(dkr_walrus_cove_flags.race1_complete)
            {
                if(obj_pointer->second_cost_pointer->second_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
        }
        if(obj_pointer->id == SNOWBALL_VALL_ID)
        {
            obj_pointer->second_cost_pointer->second_cost = ap_memory.pc.door_cost[SNOWBALL_VALLEY_DOOR2];
            obj_pointer->door_cost = ap_memory.pc.door_cost[SNOWBALL_VALLEY];
            if(!dkr_snowball_valley_flags.race1_complete)
            {
                if(obj_pointer->door_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
            else if(dkr_snowball_valley_flags.race1_complete)
            {
                if(obj_pointer->second_cost_pointer->second_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
        }
        if(obj_pointer->id == FROSTY_VILLAG_ID)
        {
            obj_pointer->second_cost_pointer->second_cost = ap_memory.pc.door_cost[FROSTY_VILLAGE_DOOR2];
            obj_pointer->door_cost = ap_memory.pc.door_cost[FROSTY_VILLAGE];
            if(!dkr_frosty_village_flags.race1_complete)
            {
                if(obj_pointer->door_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
            else if(dkr_frosty_village_flags.race1_complete)
            {
                if(obj_pointer->second_cost_pointer->second_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
        }
    }
    if(dkr_current_map == MAP_SHERBET_ISLAND 
        && obj_pointer->parent_obj_pointer->object_id == LEVEL_DOORID && obj_pointer->graphic != COMPLETED)
    {
        if(obj_pointer->id == WHALE_BAY_ID)
        {
            obj_pointer->second_cost_pointer->second_cost = ap_memory.pc.door_cost[WHALE_BAY_DOOR2];
            obj_pointer->door_cost = ap_memory.pc.door_cost[WHALE_BAY];
            if(!dkr_whale_bay_flags.race1_complete)
            {
                if(obj_pointer->door_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
            else if(dkr_whale_bay_flags.race1_complete)
            {
                if(obj_pointer->second_cost_pointer->second_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
        }
        if(obj_pointer->id == CRESCENT_ISLA_ID)
        {
            obj_pointer->second_cost_pointer->second_cost = ap_memory.pc.door_cost[CRESCENT_ISLAND_DOOR2];
            obj_pointer->door_cost = ap_memory.pc.door_cost[CRESCENT_ISLAND];
            if(!dkr_cresent_island_flags.race1_complete)
            {
                if(obj_pointer->door_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
            else if(dkr_cresent_island_flags.race1_complete)
            {
                if(obj_pointer->second_cost_pointer->second_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
        }
        if(obj_pointer->id == PIRATE_LAGOON_ID)
        {
            obj_pointer->second_cost_pointer->second_cost = ap_memory.pc.door_cost[PIRATE_LAGOON_DOOR2];
            obj_pointer->door_cost = ap_memory.pc.door_cost[PIRATE_LAGOON];
            if(!dkr_pirate_lagoon_flags.race1_complete)
            {
                if(obj_pointer->door_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
            else if(dkr_pirate_lagoon_flags.race1_complete)
            {
                if(obj_pointer->second_cost_pointer->second_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
        }
        if(obj_pointer->id == TREASURE_CAVES_ID)
        {
            obj_pointer->second_cost_pointer->second_cost = ap_memory.pc.door_cost[TREASURE_CAVES_DOOR2];
            obj_pointer->door_cost = ap_memory.pc.door_cost[TREASURE_CAVES];
            if(!dkr_treasure_caves_flags.race1_complete)
            {
                if(obj_pointer->door_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
            else if(dkr_treasure_caves_flags.race1_complete)
            {
                if(obj_pointer->second_cost_pointer->second_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
        }
    }
    if(dkr_current_map == MAP_DRAGON_FOREST 
        && obj_pointer->parent_obj_pointer->object_id == LEVEL_DOORID && obj_pointer->graphic != COMPLETED)
    {
        if(obj_pointer->id == WINDMILL_PLAIN_ID)
        {
            obj_pointer->second_cost_pointer->second_cost = ap_memory.pc.door_cost[WINDMILL_PLAINS_DOOR2];
            obj_pointer->door_cost = ap_memory.pc.door_cost[WINDMILL_PLAINS];
            if(!dkr_windmill_plains_flags.race1_complete)
            {
                if(obj_pointer->door_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
            else if(dkr_windmill_plains_flags.race1_complete)
            {
                if(obj_pointer->second_cost_pointer->second_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
        }
        if(obj_pointer->id == GREENWOOD_VILL_ID)
        {
            obj_pointer->second_cost_pointer->second_cost = ap_memory.pc.door_cost[GREENWOOD_VILLAGE_DOOR2];
            obj_pointer->door_cost = ap_memory.pc.door_cost[GREENWOOD_VILLAGE];
            if(!dkr_greenwood_village_flags.race1_complete)
            {
                if(obj_pointer->door_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
            else if(dkr_greenwood_village_flags.race1_complete)
            {
                if(obj_pointer->second_cost_pointer->second_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
        }
        if(obj_pointer->id == BOULDER_CANYON_ID)
        {
            obj_pointer->second_cost_pointer->second_cost = ap_memory.pc.door_cost[BOULDER_CANYON_DOOR2];
            obj_pointer->door_cost = ap_memory.pc.door_cost[BOULDER_CANYON];
            if(!dkr_boulder_canyon_flags.race1_complete)
            {
                if(obj_pointer->door_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
            else if(dkr_boulder_canyon_flags.race1_complete)
            {
                if(obj_pointer->second_cost_pointer->second_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
        }
        if(obj_pointer->id == HAUNTED_WOODS_ID)
        {
            obj_pointer->second_cost_pointer->second_cost = ap_memory.pc.door_cost[HAUNTED_WOODS_DOOR2];
            obj_pointer->door_cost = ap_memory.pc.door_cost[HAUNTED_WOODS];
            if(!dkr_haunted_woods_flags.race1_complete)
            {
                if(obj_pointer->door_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
            else if(dkr_haunted_woods_flags.race1_complete)
            {
                if(obj_pointer->second_cost_pointer->second_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
        }
    }
    if(dkr_current_map == MAP_FUTURE_FUN
        && obj_pointer->parent_obj_pointer->object_id == LEVEL_DOORID && obj_pointer->graphic != COMPLETED)
    {
        if(obj_pointer->id == SPACEDUST_VALL_ID)
        {
            obj_pointer->second_cost_pointer->second_cost = ap_memory.pc.door_cost[SPACEDUST_VALLEY_DOOR2];
            obj_pointer->door_cost = ap_memory.pc.door_cost[SPACEDUST_VALLEY];
            if(!dkr_spacedust_valley_flags.race1_complete)
            {
                if(obj_pointer->door_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
            else if(dkr_spacedust_valley_flags.race1_complete)
            {
                if(obj_pointer->second_cost_pointer->second_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
        }
        if(obj_pointer->id == DARKMOON_CAVER_ID)
        {
            obj_pointer->second_cost_pointer->second_cost = ap_memory.pc.door_cost[DARKMOON_CAVERNS_DOOR2];
            obj_pointer->door_cost = ap_memory.pc.door_cost[DARKMOON_CAVERNS];
            if(!dkr_darkmoon_cavern_flags.race1_complete)
            {
                if(obj_pointer->door_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
            else if(dkr_darkmoon_cavern_flags.race1_complete)
            {
                if(obj_pointer->second_cost_pointer->second_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
        }
        if(obj_pointer->id == SPACEPORT_ALPH_ID)
        {
            obj_pointer->second_cost_pointer->second_cost = ap_memory.pc.door_cost[SPACEPORT_ALPHA_DOOR2];
            obj_pointer->door_cost = ap_memory.pc.door_cost[SPACEPORT_ALPHA];
            if(!dkr_spaceport_alpha_flags.race1_complete)
            {
                if(obj_pointer->door_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
            else if(dkr_spaceport_alpha_flags.race1_complete)
            {
                if(obj_pointer->second_cost_pointer->second_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
        }
        if(obj_pointer->id == STAR_CITY_ID)
        {
            obj_pointer->second_cost_pointer->second_cost = ap_memory.pc.door_cost[STAR_CITY_DOOR2];
            obj_pointer->door_cost = ap_memory.pc.door_cost[STAR_CITY];
            if(!dkr_star_city_flags.race1_complete)
            {
                if(obj_pointer->door_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
            else if(dkr_star_city_flags.race1_complete)
            {
                if(obj_pointer->second_cost_pointer->second_cost < 10)
                {
                    obj_pointer->graphic = SINGLE_DIGIT;
                }
                else
                {
                    obj_pointer->graphic = DOUBLE_DIGIT;
                }
            }
        }
    }
}

void changeWorldDoorCost(world_doors_t *obj_pointer)
{
    if(dkr_current_map == MAP_OVERWORLD 
        && obj_pointer->parent_obj_pointer->object_type == WORLD_GATE 
        && obj_pointer->parent_obj_pointer->object_id == WORLD_GATEID)
    {
        if(obj_pointer->world_door_cost == 0x01) //DINO_DOMAIN
        {
            obj_pointer->world_door_cost = ap_memory.pc.door_cost[DINO_DOMAIN];
            if(ap_memory.pc.door_cost[DINO_DOMAIN] < 9)
            {
                if(obj_pointer->graphic == RIGHT_DOUBLE) obj_pointer->graphic = RIGHT_SINGLE;
                else if(obj_pointer->graphic == LEFT_DOUBLE) obj_pointer->graphic = LEFT_SINGLE;
            }
            else if(ap_memory.pc.door_cost[DINO_DOMAIN] >= 10)
            {
                if(obj_pointer->graphic == RIGHT_SINGLE) obj_pointer->graphic = RIGHT_DOUBLE;
                else if(obj_pointer->graphic == LEFT_SINGLE) obj_pointer->graphic = LEFT_DOUBLE;
            }
        }
        else if(obj_pointer->world_door_cost == 0x02) //SNOWFLAKE_MOUNTAIN
        {
            obj_pointer->world_door_cost = ap_memory.pc.door_cost[SNOWFLAKE_MOUNTAIN];
            if(ap_memory.pc.door_cost[SNOWFLAKE_MOUNTAIN] < 9)
            {
                if(obj_pointer->graphic == RIGHT_DOUBLE) obj_pointer->graphic = RIGHT_SINGLE;
                else if(obj_pointer->graphic == LEFT_DOUBLE) obj_pointer->graphic = LEFT_SINGLE;
            }
            else if(ap_memory.pc.door_cost[SNOWFLAKE_MOUNTAIN] >= 10)
            {
                if(obj_pointer->graphic == RIGHT_SINGLE) obj_pointer->graphic = RIGHT_DOUBLE;
                else if(obj_pointer->graphic == LEFT_SINGLE) obj_pointer->graphic = LEFT_DOUBLE;
            }
        }
        else if(obj_pointer->world_door_cost == 0x0A) //SHERBET_ISLAND
        {
            obj_pointer->world_door_cost = ap_memory.pc.door_cost[SHERBET_ISLAND];
            if(ap_memory.pc.door_cost[SHERBET_ISLAND] < 9)
            {
                if(obj_pointer->graphic == RIGHT_DOUBLE) obj_pointer->graphic = RIGHT_SINGLE;
                else if(obj_pointer->graphic == LEFT_DOUBLE) obj_pointer->graphic = LEFT_SINGLE;
            }
            else if(ap_memory.pc.door_cost[SHERBET_ISLAND] >= 10)
            {
                if(obj_pointer->graphic == RIGHT_SINGLE) obj_pointer->graphic = RIGHT_DOUBLE;
                else if(obj_pointer->graphic == LEFT_SINGLE) obj_pointer->graphic = LEFT_DOUBLE;
            }
        }
        else if(obj_pointer->world_door_cost == 0x0A) //SHERBET_ISLAND
        {
            obj_pointer->world_door_cost = ap_memory.pc.door_cost[SHERBET_ISLAND];
            if(ap_memory.pc.door_cost[SHERBET_ISLAND] < 9)
            {
                if(obj_pointer->graphic == RIGHT_DOUBLE) obj_pointer->graphic = RIGHT_SINGLE;
                else if(obj_pointer->graphic == LEFT_DOUBLE) obj_pointer->graphic = LEFT_SINGLE;
            }
            else if(ap_memory.pc.door_cost[SHERBET_ISLAND] >= 10)
            {
                if(obj_pointer->graphic == RIGHT_SINGLE) obj_pointer->graphic = RIGHT_DOUBLE;
                else if(obj_pointer->graphic == LEFT_SINGLE) obj_pointer->graphic = LEFT_DOUBLE;
            }
        }
        else if(obj_pointer->world_door_cost == 0x10) //DRAGON_FOREST
        {
            obj_pointer->world_door_cost = ap_memory.pc.door_cost[DRAGON_FOREST];
            if(ap_memory.pc.door_cost[DRAGON_FOREST] < 9)
            {
                if(obj_pointer->graphic == RIGHT_DOUBLE) obj_pointer->graphic = RIGHT_SINGLE;
                else if(obj_pointer->graphic == LEFT_DOUBLE) obj_pointer->graphic = LEFT_SINGLE;
            }
            else if(ap_memory.pc.door_cost[DRAGON_FOREST] >= 10)
            {
                if(obj_pointer->graphic == RIGHT_SINGLE) obj_pointer->graphic = RIGHT_DOUBLE;
                else if(obj_pointer->graphic == LEFT_SINGLE) obj_pointer->graphic = LEFT_DOUBLE;
            }
        }
    }
}

void changeBossDoorCost(boss_doors_t *obj_pointer)
{
    if(obj_pointer->parent_obj_pointer->object_type == LEVEL_DOOR 
        && obj_pointer->parent_obj_pointer->object_id == BOSS_DOORID)
    {
        if(ap_memory.pc.settings.setting_boss1_regional_balloons < 4)
        {
            if(dkr_current_map == MAP_DINO_DOMAIN && !dkr_beaten_bosses.dino_first_race)
            {
                obj_pointer->door_cost = ap_memory.pc.settings.setting_boss1_regional_balloons;
            }
            if(dkr_current_map == MAP_SNOWFLAKE_MOUNTAIN && !dkr_beaten_bosses.walrus_first_race)
            {
                obj_pointer->door_cost = ap_memory.pc.settings.setting_boss1_regional_balloons;
            }
            if(dkr_current_map == MAP_SHERBET_ISLAND && !dkr_beaten_bosses.octo_first_race)
            {
                obj_pointer->door_cost = ap_memory.pc.settings.setting_boss1_regional_balloons;
            }
            if(dkr_current_map == MAP_DRAGON_FOREST && !dkr_beaten_bosses.dragon_first_race)
            {
                obj_pointer->door_cost = ap_memory.pc.settings.setting_boss1_regional_balloons;
            }
        }

        if(ap_memory.pc.settings.setting_boss2_regional_balloons < 8)
        {
            if(dkr_current_map == MAP_DINO_DOMAIN && dkr_beaten_bosses.dino_first_race)
            {
                obj_pointer->door_cost = ap_memory.pc.settings.setting_boss2_regional_balloons;
                if(dino_golden_balloons >=  ap_memory.pc.settings.setting_boss2_regional_balloons)
                {
                    dkr_open_boss_race2_graphic_override = dino_golden_balloons;
                    dkr_open_boss_race2_race_override1 = dino_golden_balloons;
                    dkr_open_boss_race2_race_override2 = dino_golden_balloons;
                }
            }
            if(dkr_current_map == MAP_SNOWFLAKE_MOUNTAIN && dkr_beaten_bosses.walrus_first_race)
            {
                obj_pointer->door_cost = ap_memory.pc.settings.setting_boss2_regional_balloons;
                if(snowflake_golden_balloons >=  ap_memory.pc.settings.setting_boss2_regional_balloons)
                {
                    dkr_open_boss_race2_graphic_override = snowflake_golden_balloons;
                    dkr_open_boss_race2_race_override1 = snowflake_golden_balloons;
                    dkr_open_boss_race2_race_override2 = snowflake_golden_balloons;
                }
            }
            if(dkr_current_map == MAP_SHERBET_ISLAND && dkr_beaten_bosses.octo_first_race)
            {
                obj_pointer->door_cost = ap_memory.pc.settings.setting_boss2_regional_balloons;
                if(island_golden_balloons >=  ap_memory.pc.settings.setting_boss2_regional_balloons)
                {
                    dkr_open_boss_race2_graphic_override = island_golden_balloons;
                    dkr_open_boss_race2_race_override1 = island_golden_balloons;
                    dkr_open_boss_race2_race_override2 = island_golden_balloons;
                }
            }
            if(dkr_current_map == MAP_DRAGON_FOREST && dkr_beaten_bosses.dragon_first_race)
            {
                obj_pointer->door_cost = ap_memory.pc.settings.setting_boss2_regional_balloons;
                if(dragon_golden_balloons >=  ap_memory.pc.settings.setting_boss2_regional_balloons)
                {
                    dkr_open_boss_race2_graphic_override = dragon_golden_balloons;
                    dkr_open_boss_race2_race_override1 = dragon_golden_balloons;
                    dkr_open_boss_race2_race_override2 = dragon_golden_balloons;
                }
            }
        }
    }
}

void setTTDoor()
{
    dkr_tt_door_balloon_override = ap_memory.pc.settings.setting_wizpig2_balloons;
    dkr_tt_door_amulet_override = ap_memory.pc.settings.setting_tt_amulet_pieces;
    dkr_progression.wizpig_2_cutscene = 1;
}

void setCutscenes()
{
    if(ap_memory.pc.settings.setting_wizpig_amulet_pieces < 4)
    {
        dkr_open_pig_cutscene_override = ap_memory.pc.settings.setting_wizpig_amulet_pieces;
    }
    if(ap_memory.pc.settings.setting_boss1_regional_balloons < 4)
    {
        dkr_open_boss_race1_cutscene_override = ap_memory.pc.settings.setting_boss1_regional_balloons;
    }
    if(ap_memory.pc.settings.setting_boss2_regional_balloons < 8)
    {
        if(dkr_current_map == MAP_DINO_DOMAIN && dkr_beaten_bosses.dino_first_race)
        {
            dkr_open_boss_race2_cutscene_override = ap_memory.pc.settings.setting_boss2_regional_balloons;
        }
        else
        {
            dkr_open_boss_race2_cutscene_override = 0x08;
        }
        if(dkr_current_map == MAP_SNOWFLAKE_MOUNTAIN && dkr_beaten_bosses.walrus_first_race)
        {
            dkr_open_boss_race2_cutscene_override = ap_memory.pc.settings.setting_boss2_regional_balloons;
        }
        else
        {
            dkr_open_boss_race2_cutscene_override = 0x08;
        }
        if(dkr_current_map == MAP_SHERBET_ISLAND && dkr_beaten_bosses.octo_first_race)
        {
            dkr_open_boss_race2_cutscene_override = ap_memory.pc.settings.setting_boss2_regional_balloons;
        }
        else
        {
            dkr_open_boss_race2_cutscene_override = 0x08;
        }
        if(dkr_current_map == MAP_DRAGON_FOREST && dkr_beaten_bosses.dragon_first_race)
        {
            dkr_open_boss_race2_cutscene_override = ap_memory.pc.settings.setting_boss2_regional_balloons;
        }
        else
        {
            dkr_open_boss_race2_cutscene_override = 0x08;
        }
    }
}

void checkAmuletCost(pighead_header_object_t *header_ptr)
{
    if(ap_memory.pc.settings.setting_wizpig_amulet_pieces < 4)
    {
        if(ap_memory.pc.settings.setting_wizpig_amulet_pieces == 0)
        {
            header_ptr->amulet_0 = ENOUGH_AMULET;
            header_ptr->amulet_1 = ENOUGH_AMULET;
            header_ptr->amulet_2 = ENOUGH_AMULET;
            header_ptr->amulet_3 = ENOUGH_AMULET;
        }
        else if(ap_memory.pc.settings.setting_wizpig_amulet_pieces == 1)
        {
            header_ptr->amulet_1 = ENOUGH_AMULET;
            header_ptr->amulet_2 = ENOUGH_AMULET;
            header_ptr->amulet_3 = ENOUGH_AMULET;
        }
        else if(ap_memory.pc.settings.setting_wizpig_amulet_pieces == 2)
        {
            header_ptr->amulet_2 = ENOUGH_AMULET;
            header_ptr->amulet_3 = ENOUGH_AMULET;
        }
        else if(ap_memory.pc.settings.setting_wizpig_amulet_pieces == 3)
        {
            header_ptr->amulet_3 = ENOUGH_AMULET;
        }
    }
}

void apItemCheck(){
    dino_golden_balloons = ap_memory.pc.items[AP_DINO_DOMAIN_BALLOON];
    snowflake_golden_balloons = ap_memory.pc.items[AP_SNOWFLAKE_MOUNTAIN_BALLOON];
    island_golden_balloons = ap_memory.pc.items[AP_SHERBET_ISLAND_BALLOON];
    dragon_golden_balloons = ap_memory.pc.items[AP_DRAGON_FOREST_BALLOON];
    future_golden_balloons = ap_memory.pc.items[AP_FUTURE_FUN_LAND_BALOON];

    if(total_golden_balloons != (ap_memory.pc.items[AP_TIMBER_ISLAND_BALLOON] + dino_golden_balloons + snowflake_golden_balloons + island_golden_balloons + dragon_golden_balloons
        + future_golden_balloons))
    {
        total_golden_balloons = ap_memory.pc.items[AP_TIMBER_ISLAND_BALLOON] + dino_golden_balloons + snowflake_golden_balloons + island_golden_balloons + dragon_golden_balloons
            + future_golden_balloons;
        if(total_golden_balloons > 0x63)
        {
            total_golden_balloons = 0x63;
        }
    }
    
    // if(ap_memory.pc.settings.setting_shuffle_wizpig_amulet)
    // {
    dkr_wizpig_amulet = ap_memory.pc.items[AP_WIZPIG_AMULET_PIECE];
    if(ap_memory.pc.items[AP_WIZPIG_AMULET_PIECE] > 4)
    {
        dkr_wizpig_amulet = 4;
    }
    // }
    // if(ap_memory.pc.settings.setting_shuffle_tt_amulet)
    // {
        if(dkr_tt_amulet != ap_memory.pc.items[AP_TT_AMULET_PIECE])
        {
            dkr_tt_amulet = ap_memory.pc.items[AP_TT_AMULET_PIECE];
            if(ap_memory.pc.items[AP_TT_AMULET_PIECE] > 4)
            {
                dkr_tt_amulet = 4;
            }
        }
    // }
    if(ap_memory.pc.items[AP_FIRE_MOUNTAIN_KEY])
    {
        dkr_keys.dino_key = 1;
    }
    if(ap_memory.pc.items[AP_ICICLE_PYRAMID_KEY])
    {
        dkr_keys.snowflake_key = 1;
    }
    if(ap_memory.pc.items[AP_DARKWATER_BEACH_KEY])
    {
        dkr_keys.island_key = 1;
    }
    if(ap_memory.pc.items[AP_SMOKEY_CASTLE_KEY])
    {
        dkr_keys.dragon_key = 1;
    }
}

void apDialogCheck()
{
    if(process_text == false)
    {
        if(ap_memory.pc.text_queue != ap_memory.pc.n64_text_queue)
        {
            process_text = true;
        }
    }
    else
    {
        if(world_dialog_show_dialog == 0 && !displayed_text) //Show Dialog
        {
            show_ap_dialog();
        }
        else if(!displayed_text && (world_dialog_timer >= 0x50 && world_dialog_timer <= 0x95)) //Make sure the Dialog Appeared
        {
            displayed_text = true;
        }
        else if(displayed_text && world_dialog_show_dialog == 0x0000 && timer_check == world_dialog_timer) //Make sure Scene didn't Transition
        {
            show_ap_dialog();
        }
        else if(displayed_text && world_dialog_timer == 0x0) //Message Processed
        {
            displayed_text = false;
            process_text = false;
            ap_memory.pc.n64_text_queue++;
        }
        timer_check = world_dialog_timer;
    }
    // if(ap_memory.pc.text_queue != ap_memory.pc.n64_text_queue && world_dialog_show_dialog != 0x0001 && !displayed_text)
    // {
    //     show_ap_dialog();
    //     displayed_text = true;
    // }
    // else if(ap_memory.pc.text_queue != ap_memory.pc.n64_text_queue && world_dialog_show_dialog != 0x0001 && timer_check == world_dialog_timer)
    // {
    //     show_ap_dialog();
    // }
    // if(ap_memory.pc.text_queue != ap_memory.pc.n64_text_queue && world_dialog_timer == 0x0000 && displayed_text)
    // {
    //     ap_memory.pc.n64_text_queue += 1; //ready for the next message in queue
    //     displayed_text = false;
    // }
    // timer_check = world_dialog_timer;
}

void changeWeaponBalloons(balloon_t *obj_pointer, u16 balloon_id)
{
    if(obj_pointer->parent_obj_pointer->object_type == WEAPON && obj_pointer->parent_obj_pointer->object_id == WEAPONID)
    {
        if(ap_memory.pc.settings.setting_balloon_type == BALLOON_SPEED)
        {
            obj_pointer->balloon_property = BALLOON_SPEED;
            obj_pointer->graphic = BALLOON_SPEED;
        }
        else if(ap_memory.pc.settings.setting_balloon_type == BALLOON_MISSLE)
        {
            obj_pointer->balloon_property = BALLOON_MISSLE;
            obj_pointer->graphic = BALLOON_MISSLE;
        }
        else if(ap_memory.pc.settings.setting_balloon_type == BALLOON_SLIP)
        {
            obj_pointer->balloon_property = BALLOON_SLIP;
            obj_pointer->graphic = BALLOON_SLIP;
        }
        else if(ap_memory.pc.settings.setting_balloon_type == BALLOON_SHIELD)
        {
            obj_pointer->balloon_property = BALLOON_SHIELD;
            obj_pointer->graphic = BALLOON_SHIELD;
        }
        else if(ap_memory.pc.settings.setting_balloon_type == BALLOON_MAGNET)
        {
            obj_pointer->balloon_property = BALLOON_MAGNET;
            obj_pointer->graphic = BALLOON_MAGNET;
        }
    }
}

void initializeAPBalloons(balloon_t *obj_pointer, u16 balloon_id)
{
    if(obj_pointer->parent_obj_pointer->object_type == WEAPON && obj_pointer->parent_obj_pointer->object_id == WEAPONID)
    {
        for(int i = 0; i < 64; i++)
        {
            if(!checkBalloonPtr(ap_memory.pc.n64_balloons[i].balloon_ptrs))
            {
                ap_memory.pc.balloons_map = dkr_current_map;
                ap_memory.pc.n64_balloons[i].balloon_ptrs = obj_pointer;
                ap_memory.pc.n64_balloons[i].balloon_id = balloon_id;
                ap_memory.pc.n64_balloons[i].collected = false;
                ap_memory.pc.total_balloons +=1;
                break;
            }
        }
    }
}

void watchCollectedBalloons()
{
    for(int i = 0; i < 64; i++)
    {
        if(checkBalloonPtr(ap_memory.pc.n64_balloons[i].balloon_ptrs))
        {
            if(ap_memory.pc.n64_balloons[i].balloon_ptrs->collected == 0x4002)
            {
                u32 kart = ap_memory.pc.n64_balloons[i].balloon_ptrs->collected_ptr->kartptr;
                if(kart == player_kart_ptr)
                {
                    ap_memory.pc.n64_balloons[i].collected = true;
                }
            }
        }
    }
}

void deInitializeAPBalloons()
{
    for(int i = 0; i < 64; i++)
    {
        u32 ptr = (u32) ap_memory.pc.n64_balloons[i].balloon_ptrs;
        if(ptr == 0x0)
            continue;
        if(!checkBalloonPtr(ap_memory.pc.n64_balloons[i].balloon_ptrs))
        {
            balloon_t *new;
            ap_memory.pc.n64_balloons[i].balloon_ptrs = new;
            ap_memory.pc.n64_balloons[i].balloon_id = 0;
            ap_memory.pc.n64_balloons[i].collected = false;
            ap_memory.pc.total_balloons = 0;
        }
    }
}

bool checkBalloonPtr(balloon_t *obj_pointer)
{
    u32 num_check = (u32) obj_pointer;
    if(num_check != 0x0)
    {
        if(dkr_current_map == ap_memory.pc.balloons_map)
        {
            if(obj_pointer->parent_obj_pointer != 0 && ((u32) obj_pointer->parent_obj_pointer > 0x80100000 && (u32) obj_pointer->parent_obj_pointer < 0x80400000))
            {
                if(obj_pointer->parent_obj_pointer->object_id == WEAPONID && obj_pointer->parent_obj_pointer->object_type == WEAPON)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

void balloon_rando()
{

  bbcounter +=1;
  if(bbcounter == 3)
  {
    bcounter +=1;
    bbcounter = 0;
  } 
  if(bcounter >= 0x5) bcounter = 0x0;
}

void changeWeaponBalloonsDynamic()
{
    for(int i = 0; i < 64; i++)
    {
        if(checkBalloonPtr(ap_memory.pc.n64_balloons[i].balloon_ptrs))
        {
            if(ap_memory.pc.settings.setting_balloon_type == 0x05)
            {
                ap_memory.pc.n64_balloons[i].balloon_ptrs->graphic = bcounter;
            }
            else if(ap_memory.pc.settings.setting_balloon_type == 0x06)
            {
                ap_memory.pc.n64_balloons[i].balloon_ptrs->graphic = BALLOON_MAGNET;
            }
            ap_memory.pc.n64_balloons[i].balloon_ptrs->balloon_property = bcounter;
        }
    }
}

void initializeAPSilverCoins(silvercoin_t *obj_pointer, u16 scoin_id)
{
    if(obj_pointer->parent_obj_pointer->object_type == SILVER_COIN && obj_pointer->parent_obj_pointer->object_id == SILVER_COINID)
    {
        for(int i = 0; i < 8; i++)
        {
            if(!checkSilverCoinPtr(ap_memory.pc.n64_silvercoins[i].silvercoin_ptrs))
            {
                ap_memory.pc.coin_map = dkr_current_map;
                ap_memory.pc.n64_silvercoins[i].silvercoin_ptrs = obj_pointer;
                ap_memory.pc.n64_silvercoins[i].silvercoin_id = scoin_id;
                ap_memory.pc.n64_silvercoins[i].collected = false;
                break;
            }
        }
    }
}

bool checkSilverCoinPtr(silvercoin_t *obj_pointer)
{
    u32 num_check = (u32) obj_pointer;
    if(num_check != 0x0)
    {
        if(dkr_current_map == ap_memory.pc.coin_map)
        {
            if(obj_pointer->parent_obj_pointer != 0 && ((u32) obj_pointer->parent_obj_pointer > 0x80100000 && (u32) obj_pointer->parent_obj_pointer < 0x80400000))
            {
                if(obj_pointer->parent_obj_pointer->object_id == SILVER_COINID && obj_pointer->parent_obj_pointer->object_type == SILVER_COIN)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

void watchCollectedSilverCoins()
{
    for(int i = 0; i < 8; i++)
    {
        if(checkSilverCoinPtr(ap_memory.pc.n64_silvercoins[i].silvercoin_ptrs))
        {
            if(ap_memory.pc.n64_silvercoins[i].silvercoin_ptrs->collected == 0x0202)
            {
                ap_memory.pc.n64_silvercoins[i].collected = true;
            }
        }
    }
}

void deInitializeAPSilverCoins()
{
    for(int i = 0; i < 8; i++)
    {
        u32 ptr = (u32) ap_memory.pc.n64_silvercoins[i].silvercoin_ptrs;
        if(ptr == 0x0)
            continue;
        if(!checkSilverCoinPtr(ap_memory.pc.n64_silvercoins[i].silvercoin_ptrs))
        {
            silvercoin_t *new;
            ap_memory.pc.n64_silvercoins[i].silvercoin_ptrs = new;
            ap_memory.pc.n64_silvercoins[i].silvercoin_id = 0;
            ap_memory.pc.n64_silvercoins[i].collected = false;
        }
    }
}

void overworldTransformAllowed()
{
    if(ap_memory.pc.settings.setting_shuffle_vehicles && ap_memory.pc.settings.setting_sv_including_overworld)
    {
        if(dkr_current_map == MAP_OVERWORLD)
        {
            if(overworld_transformation == KART && !ap_memory.pc.items[AP_KART])
            {
                if(ap_memory.pc.items[AP_PLANE])
                {
                    overworld_transformation = PLANE;
                    return;
                } 
                else if(ap_memory.pc.items[AP_HOVERCAR])
                {
                    overworld_transformation = HOVERCAR;
                    return;
                }
                else
                {
                    overworld_transformation = KART;
                    return;
                }
            }
            else if(overworld_transformation == HOVERCAR && !ap_memory.pc.items[AP_HOVERCAR])
            {
                if(ap_memory.pc.items[AP_PLANE])
                {
                    overworld_transformation = PLANE;
                    return;
                } 
                else if(ap_memory.pc.items[AP_KART])
                {
                    overworld_transformation = KART;
                    return;
                }
                else
                {
                    overworld_transformation = KART;
                    return;
                }
            }
            else if(overworld_transformation == PLANE && !ap_memory.pc.items[AP_PLANE])
            {
                if(ap_memory.pc.items[AP_KART])
                {
                    overworld_transformation = KART;
                    return;
                }
                else if(ap_memory.pc.items[AP_HOVERCAR])
                {
                    overworld_transformation = HOVERCAR;
                    return;
                }
                else
                {
                    overworld_transformation = KART;
                    return;
                }
            }
        }
        else{
            if(overworld_saved_transformation == KART && !ap_memory.pc.items[AP_KART])
            {
                if(ap_memory.pc.items[AP_PLANE])
                {
                    overworld_saved_transformation = PLANE;
                    return;
                } 
                else if(ap_memory.pc.items[AP_HOVERCAR])
                {
                    overworld_saved_transformation = HOVERCAR;
                    return;
                }
                else
                {
                    overworld_saved_transformation = KART;
                    return;
                }
            }
            else if(overworld_saved_transformation == HOVERCAR && !ap_memory.pc.items[AP_HOVERCAR])
            {
                if(ap_memory.pc.items[AP_PLANE])
                {
                    overworld_saved_transformation = PLANE;
                    return;
                } 
                else if(ap_memory.pc.items[AP_KART])
                {
                    overworld_saved_transformation = KART;
                    return;
                }
                else
                {
                    overworld_saved_transformation = KART;
                    return;
                }
            }
            else if(overworld_saved_transformation == PLANE && !ap_memory.pc.items[AP_PLANE])
            {
                if(ap_memory.pc.items[AP_KART])
                {
                    overworld_saved_transformation = KART;
                    return;
                }
                else if(ap_memory.pc.items[AP_HOVERCAR])
                {
                    overworld_saved_transformation = HOVERCAR;
                    return;
                }
                else
                {
                    overworld_saved_transformation = KART;
                    return;
                }
            }
        }
    }
}

u8 transformationMap()
{
    switch(dkr_current_map)
    {
        case MAP_HOT_TOP_VOLC:
        case MAP_FIRE_MOUNTAIN: //no effect
            return shuffleOrderPHC();
        case MAP_ANCIENT_LAKE:
        case MAP_JUNGLE_FALLS:
        case MAP_FOSSIL_CANYON:
        case MAP_FROSTY_VILLAGE:
        case MAP_SNOWBALL_VALLEY:
        case MAP_WALRUS_COVE:
        case MAP_CRESCENT_CAVE:
        case MAP_TREASURE_CAVES:
        case MAP_GREENWOOD_VILLAGE:
        case MAP_HAUNTED_WOODS:
        case MAP_DARKMOON_CAVERNS:
        case MAP_STAR_CITY:
            return shuffleOrderCPH();
        case MAP_EVERFROST_PEAK:
        case MAP_WINDMILL_PLAINS:
        case MAP_SPACEDUST_ALLEY:
        case MAP_SPACEPORT_ALPHA:
            return shuffleOrderPCH();
        case MAP_ICE_PYRAMID: // no effect
        case MAP_SMOKEY_CASTLE: // no effect
            return shuffleOrderCHP();
        case MAP_WHALE_BAY:
        case MAP_PIRATE_LAGOON:
        case MAP_DARKWATER_BEACH: // no effect
        case MAP_BOULDER_CANYON:
            return shuffleOrderHPC();
        default:
            return 0x0;
    }
}

u8 shuffleOrderPHC()
{
    if(ap_memory.pc.items[AP_PLANE])
        return PLANE;
    if(ap_memory.pc.items[AP_HOVERCAR])
        return HOVERCAR;
    else
        return KART;
}

u8 shuffleOrderPCH()
{
    if(ap_memory.pc.items[AP_PLANE])
        return PLANE;
    if(ap_memory.pc.items[AP_KART])
        return KART;
    if(ap_memory.pc.items[AP_HOVERCAR])
        return HOVERCAR;
    else
        return KART;
}

u8 shuffleOrderHPC()
{
    if(ap_memory.pc.items[AP_HOVERCAR])
        return HOVERCAR;
    if(ap_memory.pc.items[AP_PLANE])
        return PLANE;
    else
        return KART;
}

u8 shuffleOrderCPH()
{
    if(ap_memory.pc.items[AP_KART])
        return KART;
    if(ap_memory.pc.items[AP_PLANE])
        return PLANE;
    if(ap_memory.pc.items[AP_HOVERCAR])
        return HOVERCAR;
    return KART;
}

u8 shuffleOrderCHP()
{
    if(ap_memory.pc.items[AP_KART])
        return KART;
    if(ap_memory.pc.items[AP_HOVERCAR])
        return HOVERCAR;
    if(ap_memory.pc.items[AP_PLANE])
        return PLANE;
    return KART;
}

void storeVehicle(u8 vehicle)
{
    overworld_cart = vehicle;
}

void overworldTranformFix()
{
    if(overworld_saved_transformation != overworld_cart)
    {
        overworld_saved_transformation = overworld_cart;
    }
}