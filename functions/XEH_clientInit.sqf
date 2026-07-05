
if (hasInterface) then {

    [{!isNull player}, {
        0 fadeRadio 0;
        ["misery_common_tileText", "<t font='PuristaMedium' size='1'>Not Alone</t><br/>by TenuredCLOUD"] call CBA_fnc_localEvent;
    }, []] call CBA_fnc_waitUntilAndExecute;

    player addEventHandler ["Respawn", {
	    params ["_unit", "_corpse"];

        removeAllWeapons _unit;
        removeAllItems _unit;
        removeAllAssignedItems _unit;
        removeUniform _unit;
        removeVest _unit;
        removeBackpack _unit;
        removeHeadgear _unit;
        removeGoggles _unit;

        _unit forceAddUniform "CUP_I_B_PMC_Unit_3";

        for "_i" from 1 to 2 do {_unit addItemToUniform "ACE_elasticBandage";};
        _unit addItemToUniform "ACE_fieldDressing";
        _unit addItemToUniform "misery_waterBottle_Purified";
        _unit addHeadgear "H_Cap_blk";
    }];
};
