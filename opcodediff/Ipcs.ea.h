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
        ActorCast = 0x1A2,                              // updated 7.00ea
        ActorControl = 0x20B,                           // updated 7.00ea
        ActorControlSelf = 0x37B,                       // updated 7.00ea
        ActorControlTarget = 0x2DF,                     // updated 7.00ea
        ActorFreeSpawn = 0xE5,                          // updated 7.00ea
        ActorGauge = 0x1B9,                             // updated 7.00ea
        ActorMove = 0x36F,                              // updated 7.00ea
        ActorSetPos = 0xE3,                             // updated 7.00ea
        AoeEffect16 = 0x233,                            // updated 7.00ea
        AoeEffect24 = 0x96,                             // updated 7.00ea
        AoeEffect32 = 0x122,                            // updated 7.00ea
        AoeEffect8 = 0x32E,                             // updated 7.00ea
        BossStatusEffectList = 0xA5,                    // updated 7.00ea
        CFPreferredRole = 0x301,                        // updated 7.00ea
        CompanyAirshipStatus = 0x310,                   // updated 7.00ea
        CompanySubmersibleStatus = 0x8E,                // updated 7.00ea
        ContentFinderNotifyPop = 0x313,                 // updated 7.00ea
        Effect = 0x220,                                 // updated 7.00ea
        EffectResult = 0x66,                            // updated 7.00ea
        EffectResultBasic = 0x1c1,                      // updated 7.00ea
        EventFinish = 0x3DA,                            // updated 7.00ea
        EventStart = 0x281,                             // updated 7.00ea
        Examine = 0x1A9,                                // updated 7.00ea
        ExamineSearchInfo = 0x21E,                      // updated 7.00ea
        InitZone = 0x19D,                               // updated 7.00ea
        InventoryActionAck = 0x165,                     // updated 7.00ea
        InventoryTransaction = 0x129,                   // updated 7.00ea
        InventoryTransactionFinish = 0x2C6,             // updated 7.00ea
        MarketBoardItemListing = 0xB2,                  // updated 7.00ea
        MarketBoardItemListingCount = 0x287,            // updated 7.00ea
        MarketBoardItemListingHistory = 0x2A0,          // updated 7.00ea
        MarketBoardSearchResult = 0x16C,                // updated 7.00ea
        NpcSpawn = 0xF7,                                // updated 7.00ea
        NpcSpawn2 = 0x3D1,                              // updated 7.00ea
        ObjectSpawn = 0x3D7,                            // updated 7.00ea
        PlaceFieldMarker = 0x2E7,                       // updated 7.00ea
        PlaceFieldMarkerPreset = 0x253,                 // updated 7.00ea
        PlayerSetup = 0xA1,                             // updated 7.00ea
        PlayerSpawn = 0x2DD,                            // updated 7.00ea
        PlayerStats = 0x391,                            // updated 7.00ea
        Playtime = 0x2B0,                               // updated 7.00ea
        PrepareZoning = 0x1FD,                          // updated 7.00ea
        RetainerInformation = 0x346,                    // updated 7.00ea
        SystemLogMessage = 0x177,                       // updated 7.00ea
        StatusEffectList = 0x29F,                       // updated 7.00ea
        StatusEffectList2 = 0x7A,                       // updated 7.00ea
        StatusEffectList3 = 0x2B5,                      // updated 7.00ea
        StatusEffectList4 = 0x24f,                      // updated 7.00ea
        UpdateHpMpTp = 0xB4,                            // updated 7.00ea
        UpdateInventorySlot = 0x8C,                     // updated 7.00ea
        UpdateSearchInfo = 0x150,                       // updated 7.00ea
        WardLandInfo = 0x1AA,                           // updated 7.00ea
        CEDirector = 0x37A,                             // updated 7.00ea
        Logout = 0x8F,                                  // updated 7.00ea
        MarketBoardPurchase = 0xAD,                     // updated 7.00ea
        AirshipStatusList = 0x337,                      // updated 7.00ea
        AirshipStatus = 0x306,                          // updated 7.00ea
        SubmarineProgressionStatus = 0x27E,             // updated 7.00ea
        SubmarineStatusList = 0xBE,                     // updated 7.00ea
        FreeCompanyInfo = 0x260,                        // updated 7.00ea
        AirshipExplorationResult = 0x16E,               // updated 7.00ea
        SubmarineExplorationResult = 0x182,             // updated 7.00ea
        FreeCompanyDialog = 0x342,                      // updated 7.00ea
        ItemMarketBoardInfo = 0x2AC,                    // updated 7.00ea
        FateInfo = 0x303,                               // updated 7.00ea
        EnvironmentControl = 0xBD,                      // updated 7.00ea
        IslandWorkshopSupplyDemand = 0x298,             // updated 7.00ea
        RSV = 0x202,                                    // updated 7.00ea
        SystemLogMessage32 = 0x38F,                     // updated 7.00ea
        SystemLogMessage48 = 0x1F0,                     // updated 7.00ea
        SystemLogMessage80 = 0x2F8,                     // updated 7.00ea
        SystemLogMessage144 = 0xBB,                     // updated 7.00ea
        NpcYell = 0xB1,                                 // updated 7.00ea
        UpdateParty = 0x126,                            // updated 7.00ea
        EurekaStatusEffectList = 0x3B9,                 // updated 7.00ea
        EffectResult4 = 0x271,                          // updated 7.00ea
        EffectResult8 = 0x17D,                          // updated 7.00ea
        EffectResult16 = 0x6F,                          // updated 7.00ea
        PlayMotionSync = 0x322,                         // updated 7.00ea
        CountdownInitiate = 0x11E,                      // updated 7.00ea
        CountdownCancel = 0x93,                         // updated 7.00ea
        RSF = 0xEF,                                     // updated 7.00ea
        ChatHandler = 0x14E,                            // updated 7.00ea
        ClientTrigger = 0x3D9,                          // updated 7.00ea
        InventoryModifyHandler = 0x230,                 // updated 7.00ea
        UpdatePositionHandler = 0x28A,                  // updated 7.00ea
        UpdatePositionInstance = 0x11B,                 // updated 7.00ea
        MarketBoardPurchaseHandler = 0x354,             // updated 7.00ea
        InventoryHandlerOffset = 0x230,                 // updated 7.00ea
        ActionRequest = 0x268,                          // updated 7.00ea
        ActionRequestGroundTargeted = 0xE9,             // updated 7.00ea
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
