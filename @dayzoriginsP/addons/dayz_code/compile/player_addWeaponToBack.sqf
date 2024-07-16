int_addWeaponToBack = {
_primaryWeapon = primaryWeapon player;
player removeWeapon _primaryWeapon;
player setVariable ["dayz_onBack", _primaryWeapon, true];
_onbackName = getText (configFile >> "CfgWeapons" >> _primaryWeapon >> "displayName");
DiagLog = format ["%2 added %1 (%3) to back", _onbackName, (name player), _primaryWeapon];
publicVariable "DiagLog";
};
 
_this call int_addWeaponToBack;