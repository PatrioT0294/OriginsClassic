private["_unit","_selection","_killer"];

Diag_log ("handlekilled");

_unit = _this select 0;
_killer = _this select 1;

_hitPoints = _unit call vehicle_getHitpoints;
{
	_selection = getText (configFile >> "CfgVehicles" >> (typeof _unit) >> "HitPoints" >> _x >> "name");
	_unit setVariable [_selection, 1, true];
} forEach _hitPoints;

dayUpdateVehlcle = [_unit, "damage", true];

if (isServer) then {
	if (allowConnection) then {
		dayUpdateVehlcle call server_updatObiect;
		diag_log ("Server v_handleKilled.sqf");
	};
} else {
	publicVariableServer "dayUpdateVehlcle";
};

_unit removeAllEventHandlers "HandleDamage";
_unit removeAllEventHandlers "Killed";
_unit removeAllEventHandlers "GetIn";
_unit removeAllEventHandlers "GetOut";