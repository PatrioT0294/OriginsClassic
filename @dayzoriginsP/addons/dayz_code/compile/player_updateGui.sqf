private["_display","_ctrlBlood","_ctrlBleed","_bloodVal","_ctrlFood","_ctrlThirst","_thirstVal","_foodVal","_ctrlTemp","_tempVal","_combatVal","_array","_ctrlEar","_ctrlEye","_ctrlHumanity","_ctrlCombat","_ctrlFracture","_visualText","_visual","_audibleText","_audible","_ctrlHumanityVal","_humanity","_ctrlhumanKills","_ctrlheroKills","_ctrlbanditKills","_ctrlzombieKills","_typeHumanity","_playerKills","_heroKills","_banditKills","_zombieKills","_primWeapon","_secWeapon","_ctrlHUDPrimWeapon","_ctrlHUDSecWeapon","_ctrlHUDHandgun","_ctrlHUDPainkiller","_ctrlHUDBandage","_handgun","_hasPainkiller","_hasBandage","_ctrlHUDMorphine","_ctrlHUDEarplugs","_hasMorphine","_earplugs"];
disableSerialization;

_foodVal = 		1 - (dayz_hunger / SleepFood);
_thirstVal = 	1 - (dayz_thirst / SleepWater);
_tempVal 	= 	1 - ((dayz_temperatur - dayz_temperaturmin)/(dayz_temperaturmax - dayz_temperaturmin));	// Normalise to [0,1]
_combatVal =	1 - dayz_combat; // May change later to be a range of red/green to loosely indicate 'time left in combat'

if (uiNamespace getVariable ['DZ_displayUI', 0] == 1) exitWith {
	_array = [_foodVal,_thirstVal];
	_array
};

_display = uiNamespace getVariable 'DAYZ_GUI_display';
_displayHK = uiNamespace getVariable 'DAYZ_HOTKEYS_display';

_ctrlBlood = 	_display displayCtrl 1300;
_ctrlBleed = 	_display displayCtrl 1303;
_bloodVal =		r_player_blood / r_player_bloodTotal;
_ctrlFood = 	_display displayCtrl 1301;
_ctrlThirst = 	_display displayCtrl 1302;
_ctrlTemp 	= 	_display displayCtrl 1306;					//TeeChange
_ctrlEar = 		_display displayCtrl 1304;
_ctrlEye = 		_display displayCtrl 1305;
_ctrlHumanity = _display displayCtrl 1308;
_ctrlHumanityVal = _display displayCtrl 1314;
_ctrlCombat = _display displayCtrl 1307;
_ctrlFracture = 	_display displayCtrl 1203;


//Food/Water/Blood
_ctrlBlood ctrlSetTextColor 	[(Dayz_GUI_R + (0.3 * (1-_bloodVal))),(Dayz_GUI_G * _bloodVal),(Dayz_GUI_B * _bloodVal), 0.5];
_ctrlFood ctrlSetTextColor 		[(Dayz_GUI_R + (0.3 * (1-_foodVal))),(Dayz_GUI_G * _foodVal),(Dayz_GUI_B * _foodVal), 0.5];
_ctrlThirst ctrlSetTextColor 	[(Dayz_GUI_R + (0.3 * (1-_thirstVal))),(Dayz_GUI_G * _thirstVal),(Dayz_GUI_B * _thirstVal), 0.5];
_ctrlTemp ctrlSetTextColor 		[(Dayz_GUI_R + (0.3 * (1-_tempVal))), (Dayz_GUI_G * _tempVal), _tempVal, 0.5];	// Color ranges from iceblue (cold) to red (hot)
_ctrlCombat ctrlSetTextColor		[(Dayz_GUI_R + (0.3 * (1-_combatVal))),(Dayz_GUI_G * _combatVal),(Dayz_GUI_B * _combatVal), 0.5];

//Hot keys
_hasPainkiller    = 'ItemPainkiller' in magazines player;
_hasBandage       = 'ItemBandage' in magazines player; 
_hasMorphine      = 'ItemMorphine' in magazines player;
_earplugs = player getVariable ["Earplugs","OFF"];
diag_log format["TEST DEBUG _earplugs %1",_earplugs];
_handgun = "";

_ctrlHUDPrimWeapon = _displayHK displayCtrl 1020;
_ctrlHUDSecWeapon = _displayHK displayCtrl 1021;
_ctrlHUDHandgun = _displayHK displayCtrl 1022;
_ctrlHUDPainkiller = _displayHK displayCtrl 1023;
_ctrlHUDBandage = _displayHK displayCtrl 1024;
_ctrlHUDMorphine = _displayHK displayCtrl 1025;
_ctrlHUDEarplugs = _displayHK displayCtrl 1026;

_primWeapon = getText (configFile >> 'CfgWeapons' >> (primaryWeapon player) >> 'picture');
_secWeapon = getText (configFile >> 'CfgWeapons' >> (player getVariable ["dayz_onBack","EMPTY"]) >> 'picture');
_ctrlHUDPrimWeapon ctrlSetText _primWeapon;
_ctrlHUDSecWeapon ctrlSetText _secWeapon;
		//Handgun Weapon
    {
      if ((getNumber(configFile >> 'cfgWeapons' >> _x >> 'Type')) == 2) then {
        _handgun = _x;
      };
    } forEach weapons player;
    if (_handgun == "") then {
      _ctrlHUDHandgun ctrlSetText("");
    } else {
      _ctrlHUDHandgun ctrlSetText(getText(configFile >> 'cfgWeapons' >> _handgun >> 'picture'));
    };
  //Painkiller
    if (_hasPainkiller) then {
      _ctrlHUDPainkiller ctrlSetText(gettext(configFile >> 'cfgMagazines' >> 'itempainkiller' >> 'picture'));
    } else {
      _ctrlHUDPainkiller ctrlSetText("");
    };
  //Bandage
    if (_hasBandage) then {
      _ctrlHUDBandage ctrlSetText(gettext(configFile >> 'cfgMagazines' >> 'itembandage' >> 'picture'));
    } else {
      _ctrlHUDBandage ctrlSetText("");
    };
				if (_hasMorphine) then {
      _ctrlHUDMorphine ctrlSetText(gettext(configFile >> 'cfgMagazines' >> 'itemmorphine' >> 'picture'));
    } else {
      _ctrlHUDMorphine ctrlSetText("");
    };
				if (_earplugs == "ON") then {
      _ctrlHUDEarplugs ctrlSetText("\z\addons\dayz_code\gui\ori_gui\headphones_en_ca.paa");
    } else {
      _ctrlHUDEarplugs ctrlSetText("\z\addons\dayz_code\gui\ori_gui\headphones_ca.paa");
    };

/*
//Kills
_ctrlhumanKills = _display displayCtrl 1309;
_ctrlheroKills = _display displayCtrl 1310;
_ctrlbanditKills= _display displayCtrl 1311;
_ctrlzombieKills= _display displayCtrl 1312;

_playerKills = player getVariable["playerKills", 0];
_heroKills = player getVariable["heroKills", 0];
_banditKills = player getVariable["banditKills_CHK", 0];
_zombieKills = player getVariable["zombieKills", 0];

_ctrlhumanKills ctrlSetText str(_playerKills);
_ctrlheroKills ctrlSetText str(_heroKills);
_ctrlbanditKills ctrlSetText str(_banditKills);
_ctrlzombieKills ctrlSetText str(_zombieKills);


//Hot keys
_hasPainkiller  = 'ItemPainkiller' in magazines player;
_hasBandage     = 'ItemBandage' in magazines player;

//_dayz_onBack = player getVariable ["dayz_onBack","EMPTY"];
//_ctrl_onBack = _displayHK displayCtrl 1021;
_test_prim = gettext(configFile >> 'cfgWeapons' >> (primaryWeapon player) >> 'picture')
	//Primary Weapon
				diag_log format["TEST DEBUG primaryWeapon PICTURE %1",_test_prim];
    //(_displayHK displayCtrl 1020) ctrlSetText(gettext(configFile >> 'cfgWeapons' >> (primaryWeapon player) >> 'picture'));
				
		//Seccond Primary Weapon
		//if (_dayz_onBack != '') then {gettext(configFile >> 'cfgWeapons' >> dayz_onBack >> 'picture')
		//	_ctrl_onBack = ctrlSetText
				\\(_displayHK displayCtrl 1021) ctrlSetText(gettext(configFile >> 'cfgWeapons' >> dayz_onBack >> 'picture'));
				
		//Handgun Weapon
    {
      if ((getNumber (configFile >> 'cfgWeapons' >> _x >> 'Type')) == 2) exitWith {
        (_displayHK displayCtrl 1022) ctrlSetText(getText(configFile >> 'cfgWeapons' >> _x >> 'picture'));
      };
    } forEach weapons player;

  //Painkiller
    if (_hasPainkiller) then {
      (_displayHK displayCtrl 1023) ctrlSetText(gettext(configFile >> 'cfgMagazines' >> 'itempainkiller' >> 'picture'));
    };

  //Bandage
    if (_hasBandage) then {
      (_displayHK displayCtrl 1024) ctrlSetText(gettext(configFile >> 'cfgMagazines' >> 'itembandage' >> 'picture'));
    };
*/

//Humanity
_humanity = player getVariable['humanity', 0];

_ctrlHumanityVal ctrlSetText str(_humanity);
	
_typeHumanity = "";

if (_humanity <= -15000)		then { _typeHumanity = "\z\addons\dayz_code\gui\ori_gui\status_humanity_inside_bandit_3.paa" };
if (_humanity > -15000 and _humanity <= -11000)		then { _typeHumanity = "\z\addons\dayz_code\gui\ori_gui\status_humanity_inside_bandit_3half.paa" };
if (_humanity > -11000 and _humanity <= -6500)		then { _typeHumanity = "\z\addons\dayz_code\gui\ori_gui\status_humanity_inside_bandit_2.paa" };
if (_humanity > -6500 and _humanity <= -4000)		then { _typeHumanity = "\z\addons\dayz_code\gui\ori_gui\status_humanity_inside_bandit_2half.paa" };
if (_humanity > -4000 and _humanity <= 2000)		then { _typeHumanity = "\z\addons\dayz_code\gui\ori_gui\status_humanity_inside_bandit_1.paa" };
if (_humanity >= 2001 and _humanity <= 2889)		then { _typeHumanity = "\z\addons\dayz_code\gui\ori_gui\st_humanity_survivor.paa" };
if (_humanity >= 2900 and _humanity < 5000)	then { _typeHumanity = "\z\addons\dayz_code\gui\ori_gui\status_humanity_inside_hero_1.paa" };
if (_humanity >= 5000 and _humanity < 6500) then { _typeHumanity = "\z\addons\dayz_code\gui\ori_gui\status_humanity_inside_hero_2half.paa" };
if (_humanity >= 6500 and _humanity < 11000)		then { _typeHumanity = "\z\addons\dayz_code\gui\ori_gui\status_humanity_inside_hero_2.paa" };
if (_humanity >= 11000 and _humanity < 15000)		then { _typeHumanity = "\z\addons\dayz_code\gui\ori_gui\status_humanity_inside_hero_3half.paa" };
if (_humanity >= 15000)		then { _typeHumanity = "\z\addons\dayz_code\gui\ori_gui\status_humanity_inside_hero_3.paa" };
_ctrlHumanity ctrlSetText _typeHumanity;

/*
switch true do
{
	case (_humanity >= 2001 and _humanity <= 2889)://survivor
				{
								_typeHumanity = "\z\addons\dayz_code\gui\ori_gui\st_humanity_survivor.paa";
				};

	case (_humanity >= 2900 and _humanity < 5000)://hero 1
				{
								_typeHumanity = "\z\addons\dayz_code\gui\ori_gui\status_humanity_inside_hero_1.paa";
				};
	case (_humanity >= 5000 and _humanity < 6500)://hero 2 half
				{
								_typeHumanity = "\z\addons\dayz_code\gui\ori_gui\status_humanity_inside_hero_2half.paa";
				};			
	case (_humanity >= 6500 and _humanity < 11000)://hero 2
				{
								_typeHumanity = "\z\addons\dayz_code\gui\ori_gui\status_humanity_inside_hero_2.paa";
				};
	case (_humanity >= 11000 and _humanity < 15000)://hero 3 half
				{
								_typeHumanity = "\z\addons\dayz_code\gui\ori_gui\status_humanity_inside_hero_3half.paa";
				};
	case (_humanity >= 15000)://hero 3
				{
								_typeHumanity = "\z\addons\dayz_code\gui\ori_gui\status_humanity_inside_hero_3.paa";
				};
	case (_humanity > -4000 and _humanity <= 2000)://bandit 1
				{
								_typeHumanity = "\z\addons\dayz_code\gui\ori_gui\status_humanity_inside_bandit_1.paa";
				};
	case (_humanity > -6500 and _humanity <= -4000)://bandit 2 half
				{
								_typeHumanity = "\z\addons\dayz_code\gui\ori_gui\status_humanity_inside_bandit_2half.paa";
				};			
	case (_humanity > -11000 and _humanity <= -6500)://bandit 2
				{
								_typeHumanity = "\z\addons\dayz_code\gui\ori_gui\status_humanity_inside_bandit_2.paa";
				};
	case (_humanity > -15000 and _humanity <= -11000)://bandit 3 half
				{
								_typeHumanity = "\z\addons\dayz_code\gui\ori_gui\status_humanity_inside_bandit_3half.paa";
				};
	case (_humanity <= -15000)://bandit 3
				{
								_typeHumanity = "\z\addons\dayz_code\gui\ori_gui\status_humanity_inside_bandit_3.paa";
				};
	default
    {
        _typeHumanity = "\z\addons\dayz_code\gui\ori_gui\st_humanity_survivor.paa";
    };
};
*/


/*
	Blood: round((r_player_blood / 2) / 1000) = _bloodLvl (6 = full, 1 = empty)
	Thirst: round(_thirstVal / 0.25) = _thirstLvl (4 = full, 0 = empty)
	Hunger: round(_foodVal / 0.25) = _foodLvl (4 = full, 0 = empty)
	Temp: round(dayz_temperatur) = tempLvl (>= 36 = full <= 28 = empty)
*/

_blood = "";
_thirst = "";
_food = "";
_temp = "";
_tempImg = 0;
_bloodLvl = round((r_player_blood / 2) / 1000);
_thirstLvl = round(_thirstVal / 0.25);
_foodLvl = round(_foodVal / 0.25);
_tempLvl = round(dayz_temperatur);

/*
diag_log format["DEBUG: bloodlvl: %1 r_player_blood: %2 bloodval: %3",_bloodLvl, r_player_blood, _bloodVal];
diag_log format["DEBUG: thirstlvl: %1 dayz_thirst: %2 thirstval: %3",_thirstLvl, dayz_thirst, _thirstVal];
diag_log format["DEBUG: foodlvl: %1 dayz_hunger: %2 foodval: %3",_foodLvl, dayz_hunger, _foodVal];
diag_log format["DEBUG: templvl: %1 dayz_temperatur: %2 tempval: %3",_tempLvl, dayz_temperatur, _tempVal];
*/

if (_bloodLvl <= 0) then { 
	_blood = "\z\addons\dayz_code\gui\status_blood_inside_1_ca.paa";
	} else {
	_blood = "\z\addons\dayz_code\gui\status_blood_inside_" + str(_bloodLvl) + "_ca.paa";
	};
	
if (_thirstLvl < 0) then { _thirstLvl = 0 };
_thirst = "\z\addons\dayz_code\gui\status_thirst_inside_" + str(_thirstLvl) + "_ca.paa";

if (_foodLvl < 0) then { _foodLvl = 0 };
_food = "\z\addons\dayz_code\gui\status_food_inside_" + str(_foodLvl) + "_ca.paa";

if ( _tempLvl >= 36 )							then { _tempImg = 4 };
if ( _tempLvl > 33 and _tempLvl < 36 )			then { _tempImg = 3 };
if ( _tempLvl >= 30 and _tempLvl <= 33 )		then { _tempImg = 2 };
if ( _tempLvl > 28 and _tempLvl < 30 )			then { _tempImg = 1 };
if ( _tempLvl <= 28 )							then { _tempImg = 0 };

_temp = "\z\addons\dayz_code\gui\status_temp_" + str(_tempImg) + "_ca.paa";

_ctrlBlood ctrlSetText _blood;
_ctrlThirst ctrlSetText _thirst;
_ctrlFood ctrlSetText _food;
_ctrlTemp ctrlSetText _temp;

/*
	Visual:
*/
_visualtext = "";
_visual = round((dayz_disVisual / 100) * 4) min 5;
if (_visual > 0) then {_visualtext = "\z\addons\dayz_code\gui\val_" + str(_visual) + "_ca.paa"};
_ctrlEye ctrlSetText _visualtext;

/*
	Audible:
*/
_audibletext = "";
_audible = round((dayz_disAudial / 50) * 4) min 5;
if (_audible > 0) then {_audibletext = "\z\addons\dayz_code\gui\val_" + str(_audible) + "_ca.paa"};
_ctrlEar ctrlSetText _audibletext;

/*
	Fracture:
*/
if (!canStand player) then {
	if (!(ctrlShown _ctrlFracture)) then {
		r_fracture_legs = true;
		_ctrlFracture ctrlShow true;
	};
};

/*
	Flashing:
*/
if (_combatVal == 0) then {
	_ctrlCombat call player_guiControlFlash;
};

if (_bloodVal < 0.2) then {
	_ctrlBlood call player_guiControlFlash;
};

if (_thirstVal < 0.2) then {
	_ctrlThirst call player_guiControlFlash;
};

if (_foodVal < 0.2) then {
	_ctrlFood call player_guiControlFlash;
};

if (_tempVal > 0.8) then {	//TeeChange
	_ctrlTemp call player_guiControlFlash;
} else { 
	_ctrlTemp ctrlShow true;
};

if (r_player_injured) then {
	_ctrlBleed call player_guiControlFlash;
};

/*
_humanity = player getVariable["humanity",0];
_guiHumanity = 0;
if(_humanity != dayz_lastHumanity) then {
	if (_humanity > 0) then {
		_humanity = _humanity min 5000;
		_guiHumanity = (round((_humanity / 5000) * 5) + 5);
	} else {
		_humanity = _humanity max -20000;
		_guiHumanity = 5 - (round(-(_humanity / 20000) * 4));
	};
	dayz_lastHumanity = _humanity;
	dayz_guiHumanity = _guiHumanity;
	_humanityText = "\z\addons\dayz_code\gui\humanity_" + str(_guiHumanity) + "_ca.paa";
	_ctrlHumanity ctrlSetText _humanityText;
};
*/

_array = [_foodVal,_thirstVal];
_array