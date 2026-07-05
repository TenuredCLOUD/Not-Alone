class CfgMisery_CookingData {
    class misery_cookedFish {
        requiredItems[] = {{"misery_rawFish", 1, 1}}; // [item, count, removeOnUse (1 = yes, 0 = no)]
        cookingTime = 30;               // Time in seconds
        outputCount = 1;               // Number of output items
        code = "";           // Empty for now
        audio = "misery_audio_sound_meatRoasted";        // Sound to play
        outputXP = 5;                  // XP gained
        requiredXP = 0;                // XP needed
        cookingMethod = "$STR_TheBurningRain_Action_Cooking";        // Cooking method
    };
    class misery_cookedMeat {
        requiredItems[] = {{"misery_rawMeat", 1, 1}}; // [item, count, removeOnUse (1 = yes, 0 = no)]
        cookingTime = 30;               // Time in seconds
        outputCount = 1;               // Number of output items
        code = "";           // Empty for now
        audio = "misery_audio_sound_meatRoasted";        // Sound to play
        outputXP = 5;                  // XP gained
        requiredXP = 0;                // XP needed
        cookingMethod = "$STR_TheBurningRain_Action_Cooking";        // Cooking method
    };
    class misery_coffeeBrewed {
        requiredItems[] = {{"misery_coffeeMug", 1, 1}, {"misery_coffeeGrounds", 1, 0}, {"misery_waterBottle_Purified", 1, 0}, {"misery_tinContainer", 1, 0}}; // [item, count, removeOnUse (1 = yes, 0 = no)]
        cookingTime = 30;               // Time in seconds
        outputCount = 1;               // Number of output items
        code = "['misery_waterBottle_Purified', 'misery_waterBottle_Empty'] call misery_common_fnc_itemDecrement; ['misery_coffeeGrounds'] call misery_common_fnc_itemDecrement;";           // Empty for now
        audio = "misery_audio_sound_WaterBoiling";        // Sound to play
        outputXP = 5;                  // XP gained
        requiredXP = 5;                // XP needed
        cookingMethod = "$STR_TheBurningRain_Action_Boiling";        // Cooking method
    };
    class misery_waterBottle_Clean {
        requiredItems[] = {{"misery_waterBottle_Dirty", 1, 1}, {"misery_tinContainer", 1, 0}}; // [item, count, removeOnUse (1 = yes, 0 = no)]
        cookingTime = 30;               // Time in seconds
        outputCount = 1;               // Number of output items
        code = "";           // Empty for now
        audio = "misery_audio_sound_WaterBoiling";        // Sound to play
        outputXP = 5;                  // XP gained
        requiredXP = 0;                // XP needed
        cookingMethod = "$STR_TheBurningRain_Action_Boiling";        // Cooking method
    };
    class misery_canteen_Clean {
        requiredItems[] = {{"misery_canteen_Dirty", 1, 1}, {"misery_tinContainer", 1, 0}}; // [item, count, removeOnUse (1 = yes, 0 = no)]
        cookingTime = 30;               // Time in seconds
        outputCount = 1;               // Number of output items
        code = "";           // Empty for now
        audio = "misery_audio_sound_WaterBoiling";        // Sound to play
        outputXP = 5;                  // XP gained
        requiredXP = 0;                // XP needed
        cookingMethod = "$STR_TheBurningRain_Action_Boiling";        // Cooking method
    };
    class misery_waterJerryCan_Clean {
        requiredItems[] = {{"misery_waterJerryCan_Dirty", 1, 1}}; // [item, count, removeOnUse (1 = yes, 0 = no)]
        cookingTime = 30;               // Time in seconds
        outputCount = 1;               // Number of output items
        code = "";           // Empty for now
        audio = "misery_audio_sound_WaterBoiling";        // Sound to play
        outputXP = 5;                  // XP gained
        requiredXP = 0;                // XP needed
        cookingMethod = "$STR_TheBurningRain_Action_Boiling";        // Cooking method
    };
};
