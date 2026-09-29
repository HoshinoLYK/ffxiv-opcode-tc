namespace FFXIVOpcodes.TC
{
    ////////////////////////////////////////////////////////////////////////////////
    /// Lobby Connection IPC Codes
    /**
    * Server IPC Lobby Type Codes.
    */
    enum ServerLobbyIpcType : ushort
    {

    };

    /**
    * Client IPC Lobby Type Codes.
    */
    enum ClientLobbyIpcType : ushort
    {

    };

    ////////////////////////////////////////////////////////////////////////////////
    /// Zone Connection IPC Codes
    /**
    * Server IPC Zone Type Codes.
    */
    enum ServerZoneIpcType : ushort
    {
        // Server Zone
        ActorCast = 0x35c,                              // updated 7.20
        ActorControl = 0x15a,                           // updated 7.20
        ActorControlSelf = 0x1f6,                       // updated 7.20
        ActorControlTarget = 0x33a,                     // updated 7.20
        ActorFreeSpawn = 0x311,                          // updated 7.20
        ActorGauge = 0x3c5,                             // updated 7.20
        ActorMove = 0xaf,                              // updated 7.20
        ActorSetPos = 0x266,                             // updated 7.20
        AoeEffect16 = 0x1ca,                            // updated 7.20
        AoeEffect24 = 0x258,                             // updated 7.20
        AoeEffect32 = 0x3a8,                            // updated 7.20
        AoeEffect8 = 0x26d,                             // updated 7.20
        BossStatusEffectList = 0x37c,                    // updated 7.20
        CFPreferredRole = 0x14c,                        // updated 7.20
        CompanyAirshipStatus = 0x140,                   // updated 7.20
        CompanySubmersibleStatus = 0x3df,                // updated 7.20
        ContentFinderNotifyPop = 0xb8,                 // updated 7.20
        Effect = 0x25e,                                 // updated 7.20
        EffectResult = 0x365,                            // updated 7.20
        EffectResultBasic = 0x6a,                      // updated 7.20
        EventFinish = 0x78,                            // updated 7.20
        EventStart = 0x3dc,                             // updated 7.20
        Examine = 0xd2,                                // updated 7.20
        ExamineSearchInfo = 0x65,                      // updated 7.20
        InitZone = 0x369,                               // updated 7.20
        InventoryActionAck = 0x296,                     // updated 7.20
        InventoryTransaction = 0x24d,                   // updated 7.20
        InventoryTransactionFinish = 0xd7,             // updated 7.20
        MarketBoardItemListing = 0x1e0,                  // updated 7.20
        MarketBoardItemListingCount = 0x270,            // updated 7.20
        MarketBoardItemListingHistory = 0x261,          // updated 7.20
        MarketBoardSearchResult = 0x2a3,                // updated 7.20
        NpcSpawn = 0x2d2,                                // updated 7.20
        NpcSpawn2 = 0x22c,                              // updated 7.20
        ObjectSpawn = 0x306,                            // updated 7.20
        PlaceFieldMarker = 0xd8,                       // updated 7.20
        PlaceFieldMarkerPreset = 0x2c3,                 // updated 7.20
        PlayerSetup = 0x30a,                             // updated 7.20
        PlayerSpawn = 0x1e7,                            // updated 7.20
        PlayerStats = 0x1ee,                            // updated 7.20
        Playtime = 0x13f,                               // updated 7.20
        PrepareZoning = 0x38c,                          // updated 7.20
        RetainerInformation = 0x9e,                    // updated 7.20
        SystemLogMessage = 0x125,                       // updated 7.20
        StatusEffectList = 0x26f,                       // updated 7.20
        StatusEffectList2 = 0x30c,                       // updated 7.20
        StatusEffectList3 = 0x123,                      // updated 7.20
        StatusEffectList4 = 0x3bf,                      // updated 7.20
        UpdateHpMpTp = 0xd4,                            // updated 7.20
        UpdateInventorySlot = 0x1bb,                     // updated 7.20
        UpdateSearchInfo = 0x169,                       // updated 7.20
        WardLandInfo = 0x6d,                           // updated 7.20
        CEDirector = 0x1b7,                             // updated 7.20
        Logout = 0x183,                                  // updated 7.20
        MarketBoardPurchase = 0x239,                     // updated 7.20
        AirshipStatusList = 0xbb,                      // updated 7.20
        AirshipStatus = 0x3c0,                          // updated 7.20
        SubmarineProgressionStatus = 0xc0,             // updated 7.20
        SubmarineStatusList = 0xfc,                     // updated 7.20
        FreeCompanyInfo = 0x3db,                        // updated 7.20
        AirshipExplorationResult = 0x119,               // updated 7.20
        SubmarineExplorationResult = 0x1af,             // updated 7.20
        FreeCompanyDialog = 0x25d,                      // updated 7.20
        ItemMarketBoardInfo = 0x3e2,                    // updated 7.20
        FateInfo = 0x337,                               // updated 7.20
        EnvironmentControl = 0x3c1,                      // updated 7.20
        IslandWorkshopSupplyDemand = 0x100,             // updated 7.20
        RSV = 0x2b2,                                    // updated 7.20
        SystemLogMessage32 = 0x1e4,                     // updated 7.20
        SystemLogMessage48 = 0x2e7,                     // updated 7.20
        SystemLogMessage80 = 0x385,                     // updated 7.20
        SystemLogMessage144 = 0x360,                     // updated 7.20
        NpcYell = 0x150,                                 // updated 7.20
        UpdateParty = 0x397,                            // updated 7.20
        EurekaStatusEffectList = 0x327,                 // updated 7.20
        EffectResult4 = 0x3aa,                          // updated 7.20
        EffectResult8 = 0x1dc,                          // updated 7.20
        EffectResult16 = 0x11e,                          // updated 7.20
        PlayMotionSync = 0x364,                         // updated 7.20
        CountdownInitiate = 0x18d,                      // updated 7.20
        CountdownCancel = 0x2b3,                         // updated 7.20
        RSF = 0x309,                                     // updated 7.20
        ChatHandler = 0x315,                            // updated 7.20
        ClientTrigger = 0x268,                          // updated 7.20
        InventoryModifyHandler = 0xb1,                 // updated 7.20
        UpdatePositionHandler = 0x29e,                  // updated 7.20
        UpdatePositionInstance = 0x3ba,                 // updated 7.20
        MarketBoardPurchaseHandler = 0x10b,             // updated 7.20
        InventoryHandlerOffset = 0xb1,                 // updated 7.20
        ActionRequest = 0x226,                          // updated 7.20
        ActionRequestGroundTargeted = 0x215,             // updated 7.20
    };

    /**
    * Client IPC Zone Type Codes.
    */
    enum ClientZoneIpcType : ushort
    {

    };

    ////////////////////////////////////////////////////////////////////////////////
    /// Chat Connection IPC Codes
    /**
    * Server IPC Chat Type Codes.
    */
    enum ServerChatIpcType : ushort
    {

    };

    /**
    * Client IPC Chat Type Codes.
    */
    enum ClientChatIpcType : ushort
    {

    };
}
