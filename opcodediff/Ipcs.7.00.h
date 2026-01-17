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
        ActorCast = 0x18c,                              // updated 7.00
        ActorControl = 0x39d,                           // updated 7.00
        ActorControlSelf = 0x1f2,                       // updated 7.00
        ActorControlTarget = 0x7a,                     // updated 7.00
        ActorFreeSpawn = 0xd3,                          // updated 7.00
        ActorGauge = 0x1a4,                             // updated 7.00
        ActorMove = 0x36f,                              // updated 7.00
        ActorSetPos = 0x2f7,                             // updated 7.00
        AoeEffect16 = 0x2f2,                            // updated 7.00
        AoeEffect24 = 0x2c1,                             // updated 7.00
        AoeEffect32 = 0x16c,                            // updated 7.00
        AoeEffect8 = 0x124,                             // updated 7.00
        BossStatusEffectList = 0xa2,                    // updated 7.00
        CFPreferredRole = 0x2af,                        // updated 7.00
        CompanyAirshipStatus = 0x17f,                   // updated 7.00
        CompanySubmersibleStatus = 0x33e,                // updated 7.00
        ContentFinderNotifyPop = 0x190,                 // updated 7.00
        Effect = 0x240,                                 // updated 7.00
        EffectResult = 0x6b,                            // updated 7.00
        EffectResultBasic = 0x155,                      // updated 7.00
        EventFinish = 0x285,                            // updated 7.00
        EventStart = 0x2ed,                             // updated 7.00
        Examine = 0x295,                                // updated 7.00
        ExamineSearchInfo = 0x11a,                      // updated 7.00
        InitZone = 0x116,                               // updated 7.00
        InventoryActionAck = 0x1ca,                     // updated 7.00
        InventoryTransaction = 0x3a1,                   // updated 7.00
        InventoryTransactionFinish = 0x35e,             // updated 7.00
        MarketBoardItemListing = 0x1b6,                  // updated 7.00
        MarketBoardItemListingCount = 0x1e5,            // updated 7.00
        MarketBoardItemListingHistory = 0x340,          // updated 7.00
        MarketBoardSearchResult = 0xc8,                // updated 7.00
        NpcSpawn = 0x3d4,                                // updated 7.00
        NpcSpawn2 = 0x311,                              // updated 7.00
        ObjectSpawn = 0xf4,                            // updated 7.00
        PlaceFieldMarker = 0x35f,                       // updated 7.00
        PlaceFieldMarkerPreset = 0x263,                 // updated 7.00
        PlayerSetup = 0x3b0,                             // updated 7.00
        PlayerSpawn = 0x2d3,                            // updated 7.00
        PlayerStats = 0x1ba,                            // updated 7.00
        Playtime = 0x341,                               // updated 7.00
        PrepareZoning = 0x3bf,                          // updated 7.00
        RetainerInformation = 0x264,                    // updated 7.00
        SystemLogMessage = 0x23c,                       // updated 7.00
        StatusEffectList = 0x2dc,                       // updated 7.00
        StatusEffectList2 = 0x20d,                       // updated 7.00
        StatusEffectList3 = 0x2be,                      // updated 7.00
        StatusEffectList4 = 0x275,                      // updated 7.00
        UpdateHpMpTp = 0x13e,                            // updated 7.00
        UpdateInventorySlot = 0x1fd,                     // updated 7.00
        UpdateSearchInfo = 0x15f,                       // updated 7.00
        WardLandInfo = 0x39f,                           // updated 7.00
        CEDirector = 0x24b,                             // updated 7.00
        Logout = 0x36d,                                  // updated 7.00
        MarketBoardPurchase = 0x34d,                     // updated 7.00
        AirshipStatusList = 0x34b,                      // updated 7.00
        AirshipStatus = 0x324,                          // updated 7.00
        SubmarineProgressionStatus = 0x2e4,             // updated 7.00
        SubmarineStatusList = 0x90,                     // updated 7.00
        FreeCompanyInfo = 0x139,                        // updated 7.00
        AirshipExplorationResult = 0x3a8,               // updated 7.00
        SubmarineExplorationResult = 0x3c0,             // updated 7.00
        FreeCompanyDialog = 0xef,                      // updated 7.00
        ItemMarketBoardInfo = 0x1ec,                    // updated 7.00
        FateInfo = 0x2e5,                               // updated 7.00
        EnvironmentControl = 0x306,                      // updated 7.00
        IslandWorkshopSupplyDemand = 0x1f7,             // updated 7.00
        RSV = 0x22e,                                    // updated 7.00
        SystemLogMessage32 = 0x320,                     // updated 7.00
        SystemLogMessage48 = 0xc6,                     // updated 7.00
        SystemLogMessage80 = 0x323,                     // updated 7.00
        SystemLogMessage144 = 0x1aa,                     // updated 7.00
        NpcYell = 0x19a,                                 // updated 7.00
        UpdateParty = 0x31c,                            // updated 7.00
        EurekaStatusEffectList = 0x159,                 // updated 7.00
        EffectResult4 = 0x37e,                          // updated 7.00
        EffectResult8 = 0x192,                          // updated 7.00
        EffectResult16 = 0x140,                          // updated 7.00
        PlayMotionSync = 0x2c2,                         // updated 7.00
        CountdownInitiate = 0x2f5,                      // updated 7.00
        CountdownCancel = 0x1b0,                         // updated 7.00
        RSF = 0x1ac,                                     // updated 7.00
        ChatHandler = 0x3ad,                            // updated 7.00
        ClientTrigger = 0x229,                          // updated 7.00
        InventoryModifyHandler = 0x357,                 // updated 7.00
        UpdatePositionHandler = 0xd2,                  // updated 7.00
        UpdatePositionInstance = 0x1dc,                 // updated 7.00
        MarketBoardPurchaseHandler = 0x77,             // updated 7.00
        InventoryHandlerOffset = 0x357,                 // updated 7.00
        ActionRequest = 0x39e,                          // updated 7.00
        ActionRequestGroundTargeted = 0x1bc,             // updated 7.00
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
