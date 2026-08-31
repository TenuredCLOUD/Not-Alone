private _dangerousZones = ["marker_151", "marker_154", "marker_172"];

[{
    params ["_markers", "_handle"];

    {
        private _marker = _x;
        private _targets = allUnits select {_x inArea _marker};

        {
            if (!isPlayer _x && {side group _x isNotEqualTo independent && !(_x getVariable ["misery_noZoneDamage", false])}) then {

                _x setDamage 1;
            };
        } forEach _targets;

    } forEach _markers;
}, 30, _dangerousZones] call CBA_fnc_addPerFrameHandler;
