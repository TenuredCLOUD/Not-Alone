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
        class Temperate {
            name = "$STR_TheBurningRain_Status_Temperate";
            image = "z\misery\addons\icons\data\thermometer_ca.paa";
            description = "$STR_TheBurningRain_Desc_Temperate";
            showCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v > -0.0005 && _v < 0.0005";
            removeCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v >= 0.0005 || _v < -0.0005";
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
        class Chilly {
            name = "$STR_TheBurningRain_Status_Chilly";
            image = "z\misery\addons\icons\data\thermometer_snowflake_ca.paa";
            description = "$STR_TheBurningRain_Desc_Chilly";
            // Range: Exactly between 0 and -0.25
            showCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v < -0.0005 && _v >= -0.25";
            removeCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v >= 0 || _v < -0.25";
        };
        class Cold {
            name = "$STR_TheBurningRain_Status_Cold";
            image = "z\misery\addons\icons\data\thermometer_snowflake_ca.paa";
            description = "$STR_TheBurningRain_Desc_Cold";
            // Range: Lower than -0.25 down to -0.5
            showCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v < -0.25 && _v >= -0.5";
            removeCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v >= -0.25 || _v < -0.5";
        };
        class Freezing {
            name = "$STR_TheBurningRain_Status_Freezing";
            image = "z\misery\addons\icons\data\thermometer_snowflake_ca.paa";
            description = "$STR_TheBurningRain_Desc_Freezing";
            // Range: Lower than -0.5 down to -0.75
            showCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v < -0.5 && _v >= -0.75";
            removeCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v >= -0.5 || _v < -0.75";
        };
        class HypothermicRisk {
            name = "$STR_TheBurningRain_Status_HypothermiaRisk";
            image = "z\misery\addons\icons\data\thermometer_snowflake_ca.paa";
            description = "$STR_TheBurningRain_Desc_HypothermiaRisk";
            // Range: Lower than -0.75 but not yet -1.0
            showCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v < -0.75 && _v > -1";
            removeCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v >= -0.75 || _v <= -1";
        };
        class Hypothermia {
            name = "$STR_TheBurningRain_Status_Hypothermic";
            image = "z\misery\addons\icons\data\thermometer_snowflake_ca.paa";
            description = "$STR_TheBurningRain_Desc_Hypothermic";
            // Range: Exactly -1.0 or lower
            showCondition = "player getVariable ['misery_temperature_exposure', 0] <= -1";
            removeCondition = "player getVariable ['misery_temperature_exposure', 0] > -1";
        };
        class Warm {
            name = "$STR_TheBurningRain_Status_Warm";
            image = "z\misery\addons\icons\data\thermometer_sun_ca.paa";
            description = "$STR_TheBurningRain_Desc_Warm";
            showCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v > 0.0005 && _v <= 0.25";
            removeCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v <= 0 || _v > 0.25";
        };
        class Hot {
            name = "$STR_TheBurningRain_Status_Hot";
            image = "z\misery\addons\icons\data\thermometer_sun_ca.paa";
            description = "$STR_TheBurningRain_Desc_Hot";
            showCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v > 0.25 && _v <= 0.5";
            removeCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v <= 0.25 || _v > 0.5";
        };
        class Sweating {
            name = "$STR_TheBurningRain_Status_Overheating";
            image = "z\misery\addons\icons\data\thermometer_sun_ca.paa";
            description = "$STR_TheBurningRain_Desc_Overheating";
            showCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v > 0.5 && _v <= 0.75";
            removeCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v <= 0.5 || _v > 0.75";
        };
        class HyperthermiaRisk {
            name = "$STR_TheBurningRain_Status_HeatstrokeRisk";
            image = "z\misery\addons\icons\data\thermometer_sun_ca.paa";
            description = "$STR_TheBurningRain_Desc_HeatstrokeRisk";
            showCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v > 0.75 && _v < 1";
            removeCondition = "private _v = player getVariable ['misery_temperature_exposure', 0]; _v <= 0.75 || _v >= 1";
        };
        class Hyperthermia {
            name = "$STR_TheBurningRain_Status_Heatstroke";
            image = "z\misery\addons\icons\data\thermometer_sun_ca.paa";
            description = "$STR_TheBurningRain_Desc_Heatstroke";
            showCondition = "player getVariable ['misery_temperature_exposure', 0] >= 1";
            removeCondition = "player getVariable ['misery_temperature_exposure', 0] < 1";
        };
        class Damp {
            name = "$STR_TheBurningRain_Status_Damp";
            image = "z\misery\addons\icons\data\droplet_ca.paa";
            description = "$STR_TheBurningRain_Desc_Damp";
            // Range: 0.01 to 0.25
            showCondition = "private _v = player getVariable ['misery_temperature_wetness', 0]; _v > 0 && _v <= 0.25";
            removeCondition = "private _v = player getVariable ['misery_temperature_wetness', 0]; _v <= 0 || _v > 0.25";
        };
        class Wet {
            name = "$STR_TheBurningRain_Status_Wet";
            image = "z\misery\addons\icons\data\droplet_ca.paa";
            description = "$STR_TheBurningRain_Desc_Wet";
            // Range: 0.26 to 0.50
            showCondition = "private _v = player getVariable ['misery_temperature_wetness', 0]; _v > 0.25 && _v <= 0.5";
            removeCondition = "private _v = player getVariable ['misery_temperature_wetness', 0]; _v <= 0.25 || _v > 0.5";
        };
        class Soaked {
            name = "$STR_TheBurningRain_Status_Soaked";
            image = "z\misery\addons\icons\data\droplet_ca.paa";
            description = "$STR_TheBurningRain_Desc_Soaked";
            // Range: 0.51 to 0.75
            showCondition = "private _v = player getVariable ['misery_temperature_wetness', 0]; _v > 0.5 && _v <= 0.75";
            removeCondition = "private _v = player getVariable ['misery_temperature_wetness', 0]; _v <= 0.5 || _v > 0.75";
        };
        class Drenched {
            name = "$STR_TheBurningRain_Status_Drenched";
            image = "z\misery\addons\icons\data\droplet_ca.paa";
            description = "$STR_TheBurningRain_Desc_Drenched";
            // Range: 0.76 to 0.99
            showCondition = "private _v = player getVariable ['misery_temperature_wetness', 0]; _v > 0.75 && _v < 1";
            removeCondition = "private _v = player getVariable ['misery_temperature_wetness', 0]; _v <= 0.75 || _v >= 1";
        };
        class Saturated {
            name = "$STR_TheBurningRain_Status_Waterlogged";
            image = "z\misery\addons\icons\data\droplet_ca.paa";
            description = "$STR_TheBurningRain_Desc_Waterlogged";
            // Range: 1.0 (Maximum)
            showCondition = "player getVariable ['misery_temperature_wetness', 0] >= 1";
            removeCondition = "player getVariable ['misery_temperature_wetness', 0] < 1";
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
