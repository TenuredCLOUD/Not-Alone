class CfgMisery_CraftingData {
    class misery_woodplank {
        requiredItems[] = {{"misery_electricHandsaw", 1, 0}, {"misery_woodenlog", 1, 1}};
        craftingTime = 25;
        outputCount = 4;
        code = "if ([10] call misery_common_fnc_rollChance) then {[['misery_electricHandsaw'], ['misery_electricHandSaw_NoBattery']] call misery_common_fnc_switchItem}";
        audio = "misery_audio_sound_electricSaw";
        outputXP = 5;
        requiredXP = 0;
    };
    class WBK_craftedAxe {
        requiredItems[] = {{"misery_stoneChunk", 4, 1}, {"misery_woodensticks", 2, 1}, {"ACE_rope3", 1, 1}};
        craftingTime = 30;
        outputCount = 1;
        code = "";
        audio = "";
        outputXP = 5;
        requiredXP = 0;
    };
    class WBK_axe {
        requiredItems[] = {{"misery_woodplank", 1, 1}, {"misery_ironIngot", 2, 1}, {"WBK_SmallHammer", 1, 0}, {"misery_metalFabricationKit", 1, 0}, {"Toolkit", 1, 0}};
        craftingTime = 30;
        outputCount = 1;
        code = "[misery_metalFabricationKit, misery_emptyToolKit] call misery_common_fnc_itemDecrement";
        audio = "";
        outputXP = 5;
        requiredXP = 0;
    };
    class Axe {
        requiredItems[] = {{"misery_woodplank", 1, 1}, {"misery_ironIngot", 1, 1}, {"WBK_SmallHammer", 1, 0}, {"misery_metalFabricationKit", 1, 0}, {"Toolkit", 1, 0}};
        craftingTime = 30;
        outputCount = 1;
        code = "['misery_metalFabricationKit', 'misery_emptyToolKit'] call misery_common_fnc_itemDecrement";
        audio = "";
        outputXP = 5;
        requiredXP = 0;
    };
    class WBK_brush_axe {
        requiredItems[] = {{"misery_woodplank", 1, 1}, {"misery_ironIngot", 4, 1}, {"WBK_SmallHammer", 1, 0}, {"misery_metalFabricationKit", 1, 0}, {"Toolkit", 1, 0}};
        craftingTime = 30;
        outputCount = 1;
        code = "['misery_metalFabricationKit', 'misery_emptyToolKit'] call misery_common_fnc_itemDecrement";
        audio = "";
        outputXP = 5;
        requiredXP = 0;
    };
    class Bat_Clear {
        requiredItems[] = {{"misery_woodplank", 1, 1}, {"misery_electricHandsaw", 1, 0}, {"Toolkit", 1, 0}};
        craftingTime = 30;
        outputCount = 1;
        code = "if ([10] call misery_common_fnc_rollChance) then {[['misery_electricHandsaw'], ['misery_electricHandSaw_NoBattery']] call misery_common_fnc_switchItem}";
        audio = "misery_audio_sound_electricSaw";
        outputXP = 5;
        requiredXP = 0;
    };
    class Bat_Spike {
        requiredItems[] = {{"Bat_Clear", 1, 1}, {"misery_boxNails", 1, 0}, {"WBK_SmallHammer", 1, 0}};
        craftingTime = 30;
        outputCount = 1;
        code = "['misery_boxNails'] call misery_common_fnc_itemDecrement";
        audio = "";
        outputXP = 5;
        requiredXP = 0;
    };
    class WBK_pipeStyledSword {
        requiredItems[] = {{"misery_ironIngot", 8, 1}, {"misery_metalFabricationKit", 1, 0}, {"Toolkit", 1, 0}};
        craftingTime = 30;
        outputCount = 1;
        code = "['misery_metalFabricationKit', 'misery_emptyToolKit'] call misery_common_fnc_itemDecrement";
        audio = "";
        outputXP = 5;
        requiredXP = 0;
    };
    class WBK_Pickaxe {
        requiredItems[] = {{"misery_woodplank", 1, 1}, {"misery_pickaxeHead", 1, 1}, {"WBK_SmallHammer", 1, 0}};
        craftingTime = 30;
        outputCount = 1;
        code = "";
        audio = "";
        outputXP = 5;
        requiredXP = 0;
    };
};
