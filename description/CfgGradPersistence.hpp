class CfgGradPersistence {
    missionTag = "Not Alone";
    loadOnMissionStart = 1;
    missionWaitCondition = "true";
    playerWaitCondition = "true";
    saveUnits = 1;
    saveVehicles = 1;
    saveContainers = 3;
    saveStatics = 3;
    saveMarkers = 0;
    saveTasks = 0;
    saveTriggers = 0;
    saveTimeAndDate	= 1;
    savePlayerInventory = 1;
    savePlayerDamage = 1;
    savePlayerPosition = 1;
    savePlayerMoney = 0;
    saveTeamAccounts = 0;
    saveGradFortificationsStatics = 3;

    blacklist[] = {};

    class customVariables {
        class ACE_VehicleLock_SetVehicleLock {
            varName = "ace_vehicleLock_setVehicleLock";
            varNamespace = "vehicle";
            public = 1;
        };

        class traderStates {
            varName = "misery_traders_shop";
            varNamespace = "unit";
            public = 1;
        };

        class buildingStates {
            varName = "misery_doorlocks_buildingStates";
            varNamespace = "mission";
            public = 1;
        };

        class gradFortificationsVehicleInventory {
            varName = "grad_fortifications_myFortsHash";
            varNamespace = "vehicle";
            public = 1;
        };

        class gradFortificationsContainerInventory {
            varName = "grad_fortifications_myFortsHash";
            varNamespace = "container";
            public = 1;
        };

        class gradFortificationsPlayerInventory {
            varName = "grad_fortifications_myFortsHash";
            varNamespace = "player";
            public = 1;
        };

        class gradFortificationsUnitInventory {
            varName = "grad_fortifications_myFortsHash";
            varNamespace = "unit";
            public = 1;
        };

        class vehicleBatteryCount {
            varName = "misery_maintenance_batteryCount";
            varNamespace = "vehicle";
            public = 1;
        };

        class vehicleBatteryType {
            varName = "misery_maintenance_batteryType";
            varNamespace = "vehicle";
            public = 1;
        };

        class vehicleInstalledBatteries {
            varName = "misery_maintenance_installedBatteries";
            varNamespace = "vehicle";
            public = 1;
        };

        class vehicleBatteryLevel {
            varName = "misery_maintenance_batteryLevel";
            varNamespace = "vehicle";
            public = 1;
        };

        class vehicleOilLevel {
            varName = "misery_maintenance_oilLevel";
            varNamespace = "vehicle";
            public = 1;
        };

        class vehicleCoolantLevel {
            varName = "misery_maintenance_coolantLevel";
            varNamespace = "vehicle";
            public = 1;
        };

        class deviceStates {
            varName = "misery_power_deviceStates";
            varNamespace = "mission";
            public = 1;
        };

        class cargoStates {
            varName = "misery_persistence_cargoStates";
            varNamespace = "mission";
            public = 1;
        };

        class fuelPumpStates {
            varName = "misery_fuel_pumpStates";
            varNamespace = "mission";
            public = 1;
        };

        class searchedLootPositions {
            varName = "misery_loot_searchedPositions";
            varNamespace = "mission";
            public = 1;
        };

        class aceSprayTags {
            varName = "misery_persistence_sprayTagsList";
            varNamespace = "mission";
            public = 1;
        };

        class waterSourceStates {
            varName = "misery_hydrology_wellStates";
            varNamespace = "mission";
            public = 1;
        };

        class moneyCacheStates {
            varName = "misery_currency_cacheFunds";
            varNamespace = "static";
            public = 1;
        };

        class gearCacheStates {
            varName = "misery_gear_cache_data";
            varNamespace = "static";
            public = 1;
        };

        // Player data
        class hunger {
            varName = "misery_survival_hunger";
            varNamespace = "player";
            public = 0;
        };

        class thirst {
            varName = "misery_survival_thirst";
            varNamespace = "player";
            public = 0;
        };

        class energy {
            varName = "misery_survival_energyDeficit";
            varNamespace = "player";
            public = 0;
        };

        class thermalIndex {
            varName = "misery_temperature_thermalIndex";
            varNamespace = "player";
            public = 0;
        };

        class exposure {
            varName = "misery_temperature_exposure";
            varNamespace = "player";
            public = 0;
        };

        class wetness {
            varName = "misery_temperature_wetness";
            varNamespace = "player";
            public = 0;
        };

        class radiation {
            varName = "misery_survival_radiation";
            varNamespace = "player";
            public = 0;
        };

        class infection {
            varName = "misery_survival_infection";
            varNamespace = "player";
            public = 0;
        };

        class parasites {
            varName = "misery_survival_parasites";
            varNamespace = "player";
            public = 0;
        };

        class toxicity {
            varName = "misery_survival_toxicity";
            varNamespace = "player";
            public = 0;
        };

        class psychosis {
            varName = "misery_psychosis_state";
            varNamespace = "player";
            public = 0;
        };

        class buffs {
            varName = "misery_vitals_buffs";
            varNamespace = "player";
            public = 0;
        };

        class ailments {
            varName = "misery_vitals_ailments";
            varNamespace = "player";
            public = 0;
        };

        class funds {
            varName = "misery_currency_funds";
            varNamespace = "player";
            public = 0;
        };

        class hasEHP {
            varName = "ace_hasEHP";
            varNamespace = "player";
            public = 0;
        };

        class hasEarPlugsIn {
            varName = "ace_hasEarPlugsIn";
            varNamespace = "player";
            public = 0;
        };
    };
};
