#ifndef AP_H
#define AP_H
    #include "dkr.h"
    #include "dialog.h"

    void changeLevelDoorCost(level_doors_t *obj_pointer);
    void changeWorldDoorCost(world_doors_t *obj_pointer);
    void changeBossDoorCost(boss_doors_t *obj_pointer);
    void setTTDoor();
    void setCutscenes();
    void checkAmuletCost(pighead_header_object_t *header_ptr);
    void apItemCheck();
    void apDialogCheck();

    //Balloon Random Weapons
    void changeWeaponBalloons(balloon_t *obj_pointer, u16 balloon_id);
    void balloon_rando();
    void changeWeaponBalloonsDynamic();
    bool checkBalloonPtr(balloon_t *obj_pointer);

    //Balloon Locations
    void initializeAPBalloons(balloon_t *obj_pointer, u16 balloon_id);
    void deInitializeAPBalloons();
    void watchCollectedBalloons();

    //Silver Coin Locations
    void initializeAPSilverCoins(silvercoin_t *obj_pointer, u16 scoin_id);
    bool checkSilverCoinPtr(silvercoin_t *obj_pointer);
    void deInitializeAPSilverCoins();
    void watchCollectedSilverCoins();

    //Vehicle Shuffle
    void overworldTransformAllowed();
    u8 transformationMap();
    u8 shuffleOrderPHC();
    u8 shuffleOrderHPC();
    u8 shuffleOrderCPH();
    u8 shuffleOrderCHP();
    u8 shuffleOrderPCH();
    void storeVehicle(u8 vehicle);
    void overworldTranformFix();

    //randomize tracks
    u8 shuffleTrack(u8 race_id);
    u8 shuffleMusic();
    u8 trackMapConvert(u8 track_map_id);
    u8 trackMusicConvert(u8 track_map_id);

#endif
