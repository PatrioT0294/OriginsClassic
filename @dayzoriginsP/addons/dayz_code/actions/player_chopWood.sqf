private ["_item","_result","_rnd","_tC","_sA"];
_item = _this;
call gear_ui_init;
_name = 		getText(configFile >> "cfgWeapons" >> _item >> "displayName");
if(!(_item in weapons player)) exitWith {};
if (_item == "ItemPickaxe") then {
	if ((player distance [17382.5,8062.28,0] < 32) OR (player distance [8331.27,8909.49] < 32)) then {
		if(!(_item in weapons player)) exitWith { player removeMagazine "ItemRocks"; };
		_result = [player,"ItemRocks"] call BIS_fnc_invAdd;
		if (_result) then {
			[player,"pickaxe",0,false] call dayz_zombieSpeak;
			player playActionNow "Medic";
			sleep 5;
			cutText [localize "str_player_32", "PLAIN DOWN"];
			_rnd = random 1;
			if (_rnd > 0.98) then {
				[player,"slomkaon",0,false] call dayz_zombieSpeak;
				player removeWeapon "ItemPickaxe";
				cutText [format[localize "str_player_38",_name], "PLAIN DOWN",2];
			};
		} else {
			cutText [localize "str_player_24", "PLAIN DOWN"];
		};
	} else { cutText [localize "str_player_33", "PLAIN DOWN"]; };
	if(!(_item in weapons player)) exitWith { player removeMagazine "ItemRocks"; };
};

if (_item == "ItemHatchet") then {
	_tC = 0;
	_sA = [];
	{
	_sA = _sA + [str(_x)];
	} forEach nearestObjects [(position player), [], 30];
	{
		if ((["t_",str(_x),false] call fnc_inString)) then {
			_tC = _tC + 1;
		};
	} forEach _sA;
	
	
	if (_tC > 8) then {
		if(!(_item in weapons player)) exitWith { player removeMagazine "PartWoodPile"; };
		_result = [player,"PartWoodPile"] call BIS_fnc_invAdd;
		if (_result) then {
			[player,"woodHcht",0,false] call dayz_zombieSpeak;
			player playActionNow "Medic";
			sleep 5;
			cutText [localize "str_player_25", "PLAIN DOWN"];
			_rnd = random 1;
			if (_rnd > 0.98) then {
				[player,"slomkaon",0,false] call dayz_zombieSpeak;
				player removeWeapon "ItemHatchet";
				cutText [format[localize "str_player_38",_name], "PLAIN DOWN",2];
			};
		} else {
			cutText [localize "str_player_24", "PLAIN DOWN"];
		};
	} else {
		cutText [localize "str_player_23", "PLAIN DOWN"];
	};
	if(!(_item in weapons player)) exitWith { player removeMagazine "PartWoodPile"; };
};