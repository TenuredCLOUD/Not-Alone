class CfgMisery_InteractionData {
    // Water bottles
    class misery_waterBottle_Purified { // Item classname
        category = "$STR_TheBurningRain_Category_Drink"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0.25; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        replacement = "misery_waterBottle_Empty"; // Replacement object for magazine object once depleted
        sound = "z\misery\addons\audio\sounds\items\drink.ogg"; // Sound to play
        animation = "misery_animations_drinkBottle";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_waterBottle_Clean { // Item classname
        category = "$STR_TheBurningRain_Category_Drink"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0.25; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0.0025; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        replacement = "misery_waterBottle_Empty"; // Replacement object for magazine object once depleted
        sound = "z\misery\addons\audio\sounds\items\drink.ogg"; // Sound to play
        animation = "misery_animations_drinkBottle";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_waterBottle_Dirty { // Item classname
        category = "$STR_TheBurningRain_Category_Drink"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0.25; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0.005; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        replacement = "misery_waterBottle_Empty"; // Replacement object for magazine object once depleted
        sound = "z\misery\addons\audio\sounds\items\drink.ogg"; // Sound to play
        animation = "misery_animations_drinkBottle";
        code = "if ([misery_survival_turbidWaterChance] call misery_common_fnc_rollChance) then {[0.01, 'parasites'] call misery_common_fnc_addStatusModifier}"; // Raw SQF override (optional)
        feedback[] = {};
    };
    // Water Canister
    class misery_waterJerryCan_Purified { // Item classname
        category = "$STR_TheBurningRain_Category_Drink"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0.25; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        replacement = "misery_waterJerryCan_Empty"; // Replacement object for magazine object once depleted
        sound = "z\misery\addons\audio\sounds\items\drink.ogg"; // Sound to play
        animation = "";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_waterJerryCan_Clean { // Item classname
        category = "$STR_TheBurningRain_Category_Drink"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0.25; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0.0025; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        replacement = "misery_waterJerryCan_Empty"; // Replacement object for magazine object once depleted
        sound = "z\misery\addons\audio\sounds\items\drink.ogg"; // Sound to play
        animation = "";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_waterJerryCan_Dirty { // Item classname
        category = "$STR_TheBurningRain_Category_Drink"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0.25; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0.005; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        replacement = "misery_waterJerryCan_Empty"; // Replacement object for magazine object once depleted
        sound = "z\misery\addons\audio\sounds\items\drink.ogg"; // Sound to play
        animation = "";
        code = "if ([misery_survival_turbidWaterChance] call misery_common_fnc_rollChance) then {[0.01, 'parasites'] call misery_common_fnc_addStatusModifier}"; // Raw SQF override (optional)
        feedback[] = {};
    };
    // Tobacco
    class misery_cigarettePack { // Item classname
        category = "$STR_TheBurningRain_Category_Tobacco"; // Category of item
        delay = 0; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 0; // Remove item after use
        replacement = ""; // Replacement object for magazine object once depleted
        sound = ""; // Sound to play
        animation = "";
        code = "[] call misery_tobacco_fnc_cigarettes"; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_cigar { // Item classname
        category = "$STR_TheBurningRain_Category_Tobacco"; // Category of item
        delay = 0; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 0; // Remove item after use
        replacement = ""; // Replacement object for magazine object once depleted
        sound = ""; // Sound to play
        animation = "";
        code = "[] call misery_tobacco_fnc_cigar"; // Raw SQF override (optional)
        feedback[] = {};
    };
    // Coffee
    class misery_coffeeBrewed { // Item classname
        category = "$STR_TheBurningRain_Category_Drink"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0.10; // Affects MiseryThirst
        energyDeficit = 0.25; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0.0025; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        replacement = "misery_coffeeMug"; // Replacement object for magazine object once depleted
        sound = "z\misery\addons\audio\sounds\items\drink.ogg"; // Sound to play
        animation = "misery_animations_drinkBottle";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    // Canteen
    class misery_canteen_Purified { // Item classname
        category = "$STR_TheBurningRain_Category_Drink"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0.25; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        replacement = "misery_canteen_Empty"; // Replacement object for magazine object once depleted
        sound = "z\misery\addons\audio\sounds\items\drink.ogg"; // Sound to play
        animation = "misery_animations_drinkFlask";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_canteen_Clean { // Item classname
        category = "$STR_TheBurningRain_Category_Drink"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0.25; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0.0025; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        replacement = "misery_canteen_Empty"; // Replacement object for magazine object once depleted
        sound = "z\misery\addons\audio\sounds\items\drink.ogg"; // Sound to play
        animation = "misery_animations_drinkFlask";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_canteen_Dirty { // Item classname
        category = "$STR_TheBurningRain_Category_Drink"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0.25; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0.005; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        replacement = "misery_canteen_Empty"; // Replacement object for magazine object once depleted
        sound = "z\misery\addons\audio\sounds\items\drink.ogg"; // Sound to play
        animation = "misery_animations_drinkFlask";
        code = "if ([misery_survival_turbidWaterChance] call misery_common_fnc_rollChance) then {[0.01, 'parasites'] call misery_common_fnc_addStatusModifier}"; // Raw SQF override (optional)
        feedback[] = {};
    };
    // Soda / Energy drink
    class misery_energyDrink { // Item classname
        category = "$STR_TheBurningRain_Category_Drink"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0.15; // Affects MiseryThirst
        energyDeficit = 0.5; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0.0015; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        replacement = ""; // Replacement object for magazine object once depleted
        sound = "z\misery\addons\audio\sounds\items\drink.ogg"; // Sound to play
        animation = "misery_animations_drinkSoda";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_soda_1 { // Item classname
        category = "$STR_TheBurningRain_Category_Drink"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0.15; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0.0015; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        replacement = ""; // Replacement object for magazine object once depleted
        sound = "z\misery\addons\audio\sounds\items\drink.ogg"; // Sound to play
        animation = "misery_animations_drinkSoda";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_soda_2 { // Item classname
        category = "$STR_TheBurningRain_Category_Drink"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0.15; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0.0015; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        replacement = ""; // Replacement object for magazine object once depleted
        sound = "z\misery\addons\audio\sounds\items\drink.ogg"; // Sound to play
        animation = "misery_animations_drinkSoda";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    // Alcohol
    class misery_wolfBeer { // Item classname
        category = "$STR_TheBurningRain_Category_Alcohol"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0.15; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        replacement = ""; // Replacement object for magazine object once depleted
        sound = "z\misery\addons\audio\sounds\items\drink.ogg"; // Sound to play
        animation = "misery_animations_drinkBottle";
        code = "call misery_alcohol_fnc_beer"; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_vodka { // Item classname
        category = "$STR_TheBurningRain_Category_Alcohol"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0.15; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        replacement = ""; // Replacement object for magazine object once depleted
        sound = "z\misery\addons\audio\sounds\items\drink.ogg"; // Sound to play
        animation = "misery_animations_drinkBottle";
        code = "call misery_alcohol_fnc_vodka"; // Raw SQF override (optional)
        feedback[] = {};
    };
    // Food
    class misery_cookedFish { // Item classname
        category = "$STR_TheBurningRain_Category_Food"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0.25; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0.0025; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        sound = "z\misery\addons\audio\sounds\items\eat.ogg"; // Sound to play
        animation = "misery_animations_eatPackaged";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_cookedMeat { // Item classname
        category = "$STR_TheBurningRain_Category_Food"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0.25; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0.0025; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        sound = "z\misery\addons\audio\sounds\items\eat.ogg"; // Sound to play
        animation = "misery_animations_eatPackaged";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_rawFish { // Item classname
        category = "$STR_TheBurningRain_Category_Food"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0.25; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0.0025; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        sound = "z\misery\addons\audio\sounds\items\eat.ogg"; // Sound to play
        animation = "misery_animations_eatPackaged";
        code = "call misery_food_fnc_rawMeat"; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_rawMeat { // Item classname
        category = "$STR_TheBurningRain_Category_Food"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0.25; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0.0025; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        sound = "z\misery\addons\audio\sounds\items\eat.ogg"; // Sound to play
        animation = "misery_animations_eatPackaged";
        code = "call misery_food_fnc_rawMeat"; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_rice { // Item classname
        category = "$STR_TheBurningRain_Category_Food"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0.15; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0.002; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        sound = "z\misery\addons\audio\sounds\items\eat.ogg"; // Sound to play
        animation = "misery_animations_eatPackaged";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_cereal { // Item classname
        category = "$STR_TheBurningRain_Category_Food"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0.15; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0.0015; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        sound = "z\misery\addons\audio\sounds\items\eat.ogg"; // Sound to play
        animation = "misery_animations_eatPackaged";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_orange { // Item classname
        category = "$STR_TheBurningRain_Category_Food"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0.05; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0.0005; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        sound = "z\misery\addons\audio\sounds\items\eat.ogg"; // Sound to play
        animation = "misery_animations_candyBar";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_powderedMilk { // Item classname
        category = "$STR_TheBurningRain_Category_Food"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0.1; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0.0015; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        sound = "z\misery\addons\audio\sounds\items\eat.ogg"; // Sound to play
        animation = "misery_animations_eatPackaged";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_cannedBacon { // Item classname
        category = "$STR_TheBurningRain_Category_Food"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0.25; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0.0025; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 1; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        sound = "z\misery\addons\audio\sounds\items\eat.ogg"; // Sound to play
        animation = "misery_animations_eatCanned";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_bakedBeans { // Item classname
        category = "$STR_TheBurningRain_Category_Food"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0.30; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0.0025; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        sound = "z\misery\addons\audio\sounds\items\eat.ogg"; // Sound to play
        animation = "misery_animations_eatCanned";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    // ACE MRE's
    class ACE_Humanitarian_Ration { // Item classname
        category = "$STR_TheBurningRain_Category_Food"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0.35; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        sound = "z\misery\addons\audio\sounds\items\eat.ogg"; // Sound to play
        animation = "misery_animations_eatPackaged";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class ACE_MRE_BeefStew { // Item classname
        category = "$STR_TheBurningRain_Category_Food"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0.7; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        sound = "z\misery\addons\audio\sounds\items\eat.ogg"; // Sound to play
        animation = "misery_animations_eatPackaged";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class ACE_MRE_ChickenTikkaMasala { // Item classname
        category = "$STR_TheBurningRain_Category_Food"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0.5; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        sound = "z\misery\addons\audio\sounds\items\eat.ogg"; // Sound to play
        animation = "misery_animations_eatPackaged";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class ACE_MRE_ChickenHerbDumplings { // Item classname
        category = "$STR_TheBurningRain_Category_Food"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0.7; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        sound = "z\misery\addons\audio\sounds\items\eat.ogg"; // Sound to play
        animation = "misery_animations_eatPackaged";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class ACE_MRE_CreamChickenSoup { // Item classname
        category = "$STR_TheBurningRain_Category_Food"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0.35; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        sound = "z\misery\addons\audio\sounds\items\eat.ogg"; // Sound to play
        animation = "misery_animations_eatPackaged";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class ACE_MRE_CreamTomatoSoup { // Item classname
        category = "$STR_TheBurningRain_Category_Food"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0.35; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        sound = "z\misery\addons\audio\sounds\items\eat.ogg"; // Sound to play
        animation = "misery_animations_eatPackaged";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class ACE_MRE_LambCurry { // Item classname
        category = "$STR_TheBurningRain_Category_Food"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0.4; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        sound = "z\misery\addons\audio\sounds\items\eat.ogg"; // Sound to play
        animation = "misery_animations_eatPackaged";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class ACE_MRE_MeatballsPasta { // Item classname
        category = "$STR_TheBurningRain_Category_Food"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0.7; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        sound = "z\misery\addons\audio\sounds\items\eat.ogg"; // Sound to play
        animation = "misery_animations_eatPackaged";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    class ACE_MRE_SteakVegetables { // Item classname
        category = "$STR_TheBurningRain_Category_Food"; // Category of item
        delay = 15; // Delay before processing
        hunger = 0.9; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 1; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 1; // Remove item after use
        sound = "z\misery\addons\audio\sounds\items\eat.ogg"; // Sound to play
        animation = "misery_animations_eatPackaged";
        code = ""; // Raw SQF override (optional)
        feedback[] = {};
    };
    // Saw fuel
    class misery_sawFuel { // Item classname
        category = "$STR_TheBurningRain_Category_Tools"; // Category of item
        delay = 0; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 0; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 0; // Remove item after use
        sound = ""; // Sound to play
        animation = "";
        code = "[] call misery_forestry_fnc_chainsawFuel;"; // Raw SQF override (optional)
        feedback[] = {};
    };
    // Fire crafting
    class misery_matchBox { // Item classname
        category = "$STR_TheBurningRain_Category_FireCrafting"; // Category of item
        delay = 0; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 0; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 0; // Remove item after use
        sound = ""; // Sound to play
        animation = "";
        code = "createDialog 'misery_fireCrafting_ui';"; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_lighter { // Item classname
        category = "$STR_TheBurningRain_Category_FireCrafting"; // Category of item
        delay = 0; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 0; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 0; // Remove item after use
        sound = ""; // Sound to play
        animation = "";
        code = "createDialog 'misery_fireCrafting_ui';"; // Raw SQF override (optional)
        feedback[] = {};
    };
    // Temperature
    class misery_thermalRegulationKit { // Item classname
        category = "$STR_TheBurningRain_Category_SurvivalKits"; // Category of item
        delay = 0; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 0; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 0; // Remove item after use
        sound = ""; // Sound to play
        animation = "misery_animations_thermalPack";
        code = "[] call misery_temperature_fnc_thermalKit"; // Raw SQF override (optional)
        feedback[] = {};
    };
    // Purification tablets
    class misery_pureTablets { // Item classname
        category = "$STR_TheBurningRain_Category_Purification"; // Category of item
        delay = 0; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 0; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 0; // Remove item after use
        sound = ""; // Sound to play
        animation = "";
        code = "[] call misery_hydrology_fnc_purifyWater"; // Raw SQF override (optional)
        feedback[] = {};
    };
    // Thermal packs
    class misery_heatpack { // Item classname
        category = "$STR_TheBurningRain_Category_Thermal"; // Category of item
        delay = 0; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 0; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 0; // Remove item after use
        sound = ""; // Sound to play
        animation = "misery_animations_thermalPack";
        code = "[] call misery_temperature_fnc_heatPack"; // Raw SQF override (optional)
        feedback[] = {};
    };
    class misery_coldpack { // Item classname
        category = "$STR_TheBurningRain_Category_Thermal"; // Category of item
        delay = 0; // Delay before processing
        hunger = 0; // Affects MiseryHunger
        thirst = 0; // Affects MiseryThirst
        energyDeficit = 0; // Affects energyDeficit (sleepiness)
        exposure = 0; // Affects exposure
        radiation = 0; // Affects radiation
        infection = 0; // Affects infection
        parasites = 0; // Affects parasites
        toxicity = 0; // Affects toxicity
        psychosis = 0; // Affects psychosis
        maskBlocksUse = 0; // Requires gas mask (1 blocks without)
        requiresCanOpener = 0; // Requires can opener/tool
        removeOnUse = 0; // Remove item after use
        sound = ""; // Sound to play
        animation = "misery_animations_thermalPack";
        code = "[] call misery_temperature_fnc_coldPack"; // Raw SQF override (optional)
        feedback[] = {};
    };
};
