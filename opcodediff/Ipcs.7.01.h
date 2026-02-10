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
        ActorCast = 0xf9,                              // updated 7.01
        ActorControl = 0x169,                           // updated 7.01
        ActorControlSelf = 0x3e2,                       // updated 7.01
        ActorControlTarget = 0xb4,                     // updated 7.01
        ActorFreeSpawn = 0xa1,                          // updated 7.01
        ActorGauge = 0x315,                             // updated 7.01
        ActorMove = 0x32c,                              // updated 7.01
        ActorSetPos = 0x2f9,                             // updated 7.01
        AoeEffect16 = 0x22e,                            // updated 7.01
        AoeEffect24 = 0x2a8,                             // updated 7.01
        AoeEffect32 = 0x135,                            // updated 7.01
        AoeEffect8 = 0x1ed,                             // updated 7.01
        BossStatusEffectList = 0x1af,                    // updated 7.01
        CFPreferredRole = 0x6f,                        // updated 7.01
        CompanyAirshipStatus = 0x2e0,                   // updated 7.01
        CompanySubmersibleStatus = 0xf0,                // updated 7.01
        ContentFinderNotifyPop = 0x226,                 // updated 7.01
        Effect = 0x143,                                 // updated 7.01
        EffectResult = 0xf5,                            // updated 7.01
        EffectResultBasic = 0x37a,                      // updated 7.01
        EventFinish = 0x23f,                            // updated 7.01
        EventStart = 0x391,                             // updated 7.01
        Examine = 0x162,                                // updated 7.01
        ExamineSearchInfo = 0x289,                      // updated 7.01
        InitZone = 0x157,                               // updated 7.01
        InventoryActionAck = 0x3a9,                     // updated 7.01
        InventoryTransaction = 0x3b3,                   // updated 7.01
        InventoryTransactionFinish = 0x1f4,             // updated 7.01
        MarketBoardItemListing = 0x33a,                  // updated 7.01
        MarketBoardItemListingCount = 0x2ea,            // updated 7.01
        MarketBoardItemListingHistory = 0x209,          // updated 7.01
        MarketBoardSearchResult = 0xd9,                // updated 7.01
        NpcSpawn = 0x1e4,                                // updated 7.01
        NpcSpawn2 = 0x83,                              // updated 7.01
        ObjectSpawn = 0x2f3,                            // updated 7.01
        PlaceFieldMarker = 0x3a2,                       // updated 7.01
        PlaceFieldMarkerPreset = 0x3c1,                 // updated 7.01
        PlayerSetup = 0x370,                             // updated 7.01
        PlayerSpawn = 0x159,                            // updated 7.01
        PlayerStats = 0x29f,                            // updated 7.01
        Playtime = 0x278,                               // updated 7.01
        PrepareZoning = 0x95,                          // updated 7.01
        RetainerInformation = 0x2b9,                    // updated 7.01
        SystemLogMessage = 0xab,                       // updated 7.01
        StatusEffectList = 0x17c,                       // updated 7.01
        StatusEffectList2 = 0x36b,                       // updated 7.01
        StatusEffectList3 = 0x3d6,                      // updated 7.01
        StatusEffectList4 = 0x181,                      // updated 7.01
        UpdateHpMpTp = 0x142,                            // updated 7.01
        UpdateInventorySlot = 0x18c,                     // updated 7.01
        UpdateSearchInfo = 0x3d2,                       // updated 7.01
        WardLandInfo = 0xe2,                           // updated 7.01
        CEDirector = 0x259,                             // updated 7.01
        Logout = 0x2f2,                                  // updated 7.01
        MarketBoardPurchase = 0x2e8,                     // updated 7.01
        AirshipStatusList = 0x2bf,                      // updated 7.01
        AirshipStatus = 0x173,                          // updated 7.01
        SubmarineProgressionStatus = 0x168,             // updated 7.01
        SubmarineStatusList = 0x12e,                     // updated 7.01
        FreeCompanyInfo = 0x3bb,                        // updated 7.01
        AirshipExplorationResult = 0x3c6,               // updated 7.01
        SubmarineExplorationResult = 0x27d,             // updated 7.01
        FreeCompanyDialog = 0x274,                      // updated 7.01
        ItemMarketBoardInfo = 0xdc,                    // updated 7.01
        FateInfo = 0x18d,                               // updated 7.01
        EnvironmentControl = 0x276,                      // updated 7.01
        IslandWorkshopSupplyDemand = 0x3ac,             // updated 7.01
        RSV = 0xcb,                                    // updated 7.01
        SystemLogMessage32 = 0x27f,                     // updated 7.01
        SystemLogMessage48 = 0x1e2,                     // updated 7.01
        SystemLogMessage80 = 0x8b,                     // updated 7.01
        SystemLogMessage144 = 0x25c,                     // updated 7.01
        NpcYell = 0x7f,                                 // updated 7.01
        UpdateParty = 0x382,                            // updated 7.01
        EurekaStatusEffectList = 0x37f,                 // updated 7.01
        EffectResult4 = 0x1cf,                          // updated 7.01
        EffectResult8 = 0x284,                          // updated 7.01
        EffectResult16 = 0x13f,                          // updated 7.01
        PlayMotionSync = 0x3bd,                         // updated 7.01
        CountdownInitiate = 0x74,                      // updated 7.01
        CountdownCancel = 0x2bc,                         // updated 7.01
        RSF = 0xed,                                     // updated 7.01
        ChatHandler = 0x234,                            // updated 7.01
        ClientTrigger = 0x386,                          // updated 7.01
        InventoryModifyHandler = 0x1ec,                 // updated 7.01
        UpdatePositionHandler = 0x90,                  // updated 7.01
        UpdatePositionInstance = 0xf7,                 // updated 7.01
        MarketBoardPurchaseHandler = 0x1ba,             // updated 7.01
        InventoryHandlerOffset = 0x1ec,                 // updated 7.01
        ActionRequest = 0x34a,                          // updated 7.01
        ActionRequestGroundTargeted = 0x1ab,             // updated 7.01
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
