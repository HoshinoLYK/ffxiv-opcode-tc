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
        ActorCast = 0x23b,                              // updated 7.10
        ActorControl = 0x191,                           // updated 7.10
        ActorControlSelf = 0x3c3,                       // updated 7.10
        ActorControlTarget = 0xa7,                     // updated 7.10
        ActorFreeSpawn = 0x181,                          // updated 7.10
        ActorGauge = 0x2d5,                             // updated 7.10
        ActorMove = 0x263,                              // updated 7.10
        ActorSetPos = 0x2f0,                             // updated 7.10
        AoeEffect16 = 0xac,                            // updated 7.10
        AoeEffect24 = 0x33a,                             // updated 7.10
        AoeEffect32 = 0x9c,                            // updated 7.10
        AoeEffect8 = 0x239,                             // updated 7.10
        BossStatusEffectList = 0x2eb,                    // updated 7.10
        CFPreferredRole = 0x241,                        // updated 7.10
        CompanyAirshipStatus = 0x81,                   // updated 7.10
        CompanySubmersibleStatus = 0x1bf,                // updated 7.10
        ContentFinderNotifyPop = 0x1c9,                 // updated 7.10
        Effect = 0x1f9,                                 // updated 7.10
        EffectResult = 0x3c8,                            // updated 7.10
        EffectResultBasic = 0x2d4,                      // updated 7.10
        EventFinish = 0x291,                            // updated 7.10
        EventStart = 0x26e,                             // updated 7.10
        Examine = 0x2a5,                                // updated 7.10
        ExamineSearchInfo = 0x72,                      // updated 7.10
        InitZone = 0x227,                               // updated 7.10
        InventoryActionAck = 0x21b,                     // updated 7.10
        InventoryTransaction = 0x1cd,                   // updated 7.10
        InventoryTransactionFinish = 0x1dd,             // updated 7.10
        MarketBoardItemListing = 0x1b2,                  // updated 7.10
        MarketBoardItemListingCount = 0x2f9,            // updated 7.10
        MarketBoardItemListingHistory = 0x157,          // updated 7.10
        MarketBoardSearchResult = 0x26c,                // updated 7.10
        NpcSpawn = 0x27d,                                // updated 7.10
        NpcSpawn2 = 0x1e2,                              // updated 7.10
        ObjectSpawn = 0x252,                            // updated 7.10
        PlaceFieldMarker = 0xbd,                       // updated 7.10
        PlaceFieldMarkerPreset = 0x276,                 // updated 7.10
        PlayerSetup = 0x158,                             // updated 7.10
        PlayerSpawn = 0x1c5,                            // updated 7.10
        PlayerStats = 0x7c,                            // updated 7.10
        Playtime = 0x71,                               // updated 7.10
        PrepareZoning = 0x192,                          // updated 7.10
        RetainerInformation = 0x39b,                    // updated 7.10
        SystemLogMessage = 0x1f0,                       // updated 7.10
        StatusEffectList = 0x317,                       // updated 7.10
        StatusEffectList2 = 0x15e,                       // updated 7.10
        StatusEffectList3 = 0x1cc,                      // updated 7.10
        StatusEffectList4 = 0x104,                      // updated 7.10
        UpdateHpMpTp = 0x382,                            // updated 7.10
        UpdateInventorySlot = 0x3c0,                     // updated 7.10
        UpdateSearchInfo = 0x34c,                       // updated 7.10
        WardLandInfo = 0x303,                           // updated 7.10
        CEDirector = 0x352,                             // updated 7.10
        Logout = 0x224,                                  // updated 7.10
        MarketBoardPurchase = 0x2ee,                     // updated 7.10
        AirshipStatusList = 0x159,                      // updated 7.10
        AirshipStatus = 0x286,                          // updated 7.10
        SubmarineProgressionStatus = 0x196,             // updated 7.10
        SubmarineStatusList = 0x2c8,                     // updated 7.10
        FreeCompanyInfo = 0x1d9,                        // updated 7.10
        AirshipExplorationResult = 0x323,               // updated 7.10
        SubmarineExplorationResult = 0x3b1,             // updated 7.10
        FreeCompanyDialog = 0x1b9,                      // updated 7.10
        ItemMarketBoardInfo = 0x19a,                    // updated 7.10
        FateInfo = 0x35b,                               // updated 7.10
        EnvironmentControl = 0x38c,                      // updated 7.10
        IslandWorkshopSupplyDemand = 0x69,             // updated 7.10
        RSV = 0x2da,                                    // updated 7.10
        SystemLogMessage32 = 0x1d6,                     // updated 7.10
        SystemLogMessage48 = 0x7e,                     // updated 7.10
        SystemLogMessage80 = 0x1f3,                     // updated 7.10
        SystemLogMessage144 = 0x19b,                     // updated 7.10
        NpcYell = 0xbf,                                 // updated 7.10
        UpdateParty = 0xf5,                            // updated 7.10
        EurekaStatusEffectList = 0x10e,                 // updated 7.10
        EffectResult4 = 0x2b6,                          // updated 7.10
        EffectResult8 = 0x2df,                          // updated 7.10
        EffectResult16 = 0x3a5,                          // updated 7.10
        PlayMotionSync = 0x387,                         // updated 7.10
        CountdownInitiate = 0x32d,                      // updated 7.10
        CountdownCancel = 0x299,                         // updated 7.10
        RSF = 0x31a,                                     // updated 7.10
        ChatHandler = 0x2f4,                            // updated 7.10
        ClientTrigger = 0x348,                          // updated 7.10
        InventoryModifyHandler = 0x2f7,                 // updated 7.10
        UpdatePositionHandler = 0x397,                  // updated 7.10
        UpdatePositionInstance = 0x3dd,                 // updated 7.10
        MarketBoardPurchaseHandler = 0x14f,             // updated 7.10
        InventoryHandlerOffset = 0x2f7,                 // updated 7.10
        ActionRequest = 0x216,                          // updated 7.10
        ActionRequestGroundTargeted = 0x295,             // updated 7.10
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
