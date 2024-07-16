private ["_event", "_onLadder", "_inVehicle", "_isOk", "_primary", "_current", "_rifle", "_pistol", "_melee"];
_event = if (count _this > 1) then { _this select 3 } else { _this select 0 };
_findRifle = {
    private ["_return", "_primary"];
    _return = "";
    _primary = primaryWeapon player;
 
    if (_primary != "") then {
        if !(_primary in MeleeWeapons) then {
            _return = _primary;
        };
    };
    _dayz_onBack = player getVariable ["dayz_onBack","EMPTY"];
    if (_dayz_onBack != "EMPTY" && _return == "") then {
        if !(_dayz_onBack in MeleeWeapons) then {
            _return = _dayz_onBack;
        };
    };
    _return;
};
 
_findMelee = {
    private ["_return", "_primary"];
    _return = "";
    _primary = primaryWeapon player;
    if (_primary != "") then {
        if (_primary in MeleeWeapons) then {
            _return = _primary;
        };
    };
    _dayz_onBack = player getVariable ["dayz_onBack","EMPTY"];
    if (_dayz_onBack != "EMPTY" && _return == "") then {
        if (_dayz_onBack in MeleeWeapons) then {
            _return = _dayz_onBack;
        };
    };
 
    _return;
};
 
_findPistol = {
    private ["_return"];
    _return = "";
 
    {
        if (getNumber (configFile >> "CfgWeapons" >> _x >> "type") == 2) then {
            _return = _x;
        };
    } foreach (weapons player);
 
    _return;
};
 
_selectMuzzle = {
    private ["_return", "_wpn", "_muzzles"];
    _wpn = _this select 0;
    _muzzles = getArray(configFile >> "cfgWeapons" >> _wpn >> "muzzles");
 
    if (_muzzles select 0 != "this") then {
        _return = (_muzzles select 0);
    } else {
        _return = _wpn;
    };
 
    _return;
};
 
_clearActions = {
    if (s_player_equip_carry > -1) then {
        player removeAction s_player_equip_carry;
        s_player_equip_carry = -1;
    };
};
 
_switchPrimary = {
    private ["_primary", "_current"];
    _primary = primaryWeapon player;
    _current = currentWeapon player;
    _timer = 0;
 
    [] call _clearActions;
    if (_primary != "") then {
        _animState = animationState player;
 
        switch (true) do {
            case (_animState == "amovpknlmstpsraswrfldnon_gear" || _animState == "amovpercmstpsraswrfldnon_gear"): {
                player playMove "amovpknlmstpslowwrfldnon_amovpknlmstpsraswrfldnon";
                waitUntil { animationState player == "amovpknlmstpslowwrfldnon_amovpknlmstpsraswrfldnon" };
            };
            case (_animState == "amovpknlmstpsraswpstdnon_gear" || _animState == "amovpercmstpsraswpstdnon_gear"): {
                player playMove "amovpknlmstpslowwpstdnon_gear_amovpknlmstpsraswpstdnon";
                waitUntil { animationState player == "amovpknlmstpslowwpstdnon_gear_amovpknlmstpsraswpstdnon" };
            };
            case (["aidlpercmstpslowwrfldnon", _animState] call fnc_inString): {
                player playMove "amovpercmstpslowwrfldnon_amovpercmstpsraswrfldnon";
                waitUntil { animationState player == "amovpercmstpslowwrfldnon_amovpercmstpsraswrfldnon" };
            };
        };
        player removeWeapon _primary;
        if (_current != [] call _findPistol) then {
            _timeout = diag_tickTime + 2;
            _animArray = [
                "amovpercmstpsraswrfldnon_amovpercmstpsnonwnondnon",
                "amovpercmstpsraswrfldnon_amovpercmstpsraswpstdnon", 
                "amovpknlmstpsraswrfldnon_amovpknlmstpsraswpstdnon", 
                "amovppnemstpsraswrfldnon_amovppnemstpsnonwnondnon", 
                "amovppnemstpsraswrfldnon_amovppnemstpsraswpstdnon" 
            ];
 
            waitUntil { (animationState player) in _animArray || diag_tickTime >= _timeout };
            waitUntil { !((animationState player) in _animArray) || diag_tickTime >= _timeout };
        };
    };
    
    _dayz_onBack = player getVariable ["dayz_onBack","EMPTY"];
    if (_dayz_onBack != "EMPTY") then {
        player addWeapon _dayz_onBack;
        player selectWeapon ([_dayz_onBack] call _selectMuzzle);
    };
    
    if (_primary != "") then {
        player setVariable ["dayz_onBack", _primary, true];
    } else {
        player setVariable ["dayz_onBack", "EMPTY", true];
    };
 
    _primaryName = getText (configFile >> "CfgWeapons" >> _primary >> "displayName");
    _onbackName = getText (configFile >> "CfgWeapons" >> _dayz_onBack >> "displayName");
    
    if (_primaryName != "") then {
        DiagLog = format ["%3 switched from %1 (%4) to %2 (%5)", _primaryName, _onbackName, (name player), _primary, _dayz_onBack];
        publicVariable "DiagLog";
    } else {
        DiagLog = format ["%2 take %1 (%3) from back to gear", _onbackName, (name player), _dayz_onBack];
        publicVariable "DiagLog";
    };
    call dayz_meleeMagazineCheck;
};
 
_switchPrimaryUI = {
    private ["_primary", "_current"];
    _primary = primaryWeapon player;
    _current = currentWeapon player;
 
    [] call _clearActions;
 
    if (_primary != "") then {
        player removeWeapon _primary;
    };
 
    _dayz_onBack = player getVariable ["dayz_onBack","EMPTY"];
    if (_dayz_onBack != "EMPTY") then {
        player addWeapon _dayz_onBack;
 
        if (_primary == _current) then {
            player selectWeapon ([_dayz_onBack] call _selectMuzzle);
        };
    };
 
    if (_primary != "") then {
        player setVariable ["dayz_onBack", _primary, true];
    } else {
        player setVariable ["dayz_onBack","EMPTY", true];
    };
};
_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_inVehicle = (vehicle player != player);
_dayz_onBackActive = player getVariable ["dayz_onBackActive",false];
_isOK = (!_onLadder && !_inVehicle && !r_player_unconscious && !_dayz_onBackActive);
if (_isOK) then { player setVariable ["dayz_onBackActive", true, true] };
switch (_event) do {
    case "action": {
        if (_isOK) then {
            [] call _switchPrimary;
        };
    };
    case "gear": {
        [] call _switchPrimaryUI;
    };
    case "rifle": {
        if (_isOK) then {
            _rifle = [] call _findRifle;
            
            if (_rifle == "") then {
            _rifle = [] call _findMelee;
            };
 
            if (_rifle != "") then {
                _dayz_onBack = player getVariable ["dayz_onBack","EMPTY"];
                if (_rifle == _dayz_onBack) then {
                    [] call _switchPrimary;
                } else {
                    player selectWeapon ([_rifle] call _selectMuzzle);
                };
            } else { systemChat "Слот пустой.";};
        };
    };
    case "pistol": {
        if (_isOK) then {
            _pistol = [] call _findPistol;
 
            if (_pistol != "") then {
                player selectWeapon ([_pistol] call _selectMuzzle);
            } else { systemChat "Слот пустой.";};
        };
    };
    case "second": {
        if (_isOK) then {
            _dayz_onBack = player getVariable ["dayz_onBack","EMPTY"];
            if (_dayz_onBack != "EMPTY") then {
                [] call _switchPrimary;
            } else { systemChat "Слот пустой.";};
        };
    };
    case "melee": {
        if (_isOK) then {
            _melee = [] call _findMelee;
 
            if (_melee != "") then {
                _dayz_onBack = player getVariable ["dayz_onBack","EMPTY"];
                if (_melee == _dayz_onBack) then {
                    [] call _switchPrimary;
                } else {
                    player selectWeapon ([_melee] call _selectMuzzle);
                };
            } else { systemChat "Слот пустой.";};
        };
    };
};
if (_isOK) then {player setVariable ["dayz_onBackActive", false, true]};