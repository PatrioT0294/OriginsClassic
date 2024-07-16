private["_inventory","_wpns","_mags","_idc","_isOK","_val","_item","_x","_backweap"];
_inventory = _this;
if (count _inventory > 0) then {
	_wpns = _inventory select 0;
	_mags = _inventory select 1;
 if (count _inventory > 2) then {
    _backweap = _inventory select 2;
    player setVariable ["dayz_onBack",_backweap,true];
			} else {
							player setVariable ["dayz_onBack","EMPTY",true];
			};
	//Add inventory
	{
		private["_item","_val"];
		//is it an array?
		_idc = 109;
		if (typeName _x == "ARRAY") then {
			_item = _x select 0;
			_val = 	_x select 1;
		} else {
			_item = _x;
			_val = -1;
		};
		//Is item legal?
		_isOK = 	isClass(configFile >> "CfgMagazines" >> _item);
		if (_isOK) then {
			if (_val != -1) then {
				player addMagazine [_item,_val];
			} else {
				player addMagazine _item;
			};
		};
		_idc = _idc + 1;
	} forEach _mags;
	
	//Add weapons
	{
		_isOK = 	isClass(configFile >> "CfgWeapons" >> _x);
		//Is item legal?
		if (_isOK) then {
			player addWeapon _x;
		};
	} forEach _wpns;
};