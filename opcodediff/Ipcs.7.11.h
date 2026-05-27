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
        ActorCast = 0x2d4,                              // updated 7.11
        ActorControl = 0x70,                           // updated 7.11
        ActorControlSelf = 0x115,                       // updated 7.11
        ActorControlTarget = 0x149,                     // updated 7.11
        ActorFreeSpawn = 0x76,                          // updated 7.11
        ActorGauge = 0x14c,                             // updated 7.11
        ActorMove = 0x279,                              // updated 7.11
        ActorSetPos = 0x122,                             // updated 7.11
        AoeEffect16 = 0x385,                            // updated 7.11
        AoeEffect24 = 0x35b,                             // updated 7.11
        AoeEffect32 = 0x94,                            // updated 7.11
        AoeEffect8 = 0x2cd,                             // updated 7.11
        BossStatusEffectList = 0x222,                    // updated 7.11
        CFPreferredRole = 0x100,                        // updated 7.11
        CompanyAirshipStatus = 0x22a,                   // updated 7.11
        CompanySubmersibleStatus = 0xb9,                // updated 7.11
        ContentFinderNotifyPop = 0x1e6,                 // updated 7.11
        Effect = 0x1d4,                                 // updated 7.11
        EffectResult = 0x116,                            // updated 7.11
        EffectResultBasic = 0x160,                      // updated 7.11
        EventFinish = 0x128,                            // updated 7.11
        EventStart = 0x195,                             // updated 7.11
        Examine = 0x325,                                // updated 7.11
        ExamineSearchInfo = 0x175,                      // updated 7.11
        InitZone = 0x1ba,                               // updated 7.11
        InventoryActionAck = 0xb0,                     // updated 7.11
        InventoryTransaction = 0x2b7,                   // updated 7.11
        InventoryTransactionFinish = 0x3a5,             // updated 7.11
        MarketBoardItemListing = 0x135,                  // updated 7.11
        MarketBoardItemListingCount = 0x208,            // updated 7.11
        MarketBoardItemListingHistory = 0x337,          // updated 7.11
        MarketBoardSearchResult = 0x32a,                // updated 7.11
        NpcSpawn = 0x397,                                // updated 7.11
        NpcSpawn2 = 0x23c,                              // updated 7.11
        ObjectSpawn = 0xb7,                            // updated 7.11
        PlaceFieldMarker = 0x2cc,                       // updated 7.11
        PlaceFieldMarkerPreset = 0x1cd,                 // updated 7.11
        PlayerSetup = 0x3ad,                             // updated 7.11
        PlayerSpawn = 0x2f7,                            // updated 7.11
        PlayerStats = 0xde,                            // updated 7.11
        Playtime = 0xea,                               // updated 7.11
        PrepareZoning = 0x235,                          // updated 7.11
        RetainerInformation = 0x2ef,                    // updated 7.11
        SystemLogMessage = 0x15f,                       // updated 7.11
        StatusEffectList = 0xa7,                       // updated 7.11
        StatusEffectList2 = 0x2a8,                       // updated 7.11
        StatusEffectList3 = 0xbc,                      // updated 7.11
        StatusEffectList4 = 0xd9,                      // updated 7.11
        UpdateHpMpTp = 0x334,                            // updated 7.11
        UpdateInventorySlot = 0x6c,                     // updated 7.11
        UpdateSearchInfo = 0x2ed,                       // updated 7.11
        WardLandInfo = 0x1ab,                           // updated 7.11
        CEDirector = 0x243,                             // updated 7.11
        Logout = 0x31b,                                  // updated 7.11
        MarketBoardPurchase = 0x21a,                     // updated 7.11
        AirshipStatusList = 0x3d2,                      // updated 7.11
        AirshipStatus = 0x286,                          // updated 7.11
        SubmarineProgressionStatus = 0x348,             // updated 7.11
        SubmarineStatusList = 0x27f,                     // updated 7.11
        FreeCompanyInfo = 0xfa,                        // updated 7.11
        AirshipExplorationResult = 0x19a,               // updated 7.11
        SubmarineExplorationResult = 0x38e,             // updated 7.11
        FreeCompanyDialog = 0x1d5,                      // updated 7.11
        ItemMarketBoardInfo = 0x1ed,                    // updated 7.11
        FateInfo = 0x1c7,                               // updated 7.11
        EnvironmentControl = 0x32c,                      // updated 7.11
        IslandWorkshopSupplyDemand = 0x313,             // updated 7.11
        RSV = 0x13f,                                    // updated 7.11
        SystemLogMessage32 = 0x37a,                     // updated 7.11
        SystemLogMessage48 = 0x65,                     // updated 7.11
        SystemLogMessage80 = 0x73,                     // updated 7.11
        SystemLogMessage144 = 0x20d,                     // updated 7.11
        NpcYell = 0x3a2,                                 // updated 7.11
        UpdateParty = 0x12b,                            // updated 7.11
        EurekaStatusEffectList = 0x33e,                 // updated 7.11
        EffectResult4 = 0x317,                          // updated 7.11
        EffectResult8 = 0x1a6,                          // updated 7.11
        EffectResult16 = 0x25d,                          // updated 7.11
        PlayMotionSync = 0x242,                         // updated 7.11
        CountdownInitiate = 0xdc,                      // updated 7.11
        CountdownCancel = 0x1f4,                         // updated 7.11
        RSF = 0x21b,                                     // updated 7.11
        ChatHandler = 0x192,                            // updated 7.11
        ClientTrigger = 0x130,                          // updated 7.11
        InventoryModifyHandler = 0x346,                 // updated 7.11
        UpdatePositionHandler = 0x336,                  // updated 7.11
        UpdatePositionInstance = 0x20f,                 // updated 7.11
        MarketBoardPurchaseHandler = 0x304,             // updated 7.11
        InventoryHandlerOffset = 0x346,                 // updated 7.11
        ActionRequest = 0x2ad,                          // updated 7.11
        ActionRequestGroundTargeted = 0xf4,             // updated 7.11
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
