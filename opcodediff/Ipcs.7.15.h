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
        ActorCast = 0x186,                              // updated 7.15
        ActorControl = 0x2a8,                           // updated 7.15
        ActorControlSelf = 0x297,                       // updated 7.15
        ActorControlTarget = 0x15c,                     // updated 7.15
        ActorFreeSpawn = 0x199,                          // updated 7.15
        ActorGauge = 0x239,                             // updated 7.15
        ActorMove = 0x36e,                              // updated 7.15
        ActorSetPos = 0x9c,                             // updated 7.15
        AoeEffect16 = 0x254,                            // updated 7.15
        AoeEffect24 = 0x3a1,                             // updated 7.15
        AoeEffect32 = 0x2ae,                            // updated 7.15
        AoeEffect8 = 0x3bf,                             // updated 7.15
        BossStatusEffectList = 0x3ad,                    // updated 7.15
        CFPreferredRole = 0xf9,                        // updated 7.15
        CompanyAirshipStatus = 0x2f4,                   // updated 7.15
        CompanySubmersibleStatus = 0x1cd,                // updated 7.15
        ContentFinderNotifyPop = 0x1b0,                 // updated 7.15
        Effect = 0x233,                                 // updated 7.15
        EffectResult = 0x252,                            // updated 7.15
        EffectResultBasic = 0x21d,                      // updated 7.15
        EventFinish = 0x3e6,                            // updated 7.15
        EventStart = 0x2a3,                             // updated 7.15
        Examine = 0x114,                                // updated 7.15
        ExamineSearchInfo = 0x350,                      // updated 7.15
        InitZone = 0x131,                               // updated 7.15
        InventoryActionAck = 0x396,                     // updated 7.15
        InventoryTransaction = 0x2f2,                   // updated 7.15
        InventoryTransactionFinish = 0x6f,             // updated 7.15
        MarketBoardItemListing = 0x293,                  // updated 7.15
        MarketBoardItemListingCount = 0x183,            // updated 7.15
        MarketBoardItemListingHistory = 0xb4,          // updated 7.15
        MarketBoardSearchResult = 0x11c,                // updated 7.15
        NpcSpawn = 0x102,                                // updated 7.15
        NpcSpawn2 = 0x331,                              // updated 7.15
        ObjectSpawn = 0xfc,                            // updated 7.15
        PlaceFieldMarker = 0x2af,                       // updated 7.15
        PlaceFieldMarkerPreset = 0x154,                 // updated 7.15
        PlayerSetup = 0x94,                             // updated 7.15
        PlayerSpawn = 0x7b,                            // updated 7.15
        PlayerStats = 0x391,                            // updated 7.15
        Playtime = 0x309,                               // updated 7.15
        PrepareZoning = 0x2ba,                          // updated 7.15
        RetainerInformation = 0x3a7,                    // updated 7.15
        SystemLogMessage = 0x3ab,                       // updated 7.15
        StatusEffectList = 0xa3,                       // updated 7.15
        StatusEffectList2 = 0x39c,                       // updated 7.15
        StatusEffectList3 = 0xa8,                      // updated 7.15
        StatusEffectList4 = 0xac,                      // updated 7.15
        UpdateHpMpTp = 0x3b5,                            // updated 7.15
        UpdateInventorySlot = 0xaa,                     // updated 7.15
        UpdateSearchInfo = 0x383,                       // updated 7.15
        WardLandInfo = 0xd2,                           // updated 7.15
        CEDirector = 0x3c7,                             // updated 7.15
        Logout = 0x10c,                                  // updated 7.15
        MarketBoardPurchase = 0x274,                     // updated 7.15
        AirshipStatusList = 0x338,                      // updated 7.15
        AirshipStatus = 0xe8,                          // updated 7.15
        SubmarineProgressionStatus = 0x20e,             // updated 7.15
        SubmarineStatusList = 0x2ec,                     // updated 7.15
        FreeCompanyInfo = 0x35a,                        // updated 7.15
        AirshipExplorationResult = 0x1f1,               // updated 7.15
        SubmarineExplorationResult = 0x20c,             // updated 7.15
        FreeCompanyDialog = 0x17d,                      // updated 7.15
        ItemMarketBoardInfo = 0x83,                    // updated 7.15
        FateInfo = 0xc9,                               // updated 7.15
        EnvironmentControl = 0x1bd,                      // updated 7.15
        IslandWorkshopSupplyDemand = 0x3e1,             // updated 7.15
        RSV = 0x2e6,                                    // updated 7.15
        SystemLogMessage32 = 0xc6,                     // updated 7.15
        SystemLogMessage48 = 0x200,                     // updated 7.15
        SystemLogMessage80 = 0xba,                     // updated 7.15
        SystemLogMessage144 = 0x13e,                     // updated 7.15
        NpcYell = 0xe1,                                 // updated 7.15
        UpdateParty = 0x21b,                            // updated 7.15
        EurekaStatusEffectList = 0x169,                 // updated 7.15
        EffectResult4 = 0x120,                          // updated 7.15
        EffectResult8 = 0x208,                          // updated 7.15
        EffectResult16 = 0x324,                          // updated 7.15
        PlayMotionSync = 0xcb,                         // updated 7.15
        CountdownInitiate = 0xfd,                      // updated 7.15
        CountdownCancel = 0x2d6,                         // updated 7.15
        RSF = 0x28e,                                     // updated 7.15
        ChatHandler = 0x221,                            // updated 7.15
        ClientTrigger = 0x377,                          // updated 7.15
        InventoryModifyHandler = 0x354,                 // updated 7.15
        UpdatePositionHandler = 0x33e,                  // updated 7.15
        UpdatePositionInstance = 0x207,                 // updated 7.15
        MarketBoardPurchaseHandler = 0x2b9,             // updated 7.15
        InventoryHandlerOffset = 0x354,                 // updated 7.15
        ActionRequest = 0x151,                          // updated 7.15
        ActionRequestGroundTargeted = 0x347,             // updated 7.15
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
