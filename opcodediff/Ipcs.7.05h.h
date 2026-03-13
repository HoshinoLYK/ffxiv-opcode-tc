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
        ActorCast = 0x333,                              // updated 7.05h
        ActorControl = 0x23d,                           // updated 7.05h
        ActorControlSelf = 0x117,                       // updated 7.05h
        ActorControlTarget = 0x198,                     // updated 7.05h
        ActorFreeSpawn = 0x21b,                          // updated 7.05h
        ActorGauge = 0x2fe,                             // updated 7.05h
        ActorMove = 0x163,                              // updated 7.05h
        ActorSetPos = 0x355,                             // updated 7.05h
        AoeEffect16 = 0x219,                            // updated 7.05h
        AoeEffect24 = 0x2c7,                             // updated 7.05h
        AoeEffect32 = 0x34d,                            // updated 7.05h
        AoeEffect8 = 0x2db,                             // updated 7.05h
        BossStatusEffectList = 0x379,                    // updated 7.05h
        CFPreferredRole = 0x2c1,                        // updated 7.05h
        CompanyAirshipStatus = 0x26d,                   // updated 7.05h
        CompanySubmersibleStatus = 0x20c,                // updated 7.05h
        ContentFinderNotifyPop = 0xd8,                 // updated 7.05h
        Effect = 0xc8,                                 // updated 7.05h
        EffectResult = 0x33f,                            // updated 7.05h
        EffectResultBasic = 0xaf,                      // updated 7.05h
        EventFinish = 0x1db,                            // updated 7.05h
        EventStart = 0x3d1,                             // updated 7.05h
        Examine = 0x26b,                                // updated 7.05h
        ExamineSearchInfo = 0x33d,                      // updated 7.05h
        InitZone = 0x36f,                               // updated 7.05h
        InventoryActionAck = 0x3a5,                     // updated 7.05h
        InventoryTransaction = 0x245,                   // updated 7.05h
        InventoryTransactionFinish = 0x14d,             // updated 7.05h
        MarketBoardItemListing = 0xe9,                  // updated 7.05h
        MarketBoardItemListingCount = 0x16c,            // updated 7.05h
        MarketBoardItemListingHistory = 0x22d,          // updated 7.05h
        MarketBoardSearchResult = 0x213,                // updated 7.05h
        NpcSpawn = 0x1d8,                                // updated 7.05h
        NpcSpawn2 = 0x2c2,                              // updated 7.05h
        ObjectSpawn = 0x1b1,                            // updated 7.05h
        PlaceFieldMarker = 0x39c,                       // updated 7.05h
        PlaceFieldMarkerPreset = 0x2ee,                 // updated 7.05h
        PlayerSetup = 0x208,                             // updated 7.05h
        PlayerSpawn = 0x3b2,                            // updated 7.05h
        PlayerStats = 0x3a3,                            // updated 7.05h
        Playtime = 0xfd,                               // updated 7.05h
        PrepareZoning = 0x3b4,                          // updated 7.05h
        RetainerInformation = 0x1cc,                    // updated 7.05h
        SystemLogMessage = 0x24e,                       // updated 7.05h
        StatusEffectList = 0x154,                       // updated 7.05h
        StatusEffectList2 = 0xc5,                       // updated 7.05h
        StatusEffectList3 = 0x2e6,                      // updated 7.05h
        StatusEffectList4 = 0x365,                      // updated 7.05h
        UpdateHpMpTp = 0x328,                            // updated 7.05h
        UpdateInventorySlot = 0x1a1,                     // updated 7.05h
        UpdateSearchInfo = 0x14e,                       // updated 7.05h
        WardLandInfo = 0x33b,                           // updated 7.05h
        CEDirector = 0x194,                             // updated 7.05h
        Logout = 0x27c,                                  // updated 7.05h
        MarketBoardPurchase = 0x373,                     // updated 7.05h
        AirshipStatusList = 0x3bd,                      // updated 7.05h
        AirshipStatus = 0x2aa,                          // updated 7.05h
        SubmarineProgressionStatus = 0x1de,             // updated 7.05h
        SubmarineStatusList = 0x16b,                     // updated 7.05h
        FreeCompanyInfo = 0x35c,                        // updated 7.05h
        AirshipExplorationResult = 0x390,               // updated 7.05h
        SubmarineExplorationResult = 0x1e8,             // updated 7.05h
        FreeCompanyDialog = 0xa8,                      // updated 7.05h
        ItemMarketBoardInfo = 0x374,                    // updated 7.05h
        FateInfo = 0xbc,                               // updated 7.05h
        EnvironmentControl = 0x339,                      // updated 7.05h
        IslandWorkshopSupplyDemand = 0x3d3,             // updated 7.05h
        RSV = 0x270,                                    // updated 7.05h
        SystemLogMessage32 = 0x2e4,                     // updated 7.05h
        SystemLogMessage48 = 0x12b,                     // updated 7.05h
        SystemLogMessage80 = 0x30c,                     // updated 7.05h
        SystemLogMessage144 = 0x11a,                     // updated 7.05h
        NpcYell = 0x2b6,                                 // updated 7.05h
        UpdateParty = 0x301,                            // updated 7.05h
        EurekaStatusEffectList = 0x322,                 // updated 7.05h
        EffectResult4 = 0x175,                          // updated 7.05h
        EffectResult8 = 0x39a,                          // updated 7.05h
        EffectResult16 = 0x289,                          // updated 7.05h
        PlayMotionSync = 0x3d9,                         // updated 7.05h
        CountdownInitiate = 0x196,                      // updated 7.05h
        CountdownCancel = 0x167,                         // updated 7.05h
        RSF = 0x129,                                     // updated 7.05h
        ChatHandler = 0x103,                            // updated 7.05h
        ClientTrigger = 0x288,                          // updated 7.05h
        InventoryModifyHandler = 0x13a,                 // updated 7.05h
        UpdatePositionHandler = 0x1f2,                  // updated 7.05h
        UpdatePositionInstance = 0xb5,                 // updated 7.05h
        MarketBoardPurchaseHandler = 0x20e,             // updated 7.05h
        InventoryHandlerOffset = 0x13a,                 // updated 7.05h
        ActionRequest = 0x14b,                          // updated 7.05h
        ActionRequestGroundTargeted = 0x2ab,             // updated 7.05h
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
