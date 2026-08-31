class CfgMisery_BuffsAilments {
    class Buffs {
        class NearFire {
            name = "$STR_TheBurningRain_Status_NearFire";
            image = "z\misery\addons\icons\data\nearfire_ca.paa";
            description = "$STR_TheBurningRain_Desc_NearFire";
            showCondition = "private _isInflamed = (call misery_common_fnc_nearFire) select 1; _isInflamed"; // True to show
            removeCondition = "private _isInflamed = (call misery_common_fnc_nearFire) select 1; !_isInflamed"; // True to remove
        };
        class Sheltered {
            name = "$STR_TheBurningRain_Status_Sheltered";
            image = "z\misery\addons\icons\data\shelter_ca.paa";
            description = "$STR_TheBurningRain_Desc_Sheltered";
            showCondition = "insideBuilding player isEqualTo 1";
            removeCondition = "insideBuilding player isNotEqualTo 1";
        };
        class GasMask {
            name = "$STR_TheBurningRain_Status_GasMask";
            image = "";
            description = "$STR_TheBurningRain_Desc_GasMask";
            showCondition = "[player] call misery_protection_fnc_totalProtection params ['_gasMask', '_scba']; _gasMask > 0 && _scba isEqualTo 0";
            removeCondition = "[player] call misery_protection_fnc_totalProtection params ['_gasMask', '_scba']; _gasMask <= 0";
        };
        class SCBA {
            name = "$STR_TheBurningRain_Status_SCBA";
            image = "z\misery\addons\icons\data\dioxygen_ca.paa";
            description = "$STR_TheBurningRain_Desc_SCBA";
            showCondition = "[player] call misery_protection_fnc_totalProtection params ['_gasMask', '_scba']; _scba >= 1";
            removeCondition = "[player] call misery_protection_fnc_totalProtection params ['_gasMask', '_scba']; _scba < 1";
        };
        class HeatPack {
            name = "$STR_TheBurningRain_Status_Heatpack";
            image = "z\misery\addons\icons\data\thermometer_sun_ca.paa";
            description = "$STR_TheBurningRain_Desc_Heatpack";
            showCondition = "misery_temperature_thermalPackHeatActive";
            removeCondition = "!misery_temperature_thermalPackHeatActive";
        };
        class ColdPack {
            name = "$STR_TheBurningRain_Status_Coldpack";
            image = "z\misery\addons\icons\data\thermometer_snowflake_ca.paa";
            description = "$STR_TheBurningRain_Desc_Coldpack";
            showCondition = "misery_temperature_thermalPackColdActive";
            removeCondition = "!misery_temperature_thermalPackColdActive";
        };
        class FTRKit {
            name = "$STR_TheBurningRain_Status_FTRKit";
            image = "z\misery\addons\icons\data\sun_snow_ca.paa";
            description = "$STR_TheBurningRain_Desc_FTRKit";
            showCondition = "misery_temperature_thermalBagActive";
            removeCondition = "!misery_temperature_thermalBagActive";
        };
    };
    class Ailments {
        class ParasiteInfection {
            name = "$STR_TheBurningRain_Status_ParasiteInfection";
            image = "z\misery\addons\icons\data\worm_ca.paa";
            description = "$STR_TheBurningRain_Desc_ParasiteInfection";
            showCondition = "player getVariable ['misery_survival_parasites', 0] > 0";
            removeCondition = "player getVariable ['misery_survival_parasites', 0] <= 0";
        };
        class Tired {
            name = "$STR_TheBurningRain_Status_Tired";
            image = "z\misery\addons\icons\data\bed_ca.paa";
            description = "$STR_TheBurningRain_Desc_Tired";
            showCondition = "player getVariable ['misery_survival_energyDeficit', 0] >= 0.4";
            removeCondition = "player getVariable ['misery_survival_energyDeficit', 0] < 0.4";
        };
        class Terrified {
            name = "$STR_TheBurningRain_Status_Terrified";
            image = "z\misery\addons\icons\data\brain_ca.paa";
            description = "$STR_TheBurningRain_Desc_Terrified";
            showCondition = "misery_psychosis_terrifiedState";
            removeCondition = "!misery_psychosis_terrifiedState";
        };
        class Tremor {
            name = "$STR_TheBurningRain_Status_Tremor";
            image = "z\misery\addons\icons\data\brain_circuit_ca.paa";
            description = "$STR_TheBurningRain_Desc_Tremor";
            // Range: 1.0 (Maximum)
            showCondition = "player getVariable ['misery_medical_tremor', false]";
            removeCondition = "!(player getVariable ['misery_medical_tremor', false])";
        };
    };
};
