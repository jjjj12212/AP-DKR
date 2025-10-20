
#include "ap.h"

bool displayed_text = false;
bool process_text = false;
u16 timer_check = 0x0000;
u8 bcounter = 0;
u8 bbcounter = 0;

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
        else if(ap_memory.pc.settings.setting_balloon_type == 0x07)
        {
            inLevelBalloonShuffle(obj_pointer);
        }
        else if(ap_memory.pc.settings.setting_balloon_type == 0x08)
        {
            int val = crand() % (4 + 1);
            obj_pointer->balloon_property = (u8)val;
            obj_pointer->graphic = (u8)val;
        }

        if(ap_memory.pc.settings.setting_bridge_balloon && dkr_current_map == MAP_BOULDER_CANYON) // Boulder Canyon Bell Balloon
        {
            if(ap_memory.pc.settings.setting_open_worlds == false && ap_memory.pc.settings.setting_shuffle_door_requirements == false)
            {
                if(balloon_id == 0x00B9)
                {
                    obj_pointer->balloon_property = BALLOON_SPEED;
                    obj_pointer->graphic = BALLOON_SPEED;
                }
            }
            else if(balloon_id == 0x00BB)
            {
                obj_pointer->balloon_property = BALLOON_SPEED;
                obj_pointer->graphic = BALLOON_SPEED;
            }
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
                // if(ap_memory.pc.settings.setting_shuffle_tracks)
                // {
                //     ap_memory.pc.balloons_map = checkShuffleTrack(dkr_current_map);
                // }
                // else
                // {
                //    ap_memory.pc.balloons_map = dkr_current_map;
                // }
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
        if(ap_memory.pc.settings.setting_bridge_balloon && dkr_current_map == MAP_BOULDER_CANYON)
        //todo if i == 10,
        {
            if(ap_memory.pc.settings.setting_open_worlds == false && ap_memory.pc.settings.setting_shuffle_door_requirements == false)
            {
                if(ap_memory.pc.n64_balloons[i].balloon_id == 0x00B9)
                {
                    continue;
                }
            }
            else if(ap_memory.pc.n64_balloons[i].balloon_id == 0x00BB)
            {
                continue;
            }
        }
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

void setCBalloonTotals(u8 map)
{
    switch (map)
    {
    case MAP_ANCIENT_LAKE:
        ap_memory.pc.total_balloon_colour_map.red = BALLOON_DD_AL_R;
        ap_memory.pc.total_balloon_colour_map.green = BALLOON_DD_AL_G;
        ap_memory.pc.total_balloon_colour_map.blue = BALLOON_DD_AL_B;
        ap_memory.pc.total_balloon_colour_map.purple = BALLOON_DD_AL_P;
        ap_memory.pc.total_balloon_colour_map.rainbow = BALLOON_DD_AL_W;
        break;
    case MAP_FOSSIL_CANYON:
        ap_memory.pc.total_balloon_colour_map.red = BALLOON_DD_FC_R;
        ap_memory.pc.total_balloon_colour_map.green = BALLOON_DD_FC_G;
        ap_memory.pc.total_balloon_colour_map.blue = BALLOON_DD_FC_B;
        ap_memory.pc.total_balloon_colour_map.purple = BALLOON_DD_FC_P;
        ap_memory.pc.total_balloon_colour_map.rainbow = BALLOON_DD_FC_W;
        break;
    case MAP_JUNGLE_FALLS:
        ap_memory.pc.total_balloon_colour_map.red = BALLOON_DD_JF_R;
        ap_memory.pc.total_balloon_colour_map.green = BALLOON_DD_JF_G;
        ap_memory.pc.total_balloon_colour_map.blue = BALLOON_DD_JF_B;
        ap_memory.pc.total_balloon_colour_map.purple = BALLOON_DD_JF_P;
        ap_memory.pc.total_balloon_colour_map.rainbow = BALLOON_DD_JF_W;
        break;
    case MAP_HOT_TOP_VOLC:
        ap_memory.pc.total_balloon_colour_map.red = BALLOON_DD_HV_R;
        ap_memory.pc.total_balloon_colour_map.green = BALLOON_DD_HV_G;
        ap_memory.pc.total_balloon_colour_map.blue = BALLOON_DD_HV_B;
        ap_memory.pc.total_balloon_colour_map.purple = BALLOON_DD_HV_P;
        ap_memory.pc.total_balloon_colour_map.rainbow = BALLOON_DD_HV_W;
        break;

    case MAP_EVERFROST_PEAK:
        ap_memory.pc.total_balloon_colour_map.red = BALLOON_SM_EP_R;
        ap_memory.pc.total_balloon_colour_map.green = BALLOON_SM_EP_G;
        ap_memory.pc.total_balloon_colour_map.blue = BALLOON_SM_EP_B;
        ap_memory.pc.total_balloon_colour_map.purple = BALLOON_SM_EP_P;
        ap_memory.pc.total_balloon_colour_map.rainbow = BALLOON_SM_EP_W;
        break;
    case MAP_WALRUS_COVE:
        ap_memory.pc.total_balloon_colour_map.red = BALLOON_SM_WC_R;
        ap_memory.pc.total_balloon_colour_map.green = BALLOON_SM_WC_G;
        ap_memory.pc.total_balloon_colour_map.blue = BALLOON_SM_WC_B;
        ap_memory.pc.total_balloon_colour_map.purple = BALLOON_SM_WC_P;
        ap_memory.pc.total_balloon_colour_map.rainbow = BALLOON_SM_WC_W;
        break;
    case MAP_SNOWBALL_VALLEY:
        ap_memory.pc.total_balloon_colour_map.red = BALLOON_SM_SV_R;
        ap_memory.pc.total_balloon_colour_map.green = BALLOON_SM_SV_G;
        ap_memory.pc.total_balloon_colour_map.blue = BALLOON_SM_SV_B;
        ap_memory.pc.total_balloon_colour_map.purple = BALLOON_SM_SV_P;
        ap_memory.pc.total_balloon_colour_map.rainbow = BALLOON_SM_SV_W;
        break;
    case MAP_FROSTY_VILLAGE:
        ap_memory.pc.total_balloon_colour_map.red = BALLOON_SM_FV_R;
        ap_memory.pc.total_balloon_colour_map.green = BALLOON_SM_FV_G;
        ap_memory.pc.total_balloon_colour_map.blue = BALLOON_SM_FV_B;
        ap_memory.pc.total_balloon_colour_map.purple = BALLOON_SM_FV_P;
        ap_memory.pc.total_balloon_colour_map.rainbow = BALLOON_SM_FV_W;
        break;

    case MAP_WHALE_BAY:
        ap_memory.pc.total_balloon_colour_map.red = BALLOON_SI_WB_R;
        ap_memory.pc.total_balloon_colour_map.green = BALLOON_SI_WB_G;
        ap_memory.pc.total_balloon_colour_map.blue = BALLOON_SI_WB_B;
        ap_memory.pc.total_balloon_colour_map.purple = BALLOON_SI_WB_P;
        ap_memory.pc.total_balloon_colour_map.rainbow = BALLOON_SI_WB_W;
        break;
    case MAP_CRESCENT_ISLAND:
        ap_memory.pc.total_balloon_colour_map.red = BALLOON_SI_CI_R;
        ap_memory.pc.total_balloon_colour_map.green = BALLOON_SI_CI_G;
        ap_memory.pc.total_balloon_colour_map.blue = BALLOON_SI_CI_B;
        ap_memory.pc.total_balloon_colour_map.purple = BALLOON_SI_CI_P;
        ap_memory.pc.total_balloon_colour_map.rainbow = BALLOON_SI_CI_W;
        break;
    case MAP_PIRATE_LAGOON:
        ap_memory.pc.total_balloon_colour_map.red = BALLOON_SI_PL_R;
        ap_memory.pc.total_balloon_colour_map.green = BALLOON_SI_PL_G;
        ap_memory.pc.total_balloon_colour_map.blue = BALLOON_SI_PL_B;
        ap_memory.pc.total_balloon_colour_map.purple = BALLOON_SI_PL_P;
        ap_memory.pc.total_balloon_colour_map.rainbow = BALLOON_SI_PL_W;
        break;
    case MAP_TREASURE_CAVES:
        ap_memory.pc.total_balloon_colour_map.red = BALLOON_SI_TC_R;
        ap_memory.pc.total_balloon_colour_map.green = BALLOON_SI_TC_G;
        ap_memory.pc.total_balloon_colour_map.blue = BALLOON_SI_TC_B;
        ap_memory.pc.total_balloon_colour_map.purple = BALLOON_SI_TC_P;
        ap_memory.pc.total_balloon_colour_map.rainbow = BALLOON_SI_TC_W;
        break;

    case MAP_WINDMILL_PLAINS:
        ap_memory.pc.total_balloon_colour_map.red = BALLOON_DF_WP_R;
        ap_memory.pc.total_balloon_colour_map.green = BALLOON_DF_WP_G;
        ap_memory.pc.total_balloon_colour_map.blue = BALLOON_DF_WP_B;
        ap_memory.pc.total_balloon_colour_map.purple = BALLOON_DF_WP_P;
        ap_memory.pc.total_balloon_colour_map.rainbow = BALLOON_DF_WP_W;
        break;
    case MAP_GREENWOOD_VILLAGE:
        ap_memory.pc.total_balloon_colour_map.red = BALLOON_DF_GV_R;
        ap_memory.pc.total_balloon_colour_map.green = BALLOON_DF_GV_G;
        ap_memory.pc.total_balloon_colour_map.blue = BALLOON_DF_GV_B;
        ap_memory.pc.total_balloon_colour_map.purple = BALLOON_DF_GV_P;
        ap_memory.pc.total_balloon_colour_map.rainbow = BALLOON_DF_GV_W;
        break;
    case MAP_BOULDER_CANYON:
        ap_memory.pc.total_balloon_colour_map.red = BALLOON_DF_BC_R;
        ap_memory.pc.total_balloon_colour_map.green = BALLOON_DF_BC_G;
        ap_memory.pc.total_balloon_colour_map.blue = BALLOON_DF_BC_B;
        ap_memory.pc.total_balloon_colour_map.purple = BALLOON_DF_BC_P;
        ap_memory.pc.total_balloon_colour_map.rainbow = BALLOON_DF_BC_W;
        break;
    case MAP_HAUNTED_WOODS:
        ap_memory.pc.total_balloon_colour_map.red = BALLOON_DF_HW_R;
        ap_memory.pc.total_balloon_colour_map.green = BALLOON_DF_HW_G;
        ap_memory.pc.total_balloon_colour_map.blue = BALLOON_DF_HW_B;
        ap_memory.pc.total_balloon_colour_map.purple = BALLOON_DF_HW_P;
        ap_memory.pc.total_balloon_colour_map.rainbow = BALLOON_DF_HW_W;
        break;

    case MAP_SPACEDUST_ALLEY:
        ap_memory.pc.total_balloon_colour_map.red = BALLOON_FL_SA_R;
        ap_memory.pc.total_balloon_colour_map.green = BALLOON_FL_SA_G;
        ap_memory.pc.total_balloon_colour_map.blue = BALLOON_FL_SA_B;
        ap_memory.pc.total_balloon_colour_map.purple = BALLOON_FL_SA_P;
        ap_memory.pc.total_balloon_colour_map.rainbow = BALLOON_FL_SA_W;
        break;
    case MAP_DARKMOON_CAVERNS:
        ap_memory.pc.total_balloon_colour_map.red = BALLOON_FL_DC_R;
        ap_memory.pc.total_balloon_colour_map.green = BALLOON_FL_DC_G;
        ap_memory.pc.total_balloon_colour_map.blue = BALLOON_FL_DC_B;
        ap_memory.pc.total_balloon_colour_map.purple = BALLOON_FL_DC_P;
        ap_memory.pc.total_balloon_colour_map.rainbow = BALLOON_FL_DC_W;
        break;
    case MAP_SPACEPORT_ALPHA:
        ap_memory.pc.total_balloon_colour_map.red = BALLOON_FL_SAA_R;
        ap_memory.pc.total_balloon_colour_map.green = BALLOON_FL_SAA_G;
        ap_memory.pc.total_balloon_colour_map.blue = BALLOON_FL_SAA_B;
        ap_memory.pc.total_balloon_colour_map.purple = BALLOON_FL_SAA_P;
        ap_memory.pc.total_balloon_colour_map.rainbow = BALLOON_FL_SAA_W;
        break;
    case MAP_STAR_CITY:
        ap_memory.pc.total_balloon_colour_map.red = BALLOON_FL_SC_R;
        ap_memory.pc.total_balloon_colour_map.green = BALLOON_FL_SC_G;
        ap_memory.pc.total_balloon_colour_map.blue = BALLOON_FL_SC_B;
        ap_memory.pc.total_balloon_colour_map.purple = BALLOON_FL_SC_P;
        ap_memory.pc.total_balloon_colour_map.rainbow = BALLOON_FL_SC_W;
        break;

    default:
        break;
    }
}

void setCBalloonCounter()
{
    u8 total_balloons = ap_memory.pc.balloon_colour_map.blue + ap_memory.pc.balloon_colour_map.green + ap_memory.pc.balloon_colour_map.purple +
        ap_memory.pc.balloon_colour_map.rainbow + ap_memory.pc.balloon_colour_map.red;
    if(total_balloons == 0)
    {
        ap_memory.pc.balloon_colour_map.red = ap_memory.pc.total_balloon_colour_map.red;
        ap_memory.pc.balloon_colour_map.green = ap_memory.pc.total_balloon_colour_map.green;
        ap_memory.pc.balloon_colour_map.blue = ap_memory.pc.total_balloon_colour_map.blue;
        ap_memory.pc.balloon_colour_map.purple = ap_memory.pc.total_balloon_colour_map.purple;
        ap_memory.pc.balloon_colour_map.rainbow = ap_memory.pc.total_balloon_colour_map.rainbow;
    }
}

void inLevelBalloonShuffle(balloon_t *obj_pointer)
{
    bool shuffled = false;
    while (!shuffled)
    {
        int  colour = crand() %(4+1);
        switch (colour)
        {
            case BALLOON_SPEED:
                if(ap_memory.pc.balloon_colour_map.blue > 0)
                {
                    ap_memory.pc.balloon_colour_map.blue--;
                    obj_pointer->balloon_property = BALLOON_SPEED;
                    obj_pointer->graphic = BALLOON_SPEED;
                    shuffled = true;
                }
                break;
            case BALLOON_MISSLE:
                if(ap_memory.pc.balloon_colour_map.red > 0)
                {
                    ap_memory.pc.balloon_colour_map.red--;
                    obj_pointer->balloon_property = BALLOON_MISSLE;
                    obj_pointer->graphic = BALLOON_MISSLE;
                    shuffled = true;
                }
                break;
            case BALLOON_SLIP:
                if(ap_memory.pc.balloon_colour_map.green > 0)
                {
                    ap_memory.pc.balloon_colour_map.green--;
                    obj_pointer->balloon_property = BALLOON_SLIP;
                    obj_pointer->graphic = BALLOON_SLIP;
                    shuffled = true;
                }
                break;
            case BALLOON_SHIELD:
                if(ap_memory.pc.balloon_colour_map.purple > 0)
                {
                    ap_memory.pc.balloon_colour_map.purple--;
                    obj_pointer->balloon_property = BALLOON_SHIELD;
                    obj_pointer->graphic = BALLOON_SHIELD;
                    shuffled = true;
                }
                break;
            case BALLOON_MAGNET:
                if(ap_memory.pc.balloon_colour_map.rainbow > 0)
                {
                    ap_memory.pc.balloon_colour_map.rainbow--;
                    obj_pointer->balloon_property = BALLOON_MAGNET;
                    obj_pointer->graphic = BALLOON_MAGNET;
                    shuffled = true;
                }
                break;
            default:
                break;
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

u8 transformationMap(u8 track_map_id)
{
    switch(track_map_id)
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
        case MAP_CRESCENT_ISLAND:
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
        case MAP_OVERWORLD:
            return overworld_saved_transformation;
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
    ap_memory.pc.overworld_cart = vehicle;
}

void overworldTranformFix()
{
    if(overworld_saved_transformation != ap_memory.pc.overworld_cart)
    {
        overworld_saved_transformation = ap_memory.pc.overworld_cart;
    }
}

u8 shuffleTrack(u8 race_id)
{
    switch (race_id)
    {
    case MAP_ANCIENT_LAKE:
        ap_memory.pc.mirror_current_race = ap_memory.pc.tracks[TRACK_ANCIENT_LAKE].mirror;
        return trackMapConvert(ap_memory.pc.tracks[TRACK_ANCIENT_LAKE].actual_track);
    case MAP_FOSSIL_CANYON:
        ap_memory.pc.mirror_current_race = ap_memory.pc.tracks[TRACK_FOSSIL_CANYON].mirror;
        return trackMapConvert(ap_memory.pc.tracks[TRACK_FOSSIL_CANYON].actual_track);
    case MAP_JUNGLE_FALLS:
        ap_memory.pc.mirror_current_race = ap_memory.pc.tracks[TRACK_JUNGLE_FALLS].mirror;
        return trackMapConvert(ap_memory.pc.tracks[TRACK_JUNGLE_FALLS].actual_track);
    case MAP_HOT_TOP_VOLC:
        ap_memory.pc.mirror_current_race = ap_memory.pc.tracks[TRACK_HOT_TOP_VOLCANO].mirror;
        return trackMapConvert(ap_memory.pc.tracks[TRACK_HOT_TOP_VOLCANO].actual_track);

    case MAP_EVERFROST_PEAK:
        ap_memory.pc.mirror_current_race = ap_memory.pc.tracks[TRACK_EVERFROST_PEAK].mirror;
        return trackMapConvert(ap_memory.pc.tracks[TRACK_EVERFROST_PEAK].actual_track);
    case MAP_WALRUS_COVE:
        ap_memory.pc.mirror_current_race = ap_memory.pc.tracks[TRACK_WALRUS_COVE].mirror;
        return trackMapConvert(ap_memory.pc.tracks[TRACK_WALRUS_COVE].actual_track);
    case MAP_SNOWBALL_VALLEY:
        ap_memory.pc.mirror_current_race = ap_memory.pc.tracks[TRACK_SNOWBALL_VALLEY].mirror;
        return trackMapConvert(ap_memory.pc.tracks[TRACK_SNOWBALL_VALLEY].actual_track);
    case MAP_FROSTY_VILLAGE:
        ap_memory.pc.mirror_current_race = ap_memory.pc.tracks[TRACK_FROSTY_VILLAGE].mirror;
        return trackMapConvert(ap_memory.pc.tracks[TRACK_FROSTY_VILLAGE].actual_track);  

    case MAP_WHALE_BAY:
        ap_memory.pc.mirror_current_race = ap_memory.pc.tracks[TRACK_WHALE_BAY].mirror;
        return trackMapConvert(ap_memory.pc.tracks[TRACK_WHALE_BAY].actual_track);
    case MAP_CRESCENT_ISLAND:
        ap_memory.pc.mirror_current_race = ap_memory.pc.tracks[TRACK_CRESCENT_ISLAND].mirror;
        return trackMapConvert(ap_memory.pc.tracks[TRACK_CRESCENT_ISLAND].actual_track);
    case MAP_PIRATE_LAGOON:
        ap_memory.pc.mirror_current_race = ap_memory.pc.tracks[TRACK_PIRATE_LAGOON].mirror;
        return trackMapConvert(ap_memory.pc.tracks[TRACK_PIRATE_LAGOON].actual_track);
    case MAP_TREASURE_CAVES:
        ap_memory.pc.mirror_current_race = ap_memory.pc.tracks[TRACK_TREASURE_CAVES].mirror;
        return trackMapConvert(ap_memory.pc.tracks[TRACK_TREASURE_CAVES].actual_track);   

    case MAP_WINDMILL_PLAINS:
        ap_memory.pc.mirror_current_race = ap_memory.pc.tracks[TRACK_WINDMILL_PLAINS].mirror;
        return trackMapConvert(ap_memory.pc.tracks[TRACK_WINDMILL_PLAINS].actual_track);
    case MAP_GREENWOOD_VILLAGE:
        ap_memory.pc.mirror_current_race = ap_memory.pc.tracks[TRACK_GREENWOOD_VILLAGE].mirror;
        return trackMapConvert(ap_memory.pc.tracks[TRACK_GREENWOOD_VILLAGE].actual_track);
    case MAP_BOULDER_CANYON:
        ap_memory.pc.mirror_current_race = ap_memory.pc.tracks[TRACK_BOULDER_CANYON].mirror;
        return trackMapConvert(ap_memory.pc.tracks[TRACK_BOULDER_CANYON].actual_track);
    case MAP_HAUNTED_WOODS:
        ap_memory.pc.mirror_current_race = ap_memory.pc.tracks[TRACK_HAUNTED_WOODS].mirror;
        return trackMapConvert(ap_memory.pc.tracks[TRACK_HAUNTED_WOODS].actual_track);   

    case MAP_SPACEDUST_ALLEY:
        ap_memory.pc.mirror_current_race = ap_memory.pc.tracks[TRACK_SPACEDUST_VALLEY].mirror;
        return trackMapConvert(ap_memory.pc.tracks[TRACK_SPACEDUST_VALLEY].actual_track);
    case MAP_DARKMOON_CAVERNS:
        ap_memory.pc.mirror_current_race = ap_memory.pc.tracks[TRACK_DARKMOON_CAVERNS].mirror;
        return trackMapConvert(ap_memory.pc.tracks[TRACK_DARKMOON_CAVERNS].actual_track);
    case MAP_SPACEPORT_ALPHA:
        ap_memory.pc.mirror_current_race = ap_memory.pc.tracks[TRACK_SPACEPORT_ALPHA].mirror;
        return trackMapConvert(ap_memory.pc.tracks[TRACK_SPACEPORT_ALPHA].actual_track);
    case MAP_STAR_CITY:
        ap_memory.pc.mirror_current_race = ap_memory.pc.tracks[TRACK_STAR_CITY].mirror;
        return trackMapConvert(ap_memory.pc.tracks[TRACK_STAR_CITY].actual_track);  
    default:
        ap_memory.pc.mirror_current_race = 0;
        return 0;
    }
    ap_memory.pc.mirror_current_race = 0;
    return 0;
}

u8 checkShuffleTrack(u8 race_id)
{
    switch (race_id)
    {
    case MAP_ANCIENT_LAKE:
        return trackMapConvert(ap_memory.pc.tracks[TRACK_ANCIENT_LAKE].actual_track);
    case MAP_FOSSIL_CANYON:
        return trackMapConvert(ap_memory.pc.tracks[TRACK_FOSSIL_CANYON].actual_track);
    case MAP_JUNGLE_FALLS:
        return trackMapConvert(ap_memory.pc.tracks[TRACK_JUNGLE_FALLS].actual_track);
    case MAP_HOT_TOP_VOLC:
        return trackMapConvert(ap_memory.pc.tracks[TRACK_HOT_TOP_VOLCANO].actual_track);

    case MAP_EVERFROST_PEAK:
        return trackMapConvert(ap_memory.pc.tracks[TRACK_EVERFROST_PEAK].actual_track);
    case MAP_WALRUS_COVE:
        return trackMapConvert(ap_memory.pc.tracks[TRACK_WALRUS_COVE].actual_track);
    case MAP_SNOWBALL_VALLEY:
        return trackMapConvert(ap_memory.pc.tracks[TRACK_SNOWBALL_VALLEY].actual_track);
    case MAP_FROSTY_VILLAGE:
        return trackMapConvert(ap_memory.pc.tracks[TRACK_FROSTY_VILLAGE].actual_track);  

    case MAP_WHALE_BAY:
        return trackMapConvert(ap_memory.pc.tracks[TRACK_WHALE_BAY].actual_track);
    case MAP_CRESCENT_ISLAND:
        return trackMapConvert(ap_memory.pc.tracks[TRACK_CRESCENT_ISLAND].actual_track);
    case MAP_PIRATE_LAGOON:
        return trackMapConvert(ap_memory.pc.tracks[TRACK_PIRATE_LAGOON].actual_track);
    case MAP_TREASURE_CAVES:
        return trackMapConvert(ap_memory.pc.tracks[TRACK_TREASURE_CAVES].actual_track);   

    case MAP_WINDMILL_PLAINS:
        return trackMapConvert(ap_memory.pc.tracks[TRACK_WINDMILL_PLAINS].actual_track);
    case MAP_GREENWOOD_VILLAGE:
        return trackMapConvert(ap_memory.pc.tracks[TRACK_GREENWOOD_VILLAGE].actual_track);
    case MAP_BOULDER_CANYON:
        return trackMapConvert(ap_memory.pc.tracks[TRACK_BOULDER_CANYON].actual_track);
    case MAP_HAUNTED_WOODS:
        return trackMapConvert(ap_memory.pc.tracks[TRACK_HAUNTED_WOODS].actual_track);   

    case MAP_SPACEDUST_ALLEY:
        return trackMapConvert(ap_memory.pc.tracks[TRACK_SPACEDUST_VALLEY].actual_track);
    case MAP_DARKMOON_CAVERNS:
        return trackMapConvert(ap_memory.pc.tracks[TRACK_DARKMOON_CAVERNS].actual_track);
    case MAP_SPACEPORT_ALPHA:
        return trackMapConvert(ap_memory.pc.tracks[TRACK_SPACEPORT_ALPHA].actual_track);
    case MAP_STAR_CITY:
        return trackMapConvert(ap_memory.pc.tracks[TRACK_STAR_CITY].actual_track);  
    default:
        return 0;
    }
    return 0;
}

u8 shuffleMusic()
{
    switch (dkr_current_map)
    {
    case MAP_ANCIENT_LAKE:
        return trackMusicConvert(ap_memory.pc.tracks[TRACK_ANCIENT_LAKE].music);
    case MAP_FOSSIL_CANYON:
        return trackMusicConvert(ap_memory.pc.tracks[TRACK_FOSSIL_CANYON].music);
    case MAP_JUNGLE_FALLS:
        return trackMusicConvert(ap_memory.pc.tracks[TRACK_JUNGLE_FALLS].music);
    case MAP_HOT_TOP_VOLC:
        return trackMusicConvert(ap_memory.pc.tracks[TRACK_HOT_TOP_VOLCANO].music);

    case MAP_EVERFROST_PEAK:
        return trackMusicConvert(ap_memory.pc.tracks[TRACK_EVERFROST_PEAK].music);
    case MAP_WALRUS_COVE:
        return trackMusicConvert(ap_memory.pc.tracks[TRACK_WALRUS_COVE].music);
    case MAP_SNOWBALL_VALLEY:
        return trackMusicConvert(ap_memory.pc.tracks[TRACK_SNOWBALL_VALLEY].music);
    case MAP_FROSTY_VILLAGE:
        return trackMusicConvert(ap_memory.pc.tracks[TRACK_FROSTY_VILLAGE].music);  

    case MAP_WHALE_BAY:
        return trackMusicConvert(ap_memory.pc.tracks[TRACK_WHALE_BAY].music);
    case MAP_CRESCENT_ISLAND:
        return trackMusicConvert(ap_memory.pc.tracks[TRACK_CRESCENT_ISLAND].music);
    case MAP_PIRATE_LAGOON:
        return trackMusicConvert(ap_memory.pc.tracks[TRACK_PIRATE_LAGOON].music);
    case MAP_TREASURE_CAVES:
        return trackMusicConvert(ap_memory.pc.tracks[TRACK_TREASURE_CAVES].music);   

    case MAP_WINDMILL_PLAINS:
        return trackMusicConvert(ap_memory.pc.tracks[TRACK_WINDMILL_PLAINS].music);
    case MAP_GREENWOOD_VILLAGE:
        return trackMusicConvert(ap_memory.pc.tracks[TRACK_GREENWOOD_VILLAGE].music);
    case MAP_BOULDER_CANYON:
        return trackMusicConvert(ap_memory.pc.tracks[TRACK_BOULDER_CANYON].music);
    case MAP_HAUNTED_WOODS:
        return trackMusicConvert(ap_memory.pc.tracks[TRACK_HAUNTED_WOODS].music);   

    case MAP_SPACEDUST_ALLEY:
        return trackMusicConvert(ap_memory.pc.tracks[TRACK_SPACEDUST_VALLEY].music);
    case MAP_DARKMOON_CAVERNS:
        return trackMusicConvert(ap_memory.pc.tracks[TRACK_DARKMOON_CAVERNS].music);
    case MAP_SPACEPORT_ALPHA:
        return trackMusicConvert(ap_memory.pc.tracks[TRACK_SPACEPORT_ALPHA].music);
    case MAP_STAR_CITY:
        return trackMusicConvert(ap_memory.pc.tracks[TRACK_STAR_CITY].music);  
    default:
        return 0;
    }
    return 0;
}

u8 trackMapConvert(u8 track_map_id)
{
    switch (track_map_id)
    {
    case TRACK_ANCIENT_LAKE:
        return MAP_ANCIENT_LAKE;
    case TRACK_FOSSIL_CANYON:
        return MAP_FOSSIL_CANYON;
    case TRACK_JUNGLE_FALLS:
        return MAP_JUNGLE_FALLS;
    case TRACK_HOT_TOP_VOLCANO:
        return MAP_HOT_TOP_VOLC;

    case TRACK_EVERFROST_PEAK:
        return MAP_EVERFROST_PEAK;
    case TRACK_WALRUS_COVE:
        return MAP_WALRUS_COVE;
    case TRACK_SNOWBALL_VALLEY:
        return MAP_SNOWBALL_VALLEY;
    case TRACK_FROSTY_VILLAGE:
        return MAP_FROSTY_VILLAGE;

    case TRACK_WHALE_BAY:
        return MAP_WHALE_BAY;
    case TRACK_CRESCENT_ISLAND:
        return MAP_CRESCENT_ISLAND;
    case TRACK_PIRATE_LAGOON:
        return MAP_PIRATE_LAGOON;
    case TRACK_TREASURE_CAVES:
        return MAP_TREASURE_CAVES;

    case TRACK_WINDMILL_PLAINS:
        return MAP_WINDMILL_PLAINS;
    case TRACK_GREENWOOD_VILLAGE:
        return MAP_GREENWOOD_VILLAGE;
    case TRACK_BOULDER_CANYON:
        return MAP_BOULDER_CANYON;
    case TRACK_HAUNTED_WOODS:
        return MAP_HAUNTED_WOODS;

    case TRACK_SPACEDUST_VALLEY:
        return MAP_SPACEDUST_ALLEY;
    case TRACK_DARKMOON_CAVERNS:
        return MAP_DARKMOON_CAVERNS;
    case TRACK_SPACEPORT_ALPHA:
        return MAP_SPACEPORT_ALPHA;
    case TRACK_STAR_CITY:
        return MAP_STAR_CITY;
    default:
        return 0;
    }
    return 0;
}

u8 trackMusicConvert(u8 track_map_id)
{
    switch (track_map_id)
    {
    case TRACK_ANCIENT_LAKE:
        return MUSIC_ANCIENT_LAKE;
    case TRACK_FOSSIL_CANYON:
        return MUSIC_FOSSIL_CANYON;
    case TRACK_JUNGLE_FALLS:
        return MUSIC_JUNGLE_FALLS;
    case TRACK_HOT_TOP_VOLCANO:
        return MUSIC_HOT_TOP_VOLC;

    case TRACK_EVERFROST_PEAK:
        return MUSIC_EVERFROST_PEAK;
    case TRACK_WALRUS_COVE:
        return MUSIC_WALRUS_COVE;
    case TRACK_SNOWBALL_VALLEY:
        return MUSIC_SNOWBALL_VALLEY;
    case TRACK_FROSTY_VILLAGE:
        return MUSIC_FROSTY_VILLAGE;

    case TRACK_WHALE_BAY:
        return MUSIC_WHALE_BAY;
    case TRACK_CRESCENT_ISLAND:
        return MUSIC_CRESCENT_ISLAND;
    case TRACK_PIRATE_LAGOON:
        return MUSIC_PIRATE_LAGOON;
    case TRACK_TREASURE_CAVES:
        return MUSIC_TREASURE_CAVES;

    case TRACK_WINDMILL_PLAINS:
        return MUSIC_WINDMILL_PLAINS;
    case TRACK_GREENWOOD_VILLAGE:
        return MUSIC_GREENWOOD_VILLAGE;
    case TRACK_BOULDER_CANYON:
        return MUSIC_BOULDER_CANYON;
    case TRACK_HAUNTED_WOODS:
        return MUSIC_HAUNTED_WOODS;

    case TRACK_SPACEDUST_VALLEY:
        return MUSIC_SPACEDUST_ALLEY;
    case TRACK_DARKMOON_CAVERNS:
        return MUSIC_DARKMOON_CAVERNS;
    case TRACK_SPACEPORT_ALPHA:
        return MUSIC_SPACEPORT_ALPHA;
    case TRACK_STAR_CITY:
        return MUSIC_STAR_CITY;
    default:
        return 0;
    }
    return 0;
}

void shuffleEnemies(u8 race_id)
{
    switch (race_id)
    {
    case MAP_ANCIENT_LAKE:
        if(ap_memory.pc.settings.setting_shuffle_opponent_karts)
        {
            racer_karts = racer_karts + 1;
            if(racer_karts >= 0x03)
            {
                racer_karts = 0;
            }
            return;
        }
        racer_karts = 0;
        break;
    case MAP_FOSSIL_CANYON:
        if(ap_memory.pc.settings.setting_shuffle_opponent_karts)
        {
            racer_karts = racer_karts + 1;
            if(racer_karts >= 0x03)
            {
                racer_karts = 0;
            }
            return;
        }
        racer_karts = 0;
        break;
    case MAP_JUNGLE_FALLS:
        if(ap_memory.pc.settings.setting_shuffle_opponent_karts)
        {
            racer_karts = racer_karts + 1;
            if(racer_karts >= 0x03)
            {
                racer_karts = 0;
            }
            return;
        }
        racer_karts = 0;
        break;
    case MAP_HOT_TOP_VOLC:
        if(ap_memory.pc.settings.setting_shuffle_opponent_karts)
        {
            racer_karts = racer_karts + 1;
            if(racer_karts >= 0x03)
            {
                racer_karts = 0x01;
            }
            return;
        }
        racer_karts = 0x02;
        break;

    case MAP_EVERFROST_PEAK:
        if(ap_memory.pc.settings.setting_shuffle_opponent_karts)
        {
            racer_karts = racer_karts + 1;
            if(racer_karts >= 0x03)
            {
                racer_karts = 0x00;
            }
            return;
        }
        racer_karts = 0x02;
        break;
    case MAP_WALRUS_COVE:
        if(ap_memory.pc.settings.setting_shuffle_opponent_karts)
        {
            racer_karts = racer_karts + 1;
            if(racer_karts >= 0x02)
            {
                racer_karts = 0x00;
            }
            return;
        }
        racer_karts = 0x00;
        break;
    case MAP_SNOWBALL_VALLEY:
        if(ap_memory.pc.settings.setting_shuffle_opponent_karts)
        {
            racer_karts = racer_karts + 1;
            if(racer_karts >= 0x02)
            {
                racer_karts = 0x00;
            }
            return;
        }
        racer_karts = 0x00;
        break;
    case MAP_FROSTY_VILLAGE:
        if(ap_memory.pc.settings.setting_shuffle_opponent_karts)
        {
            racer_karts = racer_karts + 1;
            if(racer_karts >= 0x03)
            {
                racer_karts = 0x00;
            }
            return;
        }
        racer_karts = 0x00;
        break;

    case MAP_WHALE_BAY:
        racer_karts = 0x01;
        break;
    case MAP_CRESCENT_ISLAND:
        if(ap_memory.pc.settings.setting_shuffle_opponent_karts)
        {
            racer_karts = racer_karts + 1;
            if(racer_karts >= 0x02)
            {
                racer_karts = 0x00;
            }
            return;
        }
        racer_karts = 0x00;
        break;
    case MAP_PIRATE_LAGOON:
        racer_karts = 0x01;
        break;
    case MAP_TREASURE_CAVES:
        if(ap_memory.pc.settings.setting_shuffle_opponent_karts)
        {
            racer_karts = racer_karts + 1;
            if(racer_karts >= 0x03)
            {
                racer_karts = 0x00;
            }
            return;
        }
        racer_karts = 0x00;
        break;  

    case MAP_WINDMILL_PLAINS:
        if(ap_memory.pc.settings.setting_shuffle_opponent_karts)
        {
            racer_karts = racer_karts + 1;
            if(racer_karts >= 0x03)
            {
                racer_karts = 0x00;
            }
            return;
        }
        racer_karts = 0x02;
        break;  
    case MAP_GREENWOOD_VILLAGE:
        if(ap_memory.pc.settings.setting_shuffle_opponent_karts)
        {
            racer_karts = racer_karts + 1;
            if(racer_karts >= 0x02)
            {
                racer_karts = 0x00;
            }
            return;
        }
        racer_karts = 0x00;
        break; 
    case MAP_BOULDER_CANYON:
        racer_karts = 0x01;
        break; 
    case MAP_HAUNTED_WOODS:
        if(ap_memory.pc.settings.setting_shuffle_opponent_karts)
        {
            racer_karts = racer_karts + 1;
            if(racer_karts >= 0x02)
            {
                racer_karts = 0x00;
            }
            return;
        }
        racer_karts = 0x00;
        break; 

    case MAP_SPACEDUST_ALLEY:
        if(ap_memory.pc.settings.setting_shuffle_opponent_karts)
        {
            racer_karts = racer_karts + 1;
            if(racer_karts >= 0x03)
            {
                racer_karts = 0x00;
            }
            return;
        }
        racer_karts = 0x02;
        break; 
    case MAP_DARKMOON_CAVERNS:
        if(ap_memory.pc.settings.setting_shuffle_opponent_karts)
        {
            racer_karts = racer_karts + 1;
            if(racer_karts >= 0x02)
            {
                racer_karts = 0x00;
            }
            return;
        }
        racer_karts = 0x00;
        break;
    case MAP_SPACEPORT_ALPHA:
        if(ap_memory.pc.settings.setting_shuffle_opponent_karts)
        {
            racer_karts = racer_karts + 1;
            if(racer_karts >= 0x03)
            {
                racer_karts = 0x00;
            }
            return;
        }
        racer_karts = 0x02;
        break;
    case MAP_STAR_CITY:
        if(ap_memory.pc.settings.setting_shuffle_opponent_karts)
        {
            racer_karts = racer_karts + 1;
            if(racer_karts >= 0x03)
            {
                racer_karts = 0x00;
            }
            return;
        }
        racer_karts = 0x00;
        break;  
    default:
        return;
    }
}

void CoinFix(u8 track_map_id)
{
    switch(track_map_id)
    {
        case MAP_HOT_TOP_VOLC:
        case MAP_ANCIENT_LAKE:
        case MAP_JUNGLE_FALLS:
        case MAP_FOSSIL_CANYON:
           dkr_coin_requirements = 0x01;
           break;
        case MAP_FROSTY_VILLAGE:
        case MAP_SNOWBALL_VALLEY:
        case MAP_WALRUS_COVE:
        case MAP_EVERFROST_PEAK:
           dkr_coin_requirements = 0x03;
           break;
        case MAP_CRESCENT_ISLAND:
        case MAP_TREASURE_CAVES:
        case MAP_WHALE_BAY:
        case MAP_PIRATE_LAGOON:
           dkr_coin_requirements = 0x02;
           break;
        case MAP_HAUNTED_WOODS:
        case MAP_WINDMILL_PLAINS:
        case MAP_GREENWOOD_VILLAGE:
        case MAP_BOULDER_CANYON:
           dkr_coin_requirements = 0x04;
           break;
        case MAP_DARKMOON_CAVERNS:
        case MAP_STAR_CITY:
        case MAP_SPACEDUST_ALLEY:
        case MAP_SPACEPORT_ALPHA:
           dkr_coin_requirements = 0x05;
           break;
        default:
            return;
    }
}
