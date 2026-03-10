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
        ActorCast = 0x34f,                              // updated 7.05
        ActorControl = 0x273,                           // updated 7.05
        ActorControlSelf = 0x82,                       // updated 7.05
        ActorControlTarget = 0x2b9,                     // updated 7.05
        ActorFreeSpawn = 0x20a,                          // updated 7.05
        ActorGauge = 0x195,                             // updated 7.05
        ActorMove = 0x1ca,                              // updated 7.05
        ActorSetPos = 0x13d,                             // updated 7.05
        AoeEffect16 = 0x156,                            // updated 7.05
        AoeEffect24 = 0x9a,                             // updated 7.05
        AoeEffect32 = 0x363,                            // updated 7.05
        AoeEffect8 = 0x36e,                             // updated 7.05
        BossStatusEffectList = 0x286,                    // updated 7.05
        CFPreferredRole = 0x31b,                        // updated 7.05
        CompanyAirshipStatus = 0x39e,                   // updated 7.05
        CompanySubmersibleStatus = 0x17f,                // updated 7.05
        ContentFinderNotifyPop = 0xaf,                 // updated 7.05
        Effect = 0x301,                                 // updated 7.05
        EffectResult = 0x2d7,                            // updated 7.05
        EffectResultBasic = 0x2df,                      // updated 7.05
        EventFinish = 0x235,                            // updated 7.05
        EventStart = 0x342,                             // updated 7.05
        Examine = 0x1c6,                                // updated 7.05
        ExamineSearchInfo = 0x3cb,                      // updated 7.05
        InitZone = 0x3e0,                               // updated 7.05
        InventoryActionAck = 0x32a,                     // updated 7.05
        InventoryTransaction = 0x67,                   // updated 7.05
        InventoryTransactionFinish = 0x310,             // updated 7.05
        MarketBoardItemListing = 0xd0,                  // updated 7.05
        MarketBoardItemListingCount = 0x10b,            // updated 7.05
        MarketBoardItemListingHistory = 0x3bb,          // updated 7.05
        MarketBoardSearchResult = 0x289,                // updated 7.05
        NpcSpawn = 0x29f,                                // updated 7.05
        NpcSpawn2 = 0x263,                              // updated 7.05
        ObjectSpawn = 0x29d,                            // updated 7.05
        PlaceFieldMarker = 0x139,                       // updated 7.05
        PlaceFieldMarkerPreset = 0x257,                 // updated 7.05
        PlayerSetup = 0x2ac,                             // updated 7.05
        PlayerSpawn = 0x275,                            // updated 7.05
        PlayerStats = 0x38f,                            // updated 7.05
        Playtime = 0x108,                               // updated 7.05
        PrepareZoning = 0x3a6,                          // updated 7.05
        RetainerInformation = 0xe0,                    // updated 7.05
        SystemLogMessage = 0x1d6,                       // updated 7.05
        StatusEffectList = 0xa8,                       // updated 7.05
        StatusEffectList2 = 0x1be,                       // updated 7.05
        StatusEffectList3 = 0x2fb,                      // updated 7.05
        StatusEffectList4 = 0x10c,                      // updated 7.05
        UpdateHpMpTp = 0x89,                            // updated 7.05
        UpdateInventorySlot = 0x1cc,                     // updated 7.05
        UpdateSearchInfo = 0x3d7,                       // updated 7.05
        WardLandInfo = 0x8a,                           // updated 7.05
        CEDirector = 0x2ce,                             // updated 7.05
        Logout = 0x243,                                  // updated 7.05
        MarketBoardPurchase = 0x31a,                     // updated 7.05
        AirshipStatusList = 0x368,                      // updated 7.05
        AirshipStatus = 0xb0,                          // updated 7.05
        SubmarineProgressionStatus = 0x218,             // updated 7.05
        SubmarineStatusList = 0x1da,                     // updated 7.05
        FreeCompanyInfo = 0xc1,                        // updated 7.05
        AirshipExplorationResult = 0x103,               // updated 7.05
        SubmarineExplorationResult = 0x106,             // updated 7.05
        FreeCompanyDialog = 0x225,                      // updated 7.05
        ItemMarketBoardInfo = 0x75,                    // updated 7.05
        FateInfo = 0x280,                               // updated 7.05
        EnvironmentControl = 0x144,                      // updated 7.05
        IslandWorkshopSupplyDemand = 0xf5,             // updated 7.05
        RSV = 0x2ee,                                    // updated 7.05
        SystemLogMessage32 = 0x13f,                     // updated 7.05
        SystemLogMessage48 = 0x20e,                     // updated 7.05
        SystemLogMessage80 = 0x216,                     // updated 7.05
        SystemLogMessage144 = 0xb6,                     // updated 7.05
        NpcYell = 0x201,                                 // updated 7.05
        UpdateParty = 0x394,                            // updated 7.05
        EurekaStatusEffectList = 0x200,                 // updated 7.05
        EffectResult4 = 0x138,                          // updated 7.05
        EffectResult8 = 0x122,                          // updated 7.05
        EffectResult16 = 0x1ad,                          // updated 7.05
        PlayMotionSync = 0x3d1,                         // updated 7.05
        CountdownInitiate = 0x34d,                      // updated 7.05
        CountdownCancel = 0x1ef,                         // updated 7.05
        RSF = 0xfb,                                     // updated 7.05
        ChatHandler = 0x111,                            // updated 7.05
        ClientTrigger = 0x277,                          // updated 7.05
        InventoryModifyHandler = 0x13a,                 // updated 7.05
        UpdatePositionHandler = 0x3b3,                  // updated 7.05
        UpdatePositionInstance = 0x315,                 // updated 7.05
        MarketBoardPurchaseHandler = 0x205,             // updated 7.05
        InventoryHandlerOffset = 0x13a,                 // updated 7.05
        ActionRequest = 0x378,                          // updated 7.05
        ActionRequestGroundTargeted = 0x65,             // updated 7.05
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
