// animHealed.sqf
diag_log format ["START medPainkiller.sqf"];
_array = _this; //_this select 0;
_unit = _array select 0;
_medic = _array select 1;

if (_unit == player) then {
	r_player_inpain = false;
	"dynamicBlur" ppEffectAdjust [0]; "dynamicBlur" ppEffectCommit 5;
};
if (local _unit) then {
	_unit setVariable["medForceUpdate",true, true];
};