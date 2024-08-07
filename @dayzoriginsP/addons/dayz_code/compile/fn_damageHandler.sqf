scriptName "Functions\misc\fn_damageHandler.sqf";
/***********************************************************
	PROCESS DAMAGE TO A UNIT
	- Function
	- [unit, selectionName, damage, source, projectile] call fnc_usec_damageHandler;
************************************************************/
private["_unit","_humanityHit","_myKills","_isBandit","_hit","_damage","_isPlayer","_unconscious","_wound","_isHit","_isInjured","_type","_hitPain","_inPain","_isDead","_isCardiac","_killerID","_evType","_recordable","_inVehicle","_isHeadHit","_isMinor","_scale","_canHitFree","_weapon"];
_unit = _this select 0;
_hit = _this select 1;
_damage = _this select 2;
_unconscious = _unit getVariable ["NORRN_unconscious", false];
_source = _this select 3;
_ammo = _this select 4;
_type = [_damage,_ammo] call fnc_usec_damageType;
_isMinor = (_hit in USEC_MinorWounds);
_isHeadHit = (_hit == "head_hit");
_inVehicle = (vehicle _unit != _unit);
_evType = "";
_recordable = false;
_isPlayer = (isPlayer _source);
_humanityHit = 0;
_myKills = 0;
_sourceZombie = _source isKindOf "zZombie_base";
_isBossZ = _source isKindOf "z_Boss_zed";
_weapon = currentWeapon _source;

if(!isnil("dayzLogin")) exitWith {
	0 cutText ["", "BLACK",10];
	diag_log "DEBUG: pirated server";
	disableUserInput false;
	1 cutText ["WARNING !!! This is un-official server of Origins Mod and does not represent the mod concepts or gameplay experience intended by the developers.", "PLAIN",15];
	player enableSimulation false;
};

if(!isnil("dayzLogin2")) exitWith {
	diag_log "DEBUG: pirated server";
	disableUserInput false;
	1 cutText ["WARNING !!! This is un-official server of Origins Mod and does not represent the mod concepts or gameplay experience intended by the developers.", "PLAIN",15];
	player enableSimulation false;
};

//Publish Damage
	//player sidechat format["Processed damage for %1",_unit];
	//USEC_SystemMessage = format["CLIENT: %1 damaged for %2 (in vehicle: %5)",_unit,_damage,_isMinor,_isHeadHit,_inVehicle];
	//PublicVariable "USEC_SystemMessage";

/*
if (_isPlayer) then {
	if (_damage > 0.1) then {
		dayz_canDisconnect = false;
		dayzDiscoAdd = getPlayerUID player;
		publicVariable "dayzDiscoAdd";
		dayz_damageCounter = time;
		
		//Ensure Control is visible
		_display = uiNamespace getVariable 'DAYZ_GUI_display';
		_control = 	_display displayCtrl 1204;
		_control ctrlShow true;
	};
};
*/

if (_unit == player) then {
	if (_hit == "") then {
		if ((_source != player) and _isPlayer) then {
		//Enable aggressor Actions
		_canHitFree = 	player getVariable ["freeTarget",false];
		};
	};
};

//PVP Damage
_scale = 200;
if (_damage > 0.4) then {
	if (_ammo != "zombie") then {
		_scale = _scale + 50;
	};
	if (_isBossZ) then {
		_scale = _scale + 350;
	};
	if (_isHeadHit) then {
		_scale = _scale + 500;
	};
	if ((isPlayer _source) and !(player == _source)) then {
		_scale = _scale + 800;
		if (_isHeadHit) then {
			_scale = _scale + 500;
		};
	};
	switch (_type) do {
		case 1: {_scale = _scale + 200};
		case 2: {_scale = _scale + 200};
	};
	if (_unit == player) then {
		//Cause blood loss
		//Log Damage
		if (_weapon == "DMR") then { _scale = _scale / 1.4; _damage = _damage / 1.6; };
		//diag_log ("DAMAGE: player hit by " + typeOf _source + " in " + _hit + " with " + _ammo + " for " + str(_damage) + " scaled " + str(_damage * _scale) + "_type=" + str(_type) + "_scale=" + str(_scale) + "_weapon=" + str(_weapon));
		r_player_blood = r_player_blood - (_damage * _scale);
	};
};

//Record Damage to Minor parts (legs, arms)
if (_hit in USEC_MinorWounds) then {
	if (_ammo == "zombie") then {
		if (_isBossZ) then { _hit = "legs"; };
		if (_hit == "legs") then {
			[_unit,_hit,(_damage / 6)] call object_processHit;
		} else {
			[_unit,_hit,(_damage / 4)] call object_processHit;
		};
	} else {
		[_unit,_hit,(_damage / 2)] call object_processHit;
		//diag_log("object_processHittut");
	};
	if (_ammo == "") then {
		[_unit,_hit,_damage] call object_processHit;
	};
};


if (_unit == player) then {
//incombat
	_unit setVariable["startcombattimer", 1, false];	
};

if (_damage > 0.1) then {
	if (_unit == player) then {
		//shake the cam, frighten them!
		//player sidechat format["Processed bullet hit for %1 (should only be for me!)",_unit];
		1 call fnc_usec_bulletHit;
	};
	if (local _unit) then {
		_unit setVariable["medForceUpdate",true,true];
	};
};
if (_damage > 0.4) then {	//0.25
	/*
		BLEEDING
	*/		
	_wound = _hit call fnc_usec_damageGetWound;
	_isHit = _unit getVariable[_wound,false];
	if (_unit == player) then {	
		_rndPain = 		(random 10);
		_rndInfection = (random 500);
		_hitPain = 		(_rndPain < _damage);
		if ((_isHeadHit) or (_damage > 1.2 and _hitPain)) then {
			_hitPain = true;
		};
		_hitInfection = (_rndInfection < 1);
		//player sidechat format["HitPain: %1, HitInfection %2 (Damage: %3)",_rndPain,_rndInfection,_damage]; //r_player_infected
		if (_isHit) then {
			//Make hit worse
			if (_unit == player) then {
				r_player_blood = r_player_blood - 50;
			};
		};
		if (_hitInfection) then {
			//Set Infection if not already
			if (_unit == player) then {
				r_player_infected = true;
				player setVariable["USEC_infected",true,true];
			};
			
		};
		if (_hitPain) then {
			//Set Pain if not already
			if (_unit == player) then {
				r_player_inpain = true;
				player setVariable["USEC_inPain",true,true];
			};
		};
		if ((_damage > 1.5) and _isHeadHit) then {
			_id = [_source,"shothead"] spawn player_death;
		};
	};
	if(!_isHit) then {
		//Create Wound
		_unit setVariable[_wound,true,true];
		[_unit,_wound,_hit] spawn fnc_usc_damagBled;
		usecBIeed = [_unit,_wound,_hit];
		publicVariable "usecBIeed";

		//Set Injured if not already
		_isInjured = _unit getVariable["USEC_injured",false];
		if (!_isInjured) then {
			_unit setVariable["USEC_injured",true,true];
			if ((_unit == player) and (_ammo != "zombie")) then {
				dayz_sourceBleeding = _source;
			};
		};
		//Set ability to give blood
		_lowBlood = _unit getVariable["USEC_lowBlood",false];
		if (!_lowBlood) then {
			_unit setVariable["USEC_lowBlood",true,true];
		};
		if (_unit == player) then {
			r_player_injured = true;
		};
	};
};
if (_type == 1) then {
	/*
		BALISTIC DAMAGE		
	*/		
	if ((_damage > 0.01) and (_unit == player)) then {
		//affect the player
		[20,45] call fnc_usec_pitchWhine; //Visual , Sound
	};
	if (_damage > 4) then {
		//diag_log ("1DAMAGE: player hit by " + typeOf _source + " in " + _hit + " with " + _ammo + " for " + str(_damage) + " scaled " + str(_damage * _scale));
		//serious ballistic damage
		if (_unit == player) then {
			_id = [_source,"explosion"] spawn player_death;
		};
	} else {
		if (_damage > 2) then {
			//diag_log ("2DAMAGE: player hit by " + typeOf _source + " in " + _hit + " with " + _ammo + " for " + str(_damage) + " scaled " + str(_damage * _scale));
			_isCardiac = _unit getVariable["USEC_isCardiac",false];
			if (!_isCardiac) then {
				_unit setVariable["USEC_isCardiac",true,true];
				r_player_cardiac = true;
			};
		};
	};
};
if (_type == 2) then {
	/*
		HIGH CALIBRE
	*/
	if (_damage > 4) then {
		//serious ballistic damage
		//diag_log ("3DAMAGE: player hit by " + typeOf _source + " in " + _hit + " with " + _ammo + " for " + str(_damage) + " scaled " + str(_damage * _scale));
		if (_unit == player) then {
			_id = [_source,"shotheavy"] spawn player_death;
		};
	} else {
		if (_damage > 2) then {
			//diag_log ("4DAMAGE: player hit by " + typeOf _source + " in " + _hit + " with " + _ammo + " for " + str(_damage) + " scaled " + str(_damage * _scale));
			_isCardiac = _unit getVariable["USEC_isCardiac",false];
			if (!_isCardiac) then {
				_unit setVariable["USEC_isCardiac",true,true];
				r_player_cardiac = true;
			};
		};
	};
};

if (!_unconscious and !_isMinor and ((_damage > 2) or ((_damage > 0.5) and _isHeadHit))) then {
	//set unconsious
	[_unit,_damage] call fnc_usec_damageUnconscious;
	//diag_log("fnc_usec_damageUnconsciousTUT");
};