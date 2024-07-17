#define VSoft		0
#define VArmor		1
#define VAir		2

#define private		0
#define protected		1
#define public		2

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define EAST 0 // (Russian)

#include "basicdefines.hpp"

class CfgPatches {
	class dayz_code {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"dayz_equip","dayz_weapons","CAMisc3","CABuildingParts","CABuildingParts_Signs","CAStructuresHouse","CAStructuresLand_Ind_Stack_Big","CAStructures_Misc_Powerlines","CAStructures","CABuildings","CABuildings2","Ind_MalyKomin","CAStructures_A_CraneCon","CAStructures_Mil","CAStructures_Nav","CAStructures_Rail","A_Crane_02","A_TVTower","CAStructures_Railway","CAStructuresHouse","CAStructuresHouse_HouseBT","CAWeapons","osshdy","ori_scrapTank","ori_ScrapBuggy","ori_smallRaft","ori_bigRaft","ori_pragaCopter","rth_small_tent","ori_titanic","ori_vil_pack","ori_dc3","base_buildings","origins_pack_cars","ori_flying_fortress","ori_submarine","vil_ori_autogyro"};
	};
};

class CfgMods
{
	class DayZ
	{
		dir = "DayZ";
		name = "DayZ";
		picture = "z\addons\dayz_code\gui\Origins_logo_ca.paa";
		hidePicture = 0;
		hideName = 0;
		action = "http://www.dayzOrigins.com";
		version = "1.7.8.5"; 
		hiveVersion = 0.96;
	};
};

class CfgAddons
{
	access = 1;
	class PreloadBanks
	{
	};
	class PreloadAddons
	{
		class dayz
		{
			list[] = {"dayz_code","dayz","dayz_equip","dayz_weapons"};
		};
	};
};

class RLNT_RscText
{
    access = 0;
    idc = -1;
    type = CT_STATIC;
    style = 0;
    linespacing = 1;
    colorBackground[] = {0,0,0,0};
    colorText[] = {1,1,1,1};
    text = "";
    shadow = 0;
	font = "Zeppelin32";
	sizeEx = 0.0173 * SafezoneH;
    fixedWidth = 0;
    x = 0;
    y = 0;
    h = 0;
    w = 0;
};

class RLNT_RscPicture
{
				access = 0;
				type = 0;
				idc = -1;
				colorBackground[] = {0,0,0,0};
				colorText[] = {1,1,1,1};
				font = "Zeppelin32";
				sizeEx = 0.0173 * SafezoneH;
				lineSpacing = 0;
				text = "";
				style = "0x30 + 0x100 + 0x800";
				x = 0;
				y = 0;
				w = 0.2;
				h = 0.15;
};

class RLNT_RscButton_Static
{
	access = 0;
	type = 1;
	text = "";
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {0.45,0.45,0.45,1};
	colorBackgroundDisabled[] = {0,0,0,0.5};
	colorBackgroundActive[] = {-1,-1,-1,-1};
	colorFocused[] = {-1,-1,-1,-1};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,1};
	soundEnter[] = {"\ca\ui\data\sound\onover",0.09,1};
	soundPush[] = {"\ca\ui\data\sound\new1",0,0};
	soundClick[] = {"\ca\ui\data\sound\onclick",0.07,1};
	soundEscape[] = {"\ca\ui\data\sound\onescape",0.09,1};
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "Zeppelin32";
	sizeEx = 0.0173 * SafezoneH;
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};

class RLNT_RscButton_Dynamic
{
	access = 0;
	type = 1;
	text = "";
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {0.45,0.45,0.45,1};
	colorBackgroundDisabled[] = {0,0,0,0.5};
	colorBackgroundActive[] = {0.75,0.75,0.75,1};
	colorFocused[] = {0.75,0.75,0.75,1};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,1};
	soundEnter[] = {"\ca\ui\data\sound\onover",0.09,1};
	soundPush[] = {"\ca\ui\data\sound\new1",0,0};
	soundClick[] = {"\ca\ui\data\sound\onclick",0.07,1};
	soundEscape[] = {"\ca\ui\data\sound\onescape",0.09,1};
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "Zeppelin32";
	sizeEx = 0.0173 * SafezoneH;
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};

class RLNT_RscFrame
{
	type = 0;
	idc = -1;
	style = 64;
	shadow = 2;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "Zeppelin32";
	SizeEx = 0.0173 * SafezoneH;
	text = "";
};

class RscPictureGUI
{
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.38,0.63,0.26,0.75};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	style = "0x30 + 0x100 + 0x800";
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};

class RscTextGUIK {
	type = 0;
	idc = -1;
	style = 0x02;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1, 1, 1, 0.5};
	//color[] = {1, 1, 1, 0.5};
	font = "TahomaB";
	size = 0.03;
	sizeEx = 0.03;
	x = 0;
	y = 0;
	w = 0.1;
	h = 0.2;
};
class RscStructuredText {
	class Attributes;
};
class RscStructuredTextGUI: RscStructuredText
{
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	class Attributes: Attributes
	{
		align = "center";
		valign = "middle";
	};
};

#include "cfgMoves.hpp"
#include "rscTitles.hpp"
#include "RscDisplayDebriefing.hpp"
//#include "RscDisplayGear.hpp"
#include "RscDisplayMPInterrupt.hpp"
#include "RscDisplayMultiplayerSetup.hpp"
#include "cfgVehicles.hpp"
#include "cfgLoot.hpp"

class CfgWrapperUI {
	class Cursors {
		class Arrow {
			texture = "\origins_pack\ui\mouse_cursor.paa";
			width = 32;
			height = 32;
			hotspotX = 0.1875;
			hotspotY = 0.03125;
		};
	};
};
class CfgSurvival {
	class Inventory {
		class Default {
			//weapons[] = {"Makarov"};
			magazines[] = {"ItemBandage","ItemPainkiller","8Rnd_9x18_Makarov"};
			weapons[] = {"Makarov","ItemFlashlight"};
			backpackWeapon = "";
			backpack = "";
		};
	};
	class Meat {
		class Default {
			yield = 1;
		};
		class Cow: Default {
			yield = 6;
		};
		class Cow01: Cow {};
		class Cow02: Cow {};
		class Cow03: Cow {};
		class Cow04: Cow {};
		class Goat: Default {
			yield = 4;
		};
		class Sheep: Default {
			yield = 3;
		};
		class WildBoar: Default {
			yield = 2;
		};
	};
};
class CfgActions {
	class None;
	class Rearm : None { show = 0; };
	class Heal : None { show = 0; };
	class HealSoldier : None { show = 0; };
	class FirstAid : None {	show = 0; };
};
class CfgGlasses {
	class None;
	class b_TacticalGlasses : None {};
	class Barett : None {};
	class Barett_g : None {};
	class Bdu_cap : None {};
	class Bdu_cap_g : None {};
	class BlackSun_sof_w : None {};
	class dive_mask : None {};
	class gasmask : None {};
	class gasmask_helmet : None {};
	class gasmask_helmet2 : None {};
	class gasmask_red : None {};
	class gasmask2 : None {};
	class goggles_winter : None {};
	class headset : None {};
	class headset_g : None {};
	class Kevlar_Helmet : None {};
	class Kevlar_Helmet_g : None {};
	class None_sof_w : None {};
	class pilot_mask : None {};
	class pilot_mask_v : None {};
	class pilot_v : None {};
	class Pro_Helmet : None {};
	class Pro_Helmet_2 : None {};
	class Pro_Helmet_g : None {};
	class RedSun_sof_w : None {};
	class skull_cap : None {};
	class skull_cap2 : None {};
	class taliban_hat_shadow : None {};
	class US_black_beret : None {};
	class US_green_beret : None {};
	class wdl_helmet : None {};
};
class CfgInGameUI
{
    class PeripheralVision
    {
        cueColor[] = {0,0,0,0};
        cueFriendlyColor[] = {0,0,0,0};
        cueEnemyColor[] = {0,0,0,0};
    };
};
class CfgEnvSounds
{
	class Sea
	{
		sound[] = {"\ca\Sounds\Enviroment\wave_break_01",0.01,1};
		volume = "sea";
		name = "Sea";
		soundNight[] = {"\ca\Sounds\Enviroment\wave_break_02",0.01,1};
	};
};
class CfgBuildingLoot {
	class Default {
		zombieChance = 0;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_policeman","z_Boss_zed","ori_zombie1","ori_zombie1n","ori_zombie2","ori_zombie2n","ori_zombie3","ori_zombie3n","ori_zombie4","ori_zombie4n","ori_zombie5","ori_zombie5n","ori_zombie6","ori_zombie6n","ori_zombie7","ori_zombie7n","ori_zombie8","ori_zombie8n","ori_zombie1L","ori_zombie1Ln","ori_zombie2L","ori_zombie2Ln","ori_zombie3L","ori_zombie3Ln","ori_zombie4L","ori_zombie4Ln","ori_zombie5L","ori_zombie5Ln","ori_zombie6L","ori_zombie6Ln","ori_zombie7L","ori_zombie7Ln","ori_zombie8L","ori_zombie8Ln","ori_vil_zombie_woman1","ori_vil_zombie_woman2","ori_vil_zombie_woman3","ori_vil_zombie_woman4","z_suit1","z_suit2","z_worker1","z_worker2","z_worker3","z_doctor","z_teacher","z_hunter","z_villager1","z_villager2","z_villager3","z_priest","z_soldier","z_soldier_pilot","z_soldier_heavy","ori_pozarnik"};
		
		lootChance = 0;
		lootPos[] = {};
		itemType[] = {};
		itemChance[] = {};
		hangPos[] = {};
		vehPos[] = {};
	};
	class Master {
		weapons[] = {
			"SMAW",
			"Javelin",
			"G36C",
			"Stinger"
		};
	};
	class Residential: Default {
		zombieChance = 0.3;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3","ori_zombie1","ori_zombie2","ori_zombie3","ori_zombie4","ori_zombie5","ori_zombie6","ori_zombie7","ori_zombie8","ori_zombie1L","ori_zombie2L","ori_zombie3L","ori_zombie4L","ori_zombie5L","ori_zombie6L","ori_zombie7L","ori_zombie8L","ori_vil_zombie_woman1","ori_vil_zombie_woman2","ori_vil_zombie_woman3","ori_vil_zombie_woman4","ori_zombie1Ln","ori_zombie2n","ori_zombie3n","ori_zombie3Ln","ori_zombie7Ln","ori_zombie8n"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"ItemSodaMdew","magazine"},
			{"ItemWatch","generic"},
			{"ItemCompass","generic"},
			{"ItemMap","weapon"},
			{"Makarov","weapon"},
			{"Colt1911","weapon"},
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"","generic"},
			{"LeeEnfield","weapon"},
			{"revolver_EP1","weapon"},
			{"CZ_VestPouch_EP1","object"},
			{"DZ_CivilBackpack_EP1","object"},
			{"DZ_ALICE_Pack_EP1","object"},
			{"Winchester1866","weapon"},
			{"WeaponHolder_ItemRestTent","object"},
			{"","military"},
			{"","trash"},
			{"Crossbow","weapon"},
			{"Binocular","weapon"},
			{"Skin_Sniper1_DZ","magazine"},
			{"MR43","weapon"},
			{"Sa61_EP1","weapon"},
			{"ItemBattery","magazine"},
			{"ItemPin","magazine"},
			{"ItemBpt_b1","magazine"},
			{"ItemBpt_h1","magazine"},
			{"origins_school_1","object"},
			{"origins_school_2","object"},
			{"origins_school_3","object"}
		};
		itemChance[] =	{
			0.01,	//ItemSodaMdew
			0.15,	//ItemWatch
			0.05,	//ItemCompass
			0.01,	//ItemMap
			0.13,	//Makarov
			0.05,	//Colt1911
			0.03,	//ItemFlashlight
			0.08,	//ItemKnife
			0.06,	//ItemMatchbox
			0.8,		//generic
			0.02,	//LeeEnfield
			0.04,	//revolver_EP1
			0.03,	//CZ_VestPouch_EP1
			0.03,	//DZ_CivilBackpack_EP1
			0.01,	//DZ_ALICE_Pack_EP1
			0.01,	//Winchester1866
			0.01,	//WeaponHolder_ItemRestTent
			0.03,	//military
			0.4,	//trash
			0.06,	//Crossbow
			0.06,	//Binocular
			0.01,	//Skin_Sniper1_DZ
			0.03,	//MR43
			0.05,	//Sa61_EP1
			0.08,	//ItemBattery
			0.08,	//ItemPin
			0.05,	//ItemBpt_b1
			0.05,	//ItemBpt_h1
			0.03,	//origins_school_1
			0.03,	//origins_school_2
			0.03	//origins_school_3
		};		
	};
	class NoviShop: Default {
		zombieChance = 0.3;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3","ori_zombie1","ori_zombie2","ori_zombie3","ori_zombie4","ori_zombie5","ori_zombie6","ori_zombie7","ori_zombie8","ori_zombie1L","ori_zombie2L","ori_zombie3L","ori_zombie4L","ori_zombie5L","ori_zombie6L","ori_zombie7L","ori_zombie8L","ori_vil_zombie_woman1","ori_vil_zombie_woman2","ori_vil_zombie_woman3","ori_vil_zombie_woman4","ori_zombie1Ln","ori_zombie2n","ori_zombie3n","ori_zombie3Ln","ori_zombie7Ln","ori_zombie8n"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"Binocular","weapon"},
			{"ItemMap","weapon"},
			{"","newGenShop"},
			{"ItemCompass","weapon"},
			{"ItemWatch","weapon"},
			{"ItemKnife","weapon"}
		};
		itemChance[] =	{
			0.1,
			0.1,
			0.9,
			0.1,
			0.1,
			0.1
		};
	};
	
	class Office: Residential {
		maxRoaming = 5;
		zombieClass[] = {"z_suit1","z_suit2","ori_zombie2Ln","ori_zombie5n","ori_zombie3n","ori_zombie3Ln"};
	};
	
	class TavianaDZ: Default {
		zombieChance = 0.9;
		zombieClass[] = {"z_soldier","z_soldier_heavy","ori_zombie6Ln"};
		minRoaming = 1;
		maxRoaming = 5;
		lootChance = 0.2;
		lootPos[] = {};
		itemType[] =	{
			{"AK_74","weapon"},
			{"AKS_74","weapon"},
			{"AK_74_GL","weapon"},
			{"AK_74_GL_kobra","weapon"},
			{"AK_107_kobra","weapon"},
			{"AK_107_GL_kobra","weapon"},
			{"AK_107_pso","weapon"},
			{"AKS_74_kobra","weapon"},
			{"AKS_74_pso","weapon"},
			{"AKS_74_UN_kobra","weapon"},
			{"SVD_NSPU_EP1","weapon"},
			{"bizon","weapon"},
			{"M249_EP1_DZ","weapon"},
			{"M60A4_EP1_DZ","weapon"},
			{"MakarovSD","weapon"},
			{"M4SPR","weapon"},
			{"Sa58V_RCO_EP1","weapon"},
			{"Sa58V_CCO_EP1","weapon"},
			{"M16A4_GL","weapon"},
			{"M16A4_ACG_GL","weapon"},
			{"M4A1_Aim_camo","weapon"},
			{"RPK_74","weapon"},
			{"M4A1_RCO_GL","weapon"},
			{"M4A1_HWS_GL_SD_Camo","weapon"},
			{"M4A1_HWS_GL","weapon"},
			{"m16a4","weapon"},
			{"AK_47_S","weapon"},
			{"SVD","weapon"},
			{"M4A3_RCO_GL_EP1","weapon"},
			{"PK_DZ","weapon"},
			{"","medical"},
			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_Patrol_Pack_EP1","object"},
			{"","trash"},
			{"DZ_Backpack_EP1","object"},
			{"","trash"},
			{"ItemFlashlightRed","military"},
			{"ItemKnife","military"},
			{"ItemGPS","weapon"},
			{"","generic"},
			{"WeaponHolder_ItemRestTent","object"},
			{"ItemBpt_b2","magazine"},
			{"ItemBpt_h2","magazine"}
		};
		itemChance[] =	{
			0.10,	//AK_74
			0.10,	//AKS_74
			0.04,	//AK_74_GL
			0.04,	//AK_74_GL_kobra
			0.03,	//AK_107_kobra
			0.03,	//AK_107_GL_kobra
			0.01,	//AK_107_pso
			0.03, 	//AKS_74_kobra
			0.02,	//AKS_74_pso
			0.03,	//AKS_74_UN_kobra
			0.01,	//SVD_NSPU_EP1
			0.04,	//bizon
			0.01,	//M249_EP1 
			0.01,	//M60A4_EP1
			0.05,	//MakarovSD
			0.01,	//M4SPR
			0.01,	//Sa58V_RCO_EP1
			0.01,	//Sa58V_CCO_EP1
			0.01,	//M16A4_GL
			0.01,	//M16A4_ACG_GL
			0.01,	//M4A1_Aim_camo
			0.01,	//RPK_74
			0.03,	//M4A1_RCO_GL
			0.02,	//M4A1_HWS_GL_SD_Camo
			0.03,	//M4A1_HWS_GL
			0.05,	//m16a4
			0.05,	//AK_47_S
			0.01,	//SVD
			0.03,	//M4A3_RCO_GL_EP1
			0.01,	//PK
			0.30,	//medical
			0.05,	//DZ_Assault_Pack_EP1
			0.05,	//DZ_Patrol_Pack_EP1
			0.90,	//trash
			0.01,	//DZ_Backpack_EP1
			0.90,	//trash
			0.04,	//ItemFlashlightRed
			0.12,	//ItemKnife
			0.02,	//ItemGPS
			0.80,	//generic41
			0.02,	//WeaponHolder_ItemRestTent
			0.01,
			0.01
		};
	};
	class IndNovistr : Default {
		zombieChance = 0.6;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3","ori_zombie7n","ori_zombie8Ln"};
		maxRoaming = 5;
		lootChance = 0.3;
		lootPos[] = {};
		itemType[] = {
			{"WeaponHolder_PartGeneric","object"},
			{"","generic"},
			{"WeaponHolder_PartFueltank","object"},
			{"ItemKnife","military"},
			{"","trash"},
	//		{"PartPipe","magazine"},
			{"ItemCementBag","magazine"},
			{"","trash"},
	//		{"ItemTow","weapon"},
	//		{"PartAluminium","magazine"},
			{"ItemHose","weapon"},
	//		{"PartChipB","magazine"},
			{"","trash"},
	//		{"ItemScrews","magazine"},
	//		{"PartBlockV","magazine"},
	//		{"ItemBpt_wt","magazine"},
	//		{"ItemBlueSpr","magazine"},
	//		{"ItemGreenSpr","magazine"},
	//		{"ItemPinkSpr","magazine"},
	//		{"ItemBlackSpr","magazine"},
	//		{"ItemRedSpr","magazine"},
	//		{"ItemYellowSpr","magazine"},
	//		{"ItemWhiteSpr","magazine"},
	//		{"ItemSaw","weapon"},
	//		{"ItemHammer","weapon"},
	//		{"ItemPliers","weapon"},
	//		{"WeaponHolder_ItemCrane","object"}
		};
		itemChance[] =	{
			0.04,	//{"WeaponHolder_PartGeneric","object"},
			0.15,	//{"","generic"},
			0.04,	//{"WeaponHolder_PartFueltank","object"},
			0.05,	//{"ItemKnife","weapon"},
			0.35,	//{"","trash"},
		//	0.04,	//{"PartPipe","magazine"},
			0.04,	//{"ItemCementBag","magazine"},
			0.25,	//{"","trash"},
		//	0.01,	//{"ItemTow","weapon"},
		//	0.05,	//{"PartAluminium","magazine"},
			0.01,	//{"ItemHose","weapon"}
		//	0.05,	//{"PartChipB","magazine"},
			0.2,	//{"","trash"},
		//	0.02,	//{"ItemScrews","magazine"},
		//	0.02,	//PartBlockV
		//	0.02,	//ItemBpt_wt
		//	0.07,	//{"ItemBlueSpr","magazine"},
		//	0.07,	//{"ItemGreenSpr","magazine"},
		//	0.07,	//{"ItemPinkSpr","magazine"},
		//	0.07,	//{"ItemBlackSpr","magazine"},
		//	0.07,	//{"ItemRedSpr","magazine"},
		//	0.07,	//{"ItemYellowSpr","magazine"},
		//	0.07,	//{"ItemWhiteSpr","magazine"},
		//	0.02,	//{"ItemSaw","weapon"},
		//	0.02,	//{"ItemHammer","weapon"},
		//	0.02,	//{"ItemPliers","weapon"},
		//	0.02	//{"WeaponHolder_ItemCrane","object"}			
		};
	};
	class IndustrialNew : Default {
		zombieChance = 0.6;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3","ori_zombie7n","ori_zombie8Ln"};
		maxRoaming = 2;
		lootChance = 0.2;
		lootPos[] = {};
		itemType[] = {
			{"WeaponHolder_PartGeneric","object"},
			{"","generic"},
			{"WeaponHolder_PartFueltank","object"},
			{"WeaponHolder_PartEngine","object"},
			{"ItemKnife","military"},
			{"WeaponHolder_PartScrap","object"},
			{"","military"},
		//	{"PartPipe","magazine"},
			{"ItemCementBag","magazine"},
			{"ItemBpt_g_s","magazine"},
			{"","trash"},
			{"ItemBpt_g_b","magazine"},
		//	{"ItemTow","weapon"},
			{"ItemHose","weapon"},
		//	{"PartBlockV","magazine"},
		//	{"ItemBpt_wt","magazine"},
		//	{"ItemBlueSpr","magazine"},
		//	{"ItemGreenSpr","magazine"},
		//	{"ItemPinkSpr","magazine"},
		//	{"ItemBlackSpr","magazine"},
		//	{"ItemRedSpr","magazine"},
		//	{"ItemYellowSpr","magazine"},
		//	{"ItemWhiteSpr","magazine"},
			{"","trash"},
		//	{"ItemSaw","weapon"}
		};
		itemChance[] =	{
			0.04,	//{"WeaponHolder_PartGeneric","object"},
			0.35,	//{"","generic"},
			0.04,	//{"WeaponHolder_PartFueltank","object"},
			0.02,	//{"WeaponHolder_PartEngine","object"},
			0.05,	//{"ItemKnife","weapon"},
			0.02,	//{"WeaponHolder_PartScrap","object"},
			0.35,	//{"","military"},
		//	0.04,	//{"PartPipe","magazine"},
			0.04,	//{"ItemCementBag","magazine"},
			0.04,	//{"ItemBpt_g_s","magazine"},
			0.25,	//{"","trash"},
			0.04,	//{"ItemBpt_g_b","magazine"},
		//	0.01,	//{"ItemTow","weapon"},
			0.01,	//{"ItemHose","weapon"}
		//	0.02,	//PartBlockV
		//	0.01,	//ItemBpt_wt
		//	0.05,	//{"ItemBlueSpr","magazine"},
		//	0.05,	//{"ItemGreenSpr","magazine"},
		//	0.05,	//{"ItemPinkSpr","magazine"},
		//	0.05,	//{"ItemBlackSpr","magazine"},
		//	0.05,	//{"ItemRedSpr","magazine"},
		//	0.05,	//{"ItemYellowSpr","magazine"},
		//	0.05,	//{"ItemWhiteSpr","magazine"},
			0.1,	//{"","trash"},
		//	0.05	//{"ItemSaw","weapon"}
		};
	};
	
	class Industrial: Default {
		zombieChance = 0.6;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3","ori_zombie7n","ori_zombie8Ln","ori_pozarnik"};
		maxRoaming = 5;
		lootChance = 0.3;
		lootPos[] = {};
		itemType[] =	{
			{"","generic"},
			{"","trash"},
			{"","military"},
			{"WeaponHolder_PartGeneric","object"},
			{"WeaponHolder_PartWheel","object"},
			{"WeaponHolder_PartFueltank","object"},
			{"WeaponHolder_PartEngine","object"},
			{"WeaponHolder_PartGlass","object"},
			{"WeaponHolder_PartVRotor","object"},
			{"WeaponHolder_ItemJerrycan","object"},
			{"ItemHatchet","weapon"},
			{"ItemKnife","military"},
			{"ItemToolbox","weapon"},
			{"ItemTankTrap","magazine"},
			{"WeaponHolder_PartScrap","object"},
			{"WeaponHolder_ItemJerrycanB","object"},
			{"ItemPickaxe","weapon"},
			{"WeaponHolder_ItemCeMix","object"},
			{"ItemCementBag","magazine"},
			{"ItemBpt_g_s","magazine"},
			{"ItemBpt_g_b","magazine"},
			{"ItemEtool","weapon"},
			{"ItemHose","weapon"}
		};
		itemChance[] =	{
			0.35, //generic
			0.25, //trash
			0.04, //military
			0.04, //WeaponHolder_PartGeneric
			0.05, //WeaponHolder_PartWheel
			0.02, //WeaponHolder_PartFueltank
			0.02, //WeaponHolder_PartEngine
			0.04, //WeaponHolder_PartGlass
			0.01, //WeaponHolder_PartVRotor
			0.04, //WeaponHolder_ItemJerrycan
			0.11, //ItemHatchet
			0.07, //ItemKnife
			0.03, //ItemToolbox
			0.04, //ItemTankTrap
			0.05, //WeaponHolder_PartScrap
			0.01, //WeaponHolder_ItemJerrycanB
			0.09, //ItemPickaxe
			0.07, //WeaponHolder_ItemCeMix
			0.05, //ItemCementBag
			0.01, //ItemBpt_g_s
			0.01, //ItemBpt_g_b
			0.06, //ItemEtool
			0.01 //ItemHose
		};
	};

	class Farm: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","ori_vil_zombie_woman1","ori_vil_zombie_woman2","ori_vil_zombie_woman3","ori_vil_zombie_woman4","ori_zombie4Ln","ori_zombie5Ln"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{
			{"WeaponHolder_ItemJerrycan","object"},
			{"","generic"},
			{"huntingrifle","weapon"},
			{"LeeEnfield","weapon"},
			{"Winchester1866","weapon"},
			{"","trash"},
			{"Crossbow","weapon"},
			{"ItemHatchet","weapon"},
			{"MR43","weapon"},
			{"WeaponHolder_ItemJerrycanB","object"},
			{"ItemPickaxe","weapon"},
			{"ItemCementBag","magazine"},
			{"ItemBpt_g_s","magazine"},
			{"ItemBpt_g_b","magazine"},
			{"ItemBpt_b1","magazine"},
			{"ItemBpt_h1","magazine"}
			};
		itemChance[] =	{
			0.06,	//WeaponHolder_ItemJerrycan
			0.28,	//generic
			0.01,	//huntingrifle
			0.01,	//LeeEnfield
			0.03,	//Winchester1866
			0.22,	//trash
			0.03,	//Crossbow
			0.17,	//ItemHatchet
			0.06,	//MR43
			0.03,	//WeaponHolder_ItemJerrycanB
			0.10,	//ItemPickaxe
			0.08,	//ItemCementBag
			0.02,	//ItemBpt_g_s
			0.01,	//ItemBpt_g_b
			0.06,	//ItemBpt_b1
			0.06,	//ItemBpt_h1
		//	0.06	//ItemRope
		};
	};
	class Supermarket: Default {
		lootChance = 0.6;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2","ori_vil_zombie_woman1","ori_vil_zombie_woman2","ori_vil_zombie_woman3","ori_vil_zombie_woman4"};
		itemType[] = {
			{"ItemWatch","generic"},
			{"ItemCompass","generic"},
			{"ItemMap","weapon"},
			{"Makarov","weapon"},
			{"Colt1911","weapon"},
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"","generic"},
			{"LeeEnfield","weapon"},
			{"revolver_EP1","weapon"},
			{"CZ_VestPouch_EP1","object"},
			{"DZ_CivilBackpack_EP1","object"},
			{"DZ_ALICE_Pack_EP1","object"},
			{"Winchester1866","weapon"},
			{"WeaponHolder_ItemRestTent","object"},
			{"","food"},
			{"","trash"},
			{"Crossbow","weapon"},
			{"Binocular","weapon"},
			{"MR43","weapon"},
			{"ItemCementBag","magazine"},
			{"ItemBattery","magazine"},
			{"ItemPin","magazine"},
			{"origins_school_1","object"},
			{"origins_school_2","object"},
			{"origins_school_3","object"}
		};
		itemChance[] =	{
			0.15,	//ItemWatch
			0.01,	//ItemCompass
			0.05,	//ItemMap
			0.02,	//Makarov
			0.02,	//Colt1911
			0.05,	//ItemFlashlight
			0.02,	//ItemKnife
			0.05,	//ItemMatchbox
			0.18,	//generic
			0.01,	//LeeEnfield
			0.01,	//revolver_EP1
			0.03,	//CZ_VestPouch_EP1
			0.02,	//DZ_CivilBackpack_EP1
			0.01,	//DZ_ALICE_Pack_EP1
			0.01,	//Winchester1866
			0.01,	//WeaponHolder_ItemRestTent
			0.30,	//food
			0.75,	//trash
			0.11,	//Crossbow
			0.05,	//Binocular
			0.01,	//MR43
			0.07,	//WeaponHolder_ItemCementBag
			0.05,	//ItemBattery
			0.01,	//ItemPin
			0.01,	//{"origins_school_1","object"},
			0.01,	//{"origins_school_2","object"},
			0.01	//{"origins_school_3","object"}
		};
	};
	class HeliCrash: Default {
		zombieChance = 0;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot","z_soldier","z_soldier_heavy","ori_zombie6n"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{		
			{"FN_FAL","weapon"},
			{"bizon_silenced","weapon"},
			{"M14_EP1","weapon"},
			{"FN_FAL_ANPVS4","weapon"},
			{"huntingrifle","weapon"},
			{"SVD","weapon"},
			{"Mk_48_DZ","weapon"},
			{"M249_DZ","weapon"},
			{"BAF_L85A2_RIS_Holo","weapon"},
			{"DMR","weapon"},
			{"","military"},
			{"","medical"},
			//{"MedBox0","object"},
			{"NVGoggles","weapon"},
			//{"AmmoBoxSmall_556","object"},
			//{"AmmoBoxSmall_762","object"},
			//{"Skin_Camo1_DZ","magazine"},
			{"Skin_Sniper1_DZ","magazine"},
			{"G36C","weapon"},
			{"G36C_camo","weapon"},
			//{"G36_C_SD_camo","weapon"},
			{"G36A_camo","weapon"},
			{"G36a","weapon"},
			{"G36K_camo","weapon"},
			{"G36K","weapon"},
			{"ItemBpt_b3","magazine"},
			{"ItemBpt_h3","magazine"}
			
		};
		itemChance[] =	{
			0.02,		//{"FN_FAL","weapon"},
			0.30,		//{"bizon_silenced","weapon"},
			0.05,		//{"M14_EP1","weapon"},
			0.02,		//{"FN_FAL_ANPVS4","weapon"},
			0.01,		//{"huntingrifle","weapon"},
			0.01,		//{"SVD","weapon"},
			0.06,		//{"Mk_48_DZ","weapon"},
			0.06,		//{"M249_DZ","weapon"},
			//0.01,		//{"BAF_L85A2_RIS_CWS","weapon"},
            0.06,       //BAF_L85A2_RIS_Holo
			0.01,		//{"DMR","weapon"},
			0.90,		//{"","military"},
			0.30,		//{"","medical"},
			//0.1,        //{"MedBox0","object"}
			//0.1,		//{"","taviana"},
			0.01,		//{"NVGoggles","weapon"}
			//0.1,		//AmmoBoxSmall_556
			//0.1,		//AmmoBoxSmall_762
			//0.08,		//Skin_Camo1_DZ
			0.05,		//Skin_Sniper1_DZ
			0.03,		//G36C
			0.02,		//G36C_camo
			//0.01,		//G36_C_SD_camo
			0.02,		//G36A_camo
			0.02,       //{"G36a","weapon"}
			0.02,		//G36K_camo
			0.02,        //{"G36K","weapon"}
			0.01,
			0.01
		};
	};
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor","ori_vil_zombie_woman1","ori_vil_zombie_woman2","ori_vil_zombie_woman3","ori_vil_zombie_woman4","ori_zombie1n","ori_zombie4n","ori_zombie1n","ori_zombie4n"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"","hospital"},
			//{"MedBox0","object"}
		};
		itemChance[] =	{
			0.2,
			0.5,
			//0.5
		};
	};
	class Military: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman","ori_zombie6Ln"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"M9","weapon"},
			{"M16A2","weapon"},
			{"M16A2GL","weapon"},
			{"M9SD","weapon"},
			{"AK_74","weapon"},
			{"M4A1_Aim","weapon"},
			{"AKS_74_kobra","weapon"},
			{"AKS_74_U","weapon"},
			{"AK_47_M","weapon"},
			{"M24","weapon"},
			{"M1014","weapon"},
			{"DMR","weapon"},
			{"M4A1","weapon"},
			{"M14_EP1","weapon"},
			{"UZI_EP1","weapon"},
			{"Remington870_lamp","weapon"},
			{"glock17_EP1","weapon"},
			{"MP5A5","weapon"},
			{"MP5SD","weapon"},
			{"M4A3_CCO_EP1","weapon"},

			{"Binocular","weapon"},
			{"ItemFlashlightRed","military"},
			{"ItemKnife","military"},
			{"ItemGPS","weapon"},
			{"ItemMap","military"},

			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_Patrol_Pack_EP1","object"},
			{"","trash"},
			{"DZ_Backpack_EP1","object"},			
			//Normal
			{"","medical"},
			{"","generic"},
			{"","military"},
			//{"Body","object"},
			{"ItemEtool","weapon"},
			{"ItemSandbag","magazine"},
			{"Sa58P_EP1","weapon"},
			{"Sa58V_EP1","weapon"},
			{"WeaponHolder_ItemRestTent","object"},
			{"Ori_mosin","weapon"},
			{"Ori_PPS43","weapon"},
			{"ori_vil_uzi_rozkl","weapon"},
			{"ori_vil_uzi_sd","weapon"},
			{"ori_vil_uzimini","weapon"},
			{"ori_vil_uzimini_SD","weapon"},
			{"Ori_Sa48SMG","weapon"},
			{"Ori_SKS","weapon"},
			{"Ori_Tt33","weapon"},
			{"Ori_APS","weapon"},
			{"Ori_APS_SD","weapon"},
			{"Ori_cz75","weapon"},
			{"Ori_cz83","weapon"},
			{"Ori_mossberg","weapon"}
		};
		itemChance[] =	{
			0.05,
			0.05, //M16A2
			0.01,
			0.02,
			0.09,
			0.01,
			0.08,
			0.05,
			0.05,
			0.01,
			0.05,
			0.01,
			0.02,
			0.01,
			0.05,	//UZI_EP1
			0.08,
			0.10,
			0.04,
			0.02,
			0.01,
			0.06,
			0.10,
			0.10,
			0.01,
			0.05,
			0.06,
			0.04,
			0.50,	//trash
			0.02,
			0.10,	//tut
			0.50,
			0.50,
			//0.20,
			0.05,
			0.10,
			0.03,
			0.03,
			0.01,
			0.01,	//Ori_mosin
			0.05,	//Ori_PPS43
			0.05,	//ori_vil_uzi_rozkl
			0.03,	//ori_vil_uzi_sd
			0.05,	//ori_vil_uzimini
			0.03,	//ori_vil_uzimini_SD
			0.05,	//Ori_Sa48SMG
			0.05,	//Ori_SKS
			0.05,	//Ori_Tt33
			0.05,	//Ori_APS
			0.05,	//Ori_APS_SD
			0.05,	//Ori_cz75
			0.05,	//Ori_cz83
			0.10	//Ori_mossberg
		};
	};
	class MilitarySNovi: Default {
		zombieChance = 0.6;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_pilot","z_soldier","z_soldier_heavy","ori_zombie6n"};
		lootChance = 0.13;
		lootPos[] = {};
		itemType[] = {
			{"M16A2","weapon"},
			{"M16A2GL","weapon"},
			{"SCAR_L_CQC_CCO_SD","weapon"},
			{"","trash"},
			{"SCAR_L_CQC_Holo","weapon"},
			{"M1014","weapon"},
			{"huntingrifle","weapon"},
			{"SCAR_L_CQC_EGLM_Holo","weapon"},
			{"","trash"},
			{"SCAR_L_STD_EGLM_RCO","weapon"},
			{"M4A1_Aim_camo","weapon"},
			{"M4A1","weapon"},
			{"SCAR_L_STD_HOLO","weapon"},
			{"","trash"},
			{"SCAR_L_STD_Mk4CQT","weapon"},
			{"","trash"},
			{"Remington870_lamp","weapon"},
			{"glock17_EP1","weapon"},
			{"Skin_Sniper1_DZ","magazine"},
			{"SCAR_H_CQC_CCO","weapon"},
			{"","trash"},
			{"SCAR_H_CQC_CCO_SD","weapon"},
			{"M9","weapon"},
			{"MP5A5","weapon"},
			{"MP5SD","weapon"},
			{"SCAR_H_STD_EGLM_Spect","weapon"},
			{"","trash"},
			{"SCAR_H_LNG_Sniper","weapon"},
			{"","trash"},
			{"M9SD","weapon"},
			{"DZ_Backpack_EP1","object"},
			{"SCAR_H_LNG_Sniper_SD","weapon"},
			{"M4A1_RCO_GL","weapon"},
			{"M4A1_HWS_GL_SD_Camo","weapon"},
			{"M4A1_HWS_GL","weapon"},
			{"M24","weapon"},
			{"MG36","weapon"},
			{"MG36_camo","weapon"},
			{"AK_107_GL_pso","weapon"},
			{"Saiga12K","weapon"}
		};
		itemChance[] = {
			0.10,	//{"M16A2","weapon"},
			0.05,	//{"M16A2GL","weapon"},
			0.01,	//{"SCAR_L_CQC_CCO_SD","weapon"},
			0.25,	//{"","trash"},
			0.01,	//{"SCAR_L_CQC_Holo","weapon"},
			0.15,	//{"M1014","weapon"},
			0.1,	//{"huntingrifle","weapon"},
			0.01,	//{"SCAR_L_CQC_EGLM_Holo","weapon"},
			0.2,	//{"","trash"},
			0.01,	//{"SCAR_L_STD_EGLM_RCO","weapon"},
			0.05,	//{"M4A1_Aim_camo","weapon"},
			0.2,	//{"M4A1","weapon"},
			0.01,	//{"SCAR_L_STD_HOLO","weapon"},
			0.1,	//{"","trash"},
			0.01,	//{"SCAR_L_STD_Mk4CQT","weapon"},
			0.15,	//{"","trash"},
			0.2,	//{"Remington870_lamp","weapon"},
			0.2,	//{"glock17_EP1","weapon"},
			0.05,	//{"Skin_Sniper1_DZ","magazine"},
			0.01,	//{"SCAR_H_CQC_CCO","weapon"},
			0.22,	//{"","trash"},
			0.01,	//{"SCAR_H_CQC_CCO_SD","weapon"},
			0.1,	//{"M9","weapon"},
			0.1,	//{"MP5A5","weapon"},
			0.1,	//{"MP5SD","weapon"},
			0.01,	//{"SCAR_H_STD_EGLM_Spect","weapon"},
			0.3,	//{"","trash"},
			0.01,	//{"SCAR_H_LNG_Sniper","weapon"},
			0.2,	//{"","trash"},
			0.1,	//{"M9SD","weapon"},
			0.1,	//{"DZ_Backpack_EP1","object"},
			0.01,	//{"SCAR_H_LNG_Sniper_SD","weapon"}
			0.1,	//{"M4A1_RCO_GL","weapon"},
			0.1,	//{"M4A1_HWS_GL_SD_Camo","weapon"},
			0.1,	//{"M4A1_HWS_GL","weapon"},
			0.05,	//{"M24","weapon"}
			0.01,	//{"MG36","weapon"},
			0.01,	//{"MG36_camo","weapon"},
			0.05,	//{"AK_107_GL_pso","weapon"},
			0.05	//{"Saiga12K","weapon"}
		};
	};
	class MilitarySpecial: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy","ori_zombie6Ln"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"M16A2","weapon"},
			{"M16A2GL","weapon"},
			{"M249_DZ","weapon"},
			{"M9SD","weapon"},
			{"AK_74","weapon"},
			{"M4A1_Aim","weapon"},
			{"AKS_74_kobra","weapon"},
			{"AKS_74_U","weapon"},
			{"AK_47_M","weapon"},
			{"M24","weapon"},
			{"SVD_CAMO","weapon"},
			{"M1014","weapon"},
			{"huntingrifle","weapon"},
			{"DMR","weapon"},
			{"M4A1","weapon"},
			{"M14_EP1","weapon"},
			{"UZI_EP1","weapon"},
			{"Remington870_lamp","weapon"},
			{"glock17_EP1","weapon"},
			{"M240_DZ","weapon"},
			{"M4A1_AIM_SD_camo","weapon"},
			{"M16A4_ACG","weapon"},
			{"M4A1_HWS_GL_camo","weapon"},
			{"Mk_48_DZ","weapon"},
			{"M4A3_CCO_EP1","weapon"},
			{"Binocular","weapon"},
			{"ItemFlashlightRed","military"},
			{"ItemKnife","military"},
			{"ItemGPS","weapon"},
			{"ItemMap","military"},
			{"Binocular_Vector","military"},

			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_Patrol_Pack_EP1","object"},
			{"DZ_Backpack_EP1","object"},			

			{"","medical"},
			{"","generic"},
			{"","military"},
			{"Sa58V_RCO_EP1","weapon"},
			{"Sa58V_CCO_EP1","weapon"},
			{"M40A3","weapon"},
			{"ItemBpt_b2","magazine"},
			{"ItemBpt_h2","magazine"}
		};
		itemChance[] =	{
			0.10,
			0.05,
			0.01,
			0.02,
			0.10,
			0.02,
			0.10,
			0.10,
			0.10,
			0.01,
			0.01,
			0.20,
			0.01,
			0.02,
			0.10,
			0.03,
			0.20,
			0.10,
			0.20,
			0.01,
			0.04,
			0.05,
			0.02,
			0.01,
			0.08,
			0.10,
			0.05,
			0.15,
			0.01, //ItemGPS
			0.03,
			0.01,
			0.02,
			0.03,
			0.02,
			0.30,
			0.90,
			0.80, //military
			0.01, //Sa58V_RCO_EP1
			0.01, //Sa58V_CCO_EP1
			0.02, // M40A3
			0.02,
			0.02
		};
	};
	class Church: Residential {
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_priest","z_priest","z_priest"};
	};
	class Land_tav_Barrack2 : MilitarySNovi {
		lootPos[] = {{1.24634,4.12891,-0.68939},{1.14526,0.330078,-0.721592},{-1.6864,3.8418,-0.710402},{-2.18811,-2.91602,-0.692757},{1.37219,-0.96875,-0.653217}};
	};
	class Land_tav_Ind_Pec_03_nov : IndNovistr {
		lootPos[] = {{7.11816,-21.1865,-5.36023},{3.15234,-9.58789,-5.35023},{8.6377,1.13916,-5.34023},{-0.453125,-0.964355,-5.34023},{-13.3867,-10.0005,-5.33023},{-7.76953,-10.0313,-5.32023},{-8.60352,-15.8286,-3.96721},{-9.10742,-12.6348,-2.47037},{-13.2656,-9.32764,-2.45037},{11.7871,-7.78174,5.82546},{-1.21582,-13.377,5.83546},{-0.919922,19.687,4.09103}};
	};
	class Land_tav_tovarna2 : IndNovistr {
		lootPos[] = {{-11.6309,7.2052,-5.55933},{-12.0674,2.56909,-5.55933},{-4.89355,6.6394,-5.55933},{-3.74121,2.90393,-3.89665},{-12.8672,1.44519,-2.23135},{-12.415,8.1311,-2.23135},{-12.7236,4.11255,-2.23135},{-3.99805,8.9801,-2.23156},{-7.33105,8.44214,-2.23156},{-4.55371,5.22644,-2.23156},{-11.4746,2.92114,1.66661},{-11.0703,8.13818,1.66661},{-4.67578,7.32678,1.62174},{-2.68262,3.44763,3.4243},{-13.1953,-8.95862,3.4243},{-8.80859,-0.443481,0.401226},{-12.1328,-0.149414,0.424298},{-2.03418,6.61414,-5.55933},{0.239258,1.72278,-5.59793},{6.22461,-3.948,-4.61825},{-6.39355,-8.24353,-5.59541},{-10.8496,-6.91211,-5.56572},{-6.77637,-1.73083,-5.56019}};
	};
	class Land_tav_Ind_Pec_03 : Industrial {
		lootPos[] = {{7.11816,-21.1865,-5.36023},{3.15234,-9.58789,-5.35023},{8.6377,1.13916,-5.34023},{-0.453125,-0.964355,-5.34023},{-13.3867,-10.0005,-5.33023},{-7.76953,-10.0313,-5.32023},{-8.60352,-15.8286,-3.96721},{-9.10742,-12.6348,-2.47037},{-13.2656,-9.32764,-2.45037},{11.7871,-7.78174,5.82546},{-1.21582,-13.377,5.83546},{-0.919922,19.687,4.09103}};
	};
	
	class Land_Ind_Mlyn_01 : IndustrialNew {
		lootPos[] = {{-6.88525,2.5332,9.12113},{-7.21045,2.59473,3.08799},{-2.69336,8.43848,0.18856},{-2.80615,8.02051,-7.77156}};
	};
	class Land_Ind_Mlyn_03 : IndustrialNew {
		lootPos[] = {{-7.87793,6.75293,-4.22196},{2.31104,1.54102,-4.20196},{2.45068,-7.54883,-4.22196}};
	};
	class Land_Barn_Metal : IndustrialNew {
		lootPos[] = {{-9.29102,-25.21,5.5581},{10.665,-6.75684,5.5481},{-3.79297,-3.18164,5.4681},{10.5615,14.0342,5.5281},{9.87012,3.90625,-5.5019},{-6.71582,14.6953,-5.4919},{-0.530273,-14.2139,-5.5019}};
	};
	class Land_Ind_TankBig : IndustrialNew {
		lootPos[] = {{-3.74512,2.40503,5.41},{1.77441,-1.92456,5.41}};
	};
	class Land_Ind_SiloVelke_02 : IndustrialNew {
		lootPos[] = {{9.44531,0.0566406,17.7159},{-6.57422,0.0644531,17.7059}};
	};
	class Land_Ind_SiloVelke_01 : IndustrialNew {
		lootPos[] = {{1.86816,6.25781,11.9014},{1.64258,-1.85742,11.8514},{-5.67188,3.04297,11.8514},{2.01172,-1.57813,-5.45222},{2.01367,7.23047,-5.46222}};
	};
	class Land_Ind_Pec_03b : IndustrialNew {
		lootPos[] = {{1.79883,-17.834,5.72049},{-2.71094,10.7085,5.71049},{-2.08105,19.0791,3.96606},{0.714844,25.252,3.96606}};
	};
	class Land_Ind_Expedice_3 : IndustrialNew {
		lootPos[] = {{1.86475,-5.73145,2.15865},{2.06738,6.79297,2.11729},{-1.11279,17.6689,2.10161}};
	};
	class Land_tav_HouseV2_01B : Residential {
		maxRoaming = 2;
		lootPos[] = {{-8.60889,2.91016,1.15648},{-9.13623,-0.748047,1.16798},{-4.93896,3.45801,1.15673},{-1.05664,2.22168,1.15663},{-2.76758,-1.0625,5.43909},{-7.48486,0.986328,5.44909},{-1.41699,4.82129,5.45909},{1.76758,-0.648438,6.17909},{6.99365,4.53906,5.42909},{1.5249,1.26465,5.42909}};
	};
	class Land_tav_guardhouse : Military {
		maxRoaming = 2;
		lootPos[] = {{0.0205078,2.83789,-1.70791},{4.25977,-0.359375,-1.68791},{-1,-0.617188,-1.71791},{0.952148,-3.15527,-1.71791},{-2.46191,-3.07129,-1.03791},{-2.44434,3.08691,-1.6907}};
	};

	class Land_tav_houseblock_b1: NoviShop {
		maxRoaming = 3;
		lootPos[] = {{6.16602,-2.40234,-7.09656},{5.99219,-3.0376,-6.73656},{6.06055,-2.62744,-6.38656},{6.36719,-2.94043,-6.38656},{6.14258,-3.62988,-7.08656},{8.55469,-2.19043,-6.73656},{8.50977,-1.9873,-6.38656},{8.92773,-2.39551,-6.02656},{8.98438,-2.92773,-6.02656},{8.90625,-1.74219,-6.73656},{6.72266,0.808594,-6.69656},{7.74023,0.877441,-6.67656},{3.38672,0.787598,-6.78656},{9.625,2.33789,-7.28656},{-5.52734,2.25049,-7.27885},{9.87305,-2.16895,-7.27656},{4.27734,-1.25732,-7.27656}};
	};
	class Land_tav_houseblock_b4_in : Residential {
		maxRoaming = 3;
		lootPos[] = {{0.396484,-1.99609,-7.30457},{1.09375,0.0253906,-3.32612},{-4.12305,2.87305,-3.28612},{-3.9248,2.96777,-2.54612},{-1.61133,3.08398,-2.29612},{-5.28711,-2.0791,-3.28612},{-1.53418,-3.94531,-3.31612},{5.0625,-2.58496,-2.78612},{0.839844,-3.99707,-3.30612},{-5.37305,0.949219,-3.31612}};
	};
	class Land_tav_HouseV_2L : Residential {
		maxRoaming = 3;
		lootPos[] = {{2.94727,-4.0979,-3.05021},{0.294922,-1.46436,-3.05999},{0.492188,3.06396,-4.07833},{4.24219,1.87793,-4.00904},{-2.95117,2.56055,-4.05833},{-1.30078,-3.3042,-1.13694},{2.68555,-4.24805,-1.13486},{-3.62109,2.62524,-0.594858},{1.5,3.74561,-0.394857},{-2.23633,-4.28052,-4.07968}};
	};
	class LAND_Domek_zluty_BEZ : Residential {
		maxRoaming = 3;
		lootPos[] = {{6.47559,2.75781,-2.42348},{-0.326416,-0.212891,-2.42361},{0.686768,3.92773,-2.40346},{-5.34692,3.45313,-1.53343},{-7.04883,-0.207031,-2.42347},{-6.91846,-3.81055,-2.42358},{-2.61182,-4.18945,-2.42365}};
	};
	class Land_Bulding_r : Residential {
		maxRoaming = 3;
		lootPos[] = {{-11.9141,-7.70056,-3.11493},{-5.33789,-8.85352,-3.11493},{9.89453,-8.91663,-3.12493},{3.5957,0.791138,-3.11493},{-0.537109,4.53772,-2.80493},{-4.25781,6.32971,0.5368},{3.08203,1.11963,0.546801},{-6.57617,-8.63171,0.5368},{-4.57422,12.075,0.5368},{-20.6484,-12.1409,0.5368},{-17.916,-16.7217,0.546801},{8.28711,-15.3203,0.5368},{13.3633,-1.95349,0.5268}};
	};
	class Land_Barrack2: TavianaDZ {
		lootChance = 0.2;
		lootPos[] = {{0.439453,4.26318,-0.699448},{0.953125,0.384277,-0.701637},{-2.18359,-2.62207,-0.682884},{1.95313,-2.72217,-0.703167},{1.90039,-0.907715,-0.723221}};
	};
	
	class LAND_x : Default {
		minRoaming = 0;
		maxRoaming = 1;
		zombieClass[] = {};
		lootPos[] = {};
	};
	
	class Land_zombie_spawn : Default {
		minRoaming = 0;
		maxRoaming = 1;
		zombieClass[] = {"z_Mutant"};
		lootPos[] = {};
	};
	
	class Land_dumruina_mini : Residential {
		maxRoaming = 3;
		lootPos[] = {};
	};
	
	class Land_statek_hl_bud : Residential {
		maxRoaming = 3;
		lootPos[] = {};
	};
	
	class LAND_HouseBlock_D1_ex1 : Residential {
		maxRoaming = 3;
		lootPos[] = {};
	};
	
	class LAND_HouseBlock_D1 : Residential {
		maxRoaming = 3;
		lootPos[] = {};
	};
	
	class LAND_Zachytka : Military {
		maxRoaming = 10;
		lootPos[] = {
			{-5.17871,7.28467,-1.99301},
			{1.39795,7.94971,-1.99301},
			{4.5542,10.832,-1.99301},
			{5.08301,4.22119,-1.993},
			{-1.39453,4.51416,-1.993},
			{-5.75732,2.32422,-1.993},
			{0.952637,-0.995605,-1.993},
			{-3.72168,-2.36328,-1.99301},
			{-4.80811,-10.3931,-1.993},
			{2.3877,-9.2749,-1.993}
			};
	};
	
	class LAND_Tav_panelak : Residential {
		maxRoaming = 5;
		lootPos[] = {{-3.66748,-4.59961,0.0714264},{-2.21387,2.49219,0.0714264},{-6.28418,3.85938,0.0714264},{-4.82373,-2.40625,0.0714264},{-6.76465,-6.64258,0.0714264},{-0.484375,4.40625,1.32864},{6.4292,-4.50586,2.77144},{5.15381,3.66602,2.77144},{3.72412,-4.16602,2.77144}};
	};
	
	class LAND_skola : Residential {
		lootChance = 0.2;
		maxRoaming = 10;
		lootPos[] = {{8.60059,-12.7744,1.22083},{-4.60889,-10.2051,1.32083},{-6.5,-16.5898,1.22083},{-3.70898,-24.3994,1.22083},{5.27026,-25.1494,1.22083},{21.3394,-8.22656,1.22083},{-20.6484,-28.2068,0.793335},{22.2014,-25.1807,1.22083},{-0.648926,-1.40723,1.22083},{27.3042,5.35059,1.22083},{18.8962,5.44043,1.22083},{18.3691,22.2285,1.22083},{27.0818,22.373,1.22083},{8.3125,10.9531,1.22083},{-5.29639,6.95703,1.22083},{-5.99316,15.7617,1.32083},{4.77197,16.6182,1.22083},{-3.74927,21.2891,1.22083},{1.79321,6.14648,-2.00361},{-6.06323,22.2188,-2.00361},{-0.61792,14.4258,-2.00361},{21.3601,5.67188,-2.00361},{29.1709,7.13086,-2.00361},{30.4448,18.6074,-2.00361},{19.0806,22.6094,-2.00361},{-18.5852,-9.68359,-2.00361},{-8.88379,3.6084,-2.00361},{21.0681,-11.5801,-2.00361},{5.00269,-2.0415,0.681145},{2.51514,0.760254,1.22083}};
	};
	
	class LAND_shopping_sab5 : Supermarket {
        maxRoaming = 10;
		lootPos[] = {{6.17188, 24.5352, -2.18271}, {8.87402, 17.3555, -2.18276}, {15.6436, 12.2646, -2.18283}, {9.71924, 7.09033, -2.18282}, {3.75977, 14.6694, -2.18275}, {-3.05615, 8.42285, -2.18274}, {-6.896, 3.85889, -2.18275}, {1.27637, -2.7666, -2.18283}, {7.05273, 3.07959, -2.18283}, {-13.8569, 3.52881, -2.18271}, {-11.9927, -3.16943, -2.18271}, {-0.359375, -9.20068, -2.18271}, {8.14697, -10.0742, -1.36222}, {11.5654, 0.530273, -2.18285}, {6.51367, -4.82129, -2.18285}, {20.8159, 10.3062, -1.36222}, {21.3081, 4.1748, -1.36222}};
	};
	
	class LAND_hockej_stadion : Residential {
		maxRoaming = 3;
		lootPos[] = {};
	};
	
	class LAND_konecna : Residential {
		maxRoaming = 4;
		lootPos[] = {{-5.50488, 8.19189, -1.59364}, {-3.93066, 12.9604, -1.59364}, {-1.38525, 10.113, -1.59364}, {11.9131, -0.400635, -1.59364}, {-4.71436, -4.24365, -1.59364}, {8.53076, -14.137, -1.59364}, {20.2114, -13.5977, -1.59364}, {19.1689, -3.08594, -1.59364}};
	};
	
	class LAND_Big_Panelka : Residential {
		maxRoaming = 6;
		lootPos[] = {{2.72461, -0.673828, -14.7521}, {3.56104, 3.88281, -14.7521}, {8.94434, -1.90771, -14.7521}, {10.9814, 0.0883789, -14.7519}};
	};
	
	class LAND_small_Panelka : Residential {
		maxRoaming = 3;
		lootPos[] = {};
	};
	
	class Land_garaz : Industrial {
		maxRoaming = 1;
		lootPos[] = {};
	};
	
	class Land_Tav_Panelak3 : Residential {
		maxRoaming = 4;
		//lootPos[] = {{-1.5415, -1.87402, -10.8154}};
	};
	
	class Land_Tav_Panelak2 : Residential {
		maxRoaming = 4;
		lootPos[] = {{0.293945,-2.16016,-2.62859},{-0.258789,4.42676,-1.30137},{-0.249023,-2.08398,0.0714283},{-0.540039,2.8252,1.48864},{0.331055,-2.11719,2.91097},{4.62793,-1.43066,5.43665},{6.9375,-4.94238,5.43665},{6.50684,3.72852,5.43665},{2.95117,3.61133,5.43665}};
	};
	
	class LAND_shopping_sab1 : Supermarket {
		lootChance = 0.3;
        maxRoaming = 12; 
		lootPos[] = 
		{
		{-20.085, 20.2368, -6.25663}, {-23.8691, 12.5679, -6.25663}, {-7.74805, 12.6436, -6.25663},
		{-15.5684, 25.4688, -6.25663}, {11.2949, 6.83496, -6.25663}, {17.2056, 18.7749, -6.25663}, 
		{11.3975, 27.7456, -6.25663}, {0.102539, 22.6035, -6.25663}, {-10.1343, 30.6821, -6.25663}, 
		{-6.97168, -10.4419, -6.25663}, {-23.603, -10.7573, -6.25663}, 
		{-31.4121, 7.58545, -6.25663}, {-2.49561, -5.64697, -6.25663}, 
		
		{18.9712, -12.1416, -6.25684}, {18.0986, 3.271, -6.25663}, {30.0249, -6.47607, -6.25663}, 
		{36.6094, 2.45508, -6.25663}, {7.94531, -17.1504, -2.38664}, 
		{29.4858, -20.3657, -2.39282}, {31.8311, -26.1162, -2.39699}, {23.8062, -29.1963, -2.39503}, 
		{22.8726, -14.0181, -2.38821}, {40.3643, -19.2593, -2.38821}, {42.0947, -12.2627, -2.38821}, 
		{36.3896, 4.40869, -2.38664}, {25.2612, -4.44775, -2.38664}, {25.0605, 10.561, -2.38664}, 
		
		{10.1772, 12.8071, -2.38664}, {5.71484, 16.915, -2.38664}, {12.8091, 24.3247, -2.38664}, 
		{-12.9209, 30.5352, -2.38664}, {-16.4102, 24.9956, -2.38664}, {-23.3652, 29.646, -2.38664}, 
		{-31.604, 25.2744, -2.38664}, {-31.2188, 21.0659, -2.38664}, 
		{-30.3223, 10.8169, -2.38664}, {-40.0864, -0.0424805, -2.38664}, {-22.6709, -9.54932, -2.38664}, 
		{-8.41895, -14.1587, -2.38664}, 
		{-7.25537, -29.0215, -2.38664}, {-1.0957, -19.668, -2.38664}
		};
	};
	
	class Land_statek_brana : Farm {
		maxRoaming = 3;
		lootPos[] = {};
	};
	
	class Land_Statek_kulna : Farm {
		maxRoaming = 3;
		lootPos[] = {};
	};
	
	class LAND_Hotel : Residential {
		lootChance = 0.3;
        maxRoaming = 10;
		lootPos[] = {
		{-12.1133, 12.4419, -7.53042}, 
		{-18.6973, -2.91846, -7.64675}, {-6.98535, 7.09436, -7.62252}, {-9.23145, -14.5624, -7.69155}, 
		{-1.65137, -22.9067, -7.5368}, {5.53125, -9.09363, -7.5228}, {18.4141, 2.01929, -7.9357}, 
		{1.40527, 22.5328, -7.61164}, {-6.51465, 13.7125, -7.58348}, {1.10156, 4.91199, -7.72602}, 
		{8.56738, -0.873779, -7.97877}, 							 {-0.185547, -1.58337, -4.26797}, 
		{4.11328, -17.9395, -4.31124}, {-1.14551, -23.3689, -4.18952}, {-7.72461, -14.7784, -4.21829}, 
		{-18.4707, -4.15723, -4.16677}, {-20.043, -1.46997, -4.15566}, {-17.9609, 6.81995, -4.09122}, 
		{-13.1279, 7.21838, -4.0675}, {0.290039, 6.35986, -4.22014}, {-3.70508, 18.1742, -4.09729}, 
		
		{1.52637, 20.1591, -4.14155}, {21.5801, 0.0534668, -4.49635}, {-0.462891, -1.63513, -0.764894}, 
		{-0.90332, -21.0625, -0.718954}, {14.1846, -6.54431, -0.958742}, {18.6895, 4.2146, -0.936404}, 
		{20.874, -1.52063, -0.998734}, {1.39063, 20.551, -0.637069}, {0.426758, 7.36646, -0.714541}, 
		{-9.5293, 1.23804, -0.646017}, {7.3584, -0.228271, 1.0327}, {1.69434, -3.09766, 2.70149}, 
		{-9.79492, -14.3831, 2.80007}, {-5.7373, -15.0978, 2.76387}, {4.50781, -18.5471, 2.69182}, 
		{-1.4834, -21.1569, 2.78841}, {13.7695, -9.43396, 2.52639}, {17.1025, 3.14478, 2.57377}, 
		{5.09277, 8.44556, 2.74124}, {6.38574, 18.0823, 2.7914}, {2.24902, 23.494, 2.85944}, 
		{-2.27344, 21.774, 2.91127}, {0.607422, 7.0752, 2.7814}, {-10.7324, 7.24023, 2.90718}, 
		{-17.8311, -3.34961, 2.84166}, {-20.7715, 1.62964, 2.86212}, {6.3877, 1.60095, 4.54189}, 
		{0.129883, -1.36096, 6.23433}, {0.232422, 6.25537, 6.28407}, {-2.66504, -16.9747, 6.25621},
		
		{-7.40723, -0.0731201, 6.3258}, {-13.5254, 8.42249, 6.44309}, {1.26855, 20.7711, 6.36965}, 
		{11.7334, 3.17261, 6.36703}
		};
	};
	
	class LAND_domek05 : Residential {
		maxRoaming = 7;
		lootPos[] = {
				{-4.85107,-1.41309,-2.79727},
				{-4.92188,1.28662,-2.79728},
				{0.280273,-1.30566,-2.79728},
				{2.28516,-1.74805,-2.79727},
				{4.56299,0.943848,-2.79727}
				};
	};
	
	class LAND_ZalChata : Residential {
		maxRoaming = 2;
		lootPos[] = {{-0.405273, -3.00085, -0.631011}};
	};
	
	class LAND_hotel_rivera2 : Residential {
		maxRoaming = 4;//15
		lootPos[] = {{-6.81641, -8.87415, -0.227416}, {-6.94629, 2.83325, -0.395831}};
	};
	
	class LAND_hotel_rivera1 : Residential {
		maxRoaming = 5;//15
		lootPos[] = {{10.8145, 4.72375, -0.209453}, {2.43164, 6.83557, -0.271956}, {-6.52734, 5.13611, -0.358277}};
	};
	
	class LAND_Posta : Residential {
		maxRoaming = 5;//20
		lootPos[] = {{-15.4492, 15.625, 1.00044}, {-13.248, 2.375, 1.00044}, {-3.58789, 7.85645, 1.00044}, {-14.9326, -5.10938, 1.00044}, {-1.98047, -7.83203, 1.00044}, {12.4336, -5.13379, 1.00044}, {11.2168, 12.8516, 1.00044}};
	};
	
	class LAND_bus_depo : Industrial {
		maxRoaming = 5;//15
		lootPos[] = {
					{46.2207,-12.0498,-11.023},
					{41.7188,-16.0869,-11.023},
					{33.9932,-27.4717,-11.023},
					{34.5576,-22.0527,-11.023},
					{27.3032,-11.8188,-11.023},
					{20.5039,-15.9302,-11.023},
					{22.4487,-38.8652,-11.023},
					{12.3018,-33.7637,-11.023},
					{12.332,-27.6064,-11.023},
					{8.68701,-11.834,-11.023},
					{-6.22607,-15.6729,-11.023},
					{-6.7002,-26.4194,-11.023},
					{-9.30078,-38.2964,-11.023},
					{-17.5396,-40.0762,-11.023},
					{-17.5771,-20.0938,-11.023},
					{-12.4268,-9.27393,-11.023},
					{-23.0518,-24.9692,-11.023},
					{-40.2495,-25.6689,-11.023},
					{-34.6821,-15.707,-11.023},
					{-22.8115,-2.72607,-11.023},
					{-23.3408,15.585,-11.023},
					{-30.1621,35.708,-11.023},
					{-23.6079,32.4619,-11.023}
					};
	};
	
	class LAND_casino : Residential {
        maxRoaming = 5;//50
		lootPos[] = {};
	};
	
	class LAND_Parlament : Residential {
        maxRoaming = 5;//50
		lootPos[] = {{14.3896, 16.248, -8.68905}, {9.83301, -8.93848, -8.68905}, {10.9756, -22.2969, -8.68905}, {-3.5752, -15.6768, -8.68905}, {-10.0947, -3.38965, -8.68905}, {-32.4775, -11.9082, -9.15828}, {-41.9609, -6.90527, -8.68905}, {-20.8779, -0.0322266, -8.68905}, {-23.3994, 9.42383, -8.68905}, {-36.8359, 12.3271, -8.68905}, {-23.6777, 6.11328, -4.44803}, {-23.1836, 0.365234, -4.44803}, {-37.2666, 3.17383, -4.44803}, {-11.3096, -14.624, -1.5775}, {-16.0293, -2.89355, -1.5775}, {-9.78906, 17.9072, -1.00882}, {2.22656, 22.0771, 1.06898}, {6.81738, 18.7188, -0.604359}, {15.8086, 10.7207, -1.5775}, {12.6025, -14.8164, -1.5775}, {11.9072, -23.6543, -1.5775}, {-6.1748, -23.7324, -1.5775}};
	};
	
	class LAND_Galerie : Residential {
		lootChance = 0.2;
        maxRoaming = 5;//50
		lootPos[] = {{2.2998, -15.3848, -4.03873}, {-3.52148, -5.5752, -4.03873}, {-0.500977, 6.52051, -4.03873}, {3.08398, 17.0322, -4.03873}, {7.05078, 21.6533, -4.03873}, {15.0928, 20.6689, -4.03873}, {9.73145, 13.6855, -4.03873}, {6.77148, 6.11621, -4.03873}, {10.415, -5.66602, -4.03873}, {17.2861, -0.505859, -4.03873}, {14.792, -11.7266, -4.03873}, {7.39355, -9.91992, -4.03873}, {11.9824, -23.0996, -4.03873}, {17.0127, -22.916, -4.03873}, {-6.96387, -22.4404, -4.03873}, {-16.3311, -20.2607, -4.03873}, {-8.69629, -12.6553, -4.03873}, {-15.2529, -3.19043, -4.03873}, {-12.7793, 0.00878906, -4.03873}, {-7.13867, 5.29004, -4.03873}, {-12.3525, 16.9082, -4.03873}, {-16.9336, 11.4092, -4.03873}, {-17.1719, 23.0137, -4.03873}, {-0.325195, 23.165, -2.77151}, {2.25293, 10.8838, -0.0799408}, {-0.390625, -21.5742, -0.0799408}, {-15.8799, -21.9678, -0.0799408}, {-8.38184, -15.25, -0.0799408}, {-15.9922, -3.94824, -0.0799408}, {-9.87598, 2.06152, -0.0799408}, {-15.7168, 20.9795, -0.0799408}, {-7.92676, 21.0273, -0.0799408}, {7.29199, 21.8848, -0.0799408}, {9.74707, 14.2617, -0.0799408}, {16.7217, 15.6582, -0.0799408}, {15.3125, 4.15234, -0.0799408}, {9.31543, -2.77637, -0.0799408}, {8.64258, -12.2246, -0.0799408}, {15.874, -15.8506, -0.0799408}, {8.00195, -22.6797, -0.0799408}};
	};
	
	class LAND_Stojan_Bus : Residential {
		maxRoaming = 5;//15
		lootPos[] = {{-0.432617,-4.72363,-2.94725},{-0.138672,2.72168,-2.94725},{-0.0273438,14.0723,-2.94725}};
	};
	
	class LAND_dum_patrovy03 : Residential {
		maxRoaming = 5;//10
		lootPos[] = {};
	};
	
	class LAND_Cinzak_long : Residential {
        maxRoaming = 1;//5
		lootPos[] = {};
	};
	
	class LAND_Cinzak_corner2 : Residential {
        maxRoaming = 1;//5
		lootPos[] = {};
	};
	
	class LAND_Cinzak_long_centr : Residential {
        maxRoaming = 1;//5
		lootPos[] = {};
	};
	
	class LAND_Cinzak_corner : Residential {
        maxRoaming = 1;//5
		lootPos[] = {};
	};
	
	class LAND_Cinzak_long_double : Residential {
        maxRoaming = 1;//5
		lootPos[] = {};
	};
	
	class LAND_hospoda : Residential {
		maxRoaming = 10;//20
		lootPos[] = {{-6.74023, 5.91797, -1.80275}, {-3.31738, -4.91406, -1.80292}, {7.20215, -7.96777, -1.80262}, {7.26074, -2.91797, -1.8028}, {0.15918, 4.66699, -1.80325}, {-0.799805, 2.06152, -1.80331}};
	};
	
	class LAND_spital : Hospital {
		maxRoaming = 10;//30
		lootPos[] = {{26.7461, 5.39746, -20.3688}, {27.5381, -11.8232, -20.3688}, {27.3848, -4.24023, -20.3688}, {16.9307, -1.49316, -20.3688}, {4.95117, -14.4082, -20.3688}, {-0.453125, -8.0293, -20.3688}, {-3.30566, 0.111328, -20.3688}, {-16.3809, 0.611328, -20.3688}, {-15.084, 5.4375, -20.3688}};
	};
	
	class LAND_Podloubi_double_low : Residential {
		maxRoaming = 3; //5
		lootPos[] = {};
	};
	
	class LAND_Podloubi_End_Low_1 : Residential {
		maxRoaming = 3;//5
		lootPos[] = {};
	};
	
	class LAND_Podloubi_End_Low_2 : Residential {
		maxRoaming = 3; //5
		lootPos[] = {};
	};
	
	class LAND_Garaz_velka : Industrial {
		maxRoaming = 3;//30
		lootPos[] = {{23.1904, 13.9424, 2.01991}, {3.24121, -11.0928, 2.00445}, {-18.8145, -6.86035, 1.98736}, {-1.86914, 31.0566, -0.0248146}, {9.60156, 6.1709, -1.75024}, {-16.4717, -7.5293, -1.77044}, {-1.99414, 24.2988, -3.8975}, {5.67578, 14.3477, -5.51864}, {18.374, 7.62695, -5.5088}, {12.4443, -6.52539, -5.51339}, {-22.5498, -19.5303, -5.54051}};
	};
	
	class LAND_Hotel_Marcomio : Residential {
		maxRoaming = 3;//30
		lootPos[] = {};
	};
	
	class LAND_shopping_sab2 : Supermarket {
		maxRoaming = 3;//30
		lootPos[] = {{-3.02246, -9.18652, -3.66148}, {2.74121, -0.436523, -3.66148}, {-2.81445, 9.39941, -3.66148}, {-8.21387, 8.58105, -3.66148}, {-4.8252,20.6104,-3.66148},{3.1748,21.4014,-3.66148}, {-11.0781, -11.707, -3.66148}, {-11.3047, -1.60938, -3.66148}, {7.66602, -10.1807, -3.66148}, {9.92285,-2.89453,-3.66148}, {-19.9063, -0.12207, -6.70006}, {23.7676, 4.64551, -3.65215}, {11.5693, 3.95996, -3.65815}, {10.6963, 10.0068, -3.65599}};
	};
	
	class LAND_Nadrazi_sabina : Residential {
		maxRoaming = 5;//50
		lootPos[] = {{9.3916, 2.6377, -18.609}, {12.6191, -13.3779, -18.083}, {-12.0859, -13.4141, -18.0592}, {-10.3867, 11.1563, -20.5584}, {18.3037, 25.9717, -23.8341}, {-16.3701, 27.2012, -24.99}, {-28.5869, 29.3105, -24.99}, {-31.9834, -6.94727, -18.0517}, {-21.3545, -38.3887, -12.6001}, {-5.75586, -43.291, -12.6138}, {9.58203, -38.4443, -12.5712}, {19.1826, -42.4551, -12.5954}, {-1.72852, -27.6846, -22.0921}, {19.6211, -30.2168, -22.0318}, {28.9629, -26.2432, -21.9936}};
	};
	
	class LAND_dum_patrovy06 : Residential {
		maxRoaming = 3;//5
		lootPos[] = {};
	};
	
	class LAND_dum_mesto : Residential {
		maxRoaming = 1;//5
		lootPos[] = {};
	};
	
	class Land_leseni2x : Residential {
		maxRoaming = 1;//5
		lootPos[] = {};
	};
	
	class LAND_Autosalon : Residential {
		maxRoaming = 4;//40
		lootPos[] = {{-0.675781, -2.78906, -8.88722}, {9.98242, 0.103516, -8.88722}, {13.1133, 11.5215, -8.88722}, {18.6689, 20.7617, -8.88722}, {7.25781, 17.5869, -8.88722}, {-1.80371, 22.6143, -8.88722}, {-20.9941, -4.5752, -1.02026}, {-8.07324, 19.542, -1.02026}, {-4.66113, 9.11816, -1.02026}, {3.75293, 8.75488, -1.02026}, {13.1406, 19.0322, -1.02026}, {15.6494, 4.32324, -1.02026}};
	};
	
	class LAND_Banka : Residential {
		maxRoaming = 5;//5
		lootPos[] = {{3.83691, -15.7803, -25.6122}, {5.27539, -7.64551, -25.6122}, {13.2227, -7.44336, -25.6122}, {11.8125, -11.6328, -25.6122}};
	};
	
	class LAND_Muzeum : Residential {
		maxRoaming = 15;//40
		lootPos[] = {};
	};
	
	class Land_budova4_in : Military {
		maxRoaming = 3;//5
		lootPos[] = {{5.85352,-2.57471,-1.88722},{2.91602,1.52588,-1.88722},{-3.42578,1.62988,-1.88722}};
	};
	
	class LAND_vokzal_big : Residential {
		maxRoaming = 3;//15
		lootPos[] = {{-8.12695, -7.29883, -7.96283}, {4.75684, -7.0127, -7.96283}, {5.32715, -0.78418, -7.96283}, {3.16309, 2.81152, -7.96283}, {-4.88281, 1.66113, -7.96283}};
	};
	
	class LAND_big_church : Church {
		maxRoaming = 3;//20
		lootPos[] = {};
	};
	
	class LAND_Ruske_kolo : Residential {
		maxRoaming = 3;//10
		lootPos[] = {};
	};
	
	class LAND_Bufet : Residential {
		maxRoaming = 3;//15
		lootPos[] = {{10.9902, -1.64453, -1.7135}, {6.53027, -2.49707, -1.7135}, {4.9541, -6.72949, -1.7135}, {-1.73047, -12.3477, -1.7135}, {3.03809, -3.75781, -1.7135}, {-4.38379, -7.69727, -1.7135}, {-0.751953, -1.2002, -1.7135}, {6.97559, 4.30762, -1.7135}, {-0.258789, 2.55762, -1.7135}, {-6.70898, 3.5918, -1.7135}, {-7.43555, -5.5752, -1.7135}};
	};
	
	class LAND_Bus_Stojan_Bud : Residential {
		maxRoaming = 3;//15
		lootPos[] = {};
	};
	
	class LAND_Cinzak_roh2 : Residential {
		maxRoaming = 3;//20
		lootPos[] = {};
	};
	
	class LAND_Cinzak_roh3 : Residential {
		maxRoaming = 3;//20
		lootPos[] = {};
	};
	
	class LAND_Cinzak_trojuhlenik : Residential {
		maxRoaming = 3;//20
		lootPos[] = {};
	};
	
	class LAND_kanovka_budova : Industrial {
		maxRoaming = 3;//10
		lootPos[] = {{-4.93652, -3.72852, -6.58418}, {-6.65625, 10.7012, -6.58418}};
	};
	
	class LAND_kanovka_budova_snich : Industrial {
		maxRoaming = 3;//10
		lootPos[] = {{-12.3037,-0.175781,-7.46695},{-6.47119,-8.65234,-7.46695},{-4.81348,-3.49023,-7.46695}};
	};
	
	class LAND_HouseV_2I_snow : Residential {
		maxRoaming = 3;//5
		lootPos[] = {};
	};
	
	class LAND_bouda1_zima : Residential {
		maxRoaming = 3;//5
		lootPos[] = {};
	};
	
	class LAND_kasarna_brana : Military {
		maxRoaming = 3;//5
		lootPos[] = {};
	};
	
	class LAND_kasarna : Military {
		maxRoaming = 3;//5
		lootPos[] = {};
	};
	
	class LAND_kasarna_prujezd : Military {
		maxRoaming = 3;//5
		lootPos[] = {};
	};
	
	class LAND_kasarna_rohova : Military {
		maxRoaming = 3;//5
		lootPos[] = {};
	};
	
	class LAND_watertower1 : Residential {
		maxRoaming = 3;//5
		lootPos[] = {};
	};
	
	class OSShDY_base : Residential {
		maxRoaming = 3;//20
		lootPos[] = {};
	};
	
	class CD2 : Residential {
		maxRoaming = 3;//20
		lootPos[] = {};
	};
	
	class Ds : Residential {
		maxRoaming = 3;//20
		lootPos[] = {};
	};
	
	class Land_afbarabizna : Residential {
		maxRoaming = 10;
		lootPos[] = {{5.24512, 5.37036, -4.19494}, {5.20117, -1.52295, -4.22117}, {-2.97363, -1.07031, -4.22117}, {-2.50391, 5.43677, -4.22117}, {5.04004, -0.233643, -0.168262}};
	};
	
	class Land_fuelstation_army : Military {
		maxRoaming = 3;
		lootPos[] = {};
	};
	
	class Land_army_hut_int : Military {
		maxRoaming = 3;
		lootPos[] = {{1.64453, -5.52002, -1.33056}, {0.53125, 1.72607, -1.36391}};
	};
	
	class Land_army_hut3_long_int : Military {
		maxRoaming = 3;
		lootPos[] = {{-1.72803, -0.726563, -1.23617}, {-2.26416, -4.87402, -1.23617}, {-0.449219, 3.71338, -1.23617}};
	};
	
	class Land_army_hut2_int : Military {
		maxRoaming = 3;
		lootPos[] = {{0.703369, 0.560547, -0.948328}, {1.6875, -2.17627, -0.948328}};
	};
	
	class Land_cihlovej_dum_in : Residential {
		maxRoaming = 5;
		lootPos[] = {{1.87744, 2.37598, -5.27588}, {-1.71484, 1.78711, -1.8147}, {0.640137, -1.39795, -1.81472}};
	};
	
	class Land_dum_mesto_in : Residential {
		maxRoaming = 5;
		lootPos[] = {{-4.72754, -0.462402, -4.23207}, {5.52393, -1.52441, -4.21337}, {-4.91895, 3.55244, -4.27988}, {5.21289, 2.88672, -1.28}, {5.27441, -1.26953, -1.23014}, {-3.92676, 4.32178, -1.56758}, {-3.1626, -0.688477, -1.22935}};
	};
	
	class Land_sara_Domek_sedy : Residential {
		maxRoaming = 3;
		lootPos[] = {{-1.2832, 0.844727, -2.14196}, {-3.59521, 3.14893, -2.14198}, {4.49568, 2.21338, -2.14196}};
	};
	
	class Land_hruzdum : Residential {
		maxRoaming = 3;
		lootPos[] = {{1.31641, 2.11475, 1.59321}, {-1.16504, 0.639648, 1.59321}, {0.558594, 2.17696, -1.16265}};
	};
	
	class Land_tovarna1 : Industrial {
		maxRoaming = 5;
		lootPos[] = {{1.59082, -4.73145, -5.75442}, {-6.48047, -0.56543, -5.75442}, {-9.13379, 4, 4.82972}, {-5.41699, -6.46045, 4.82972}, {3.56592, -7.5332, -0.320107}, {1.1416, -6.83887, 2.17997}, {2.71289, 1.61426, 2.15098}, {-9.21143, -6.28223, 2.17997}};
	};
	
	class Land_ryb_domek : Residential {
		maxRoaming = 2;
		lootPos[] = {{-0.0595703, -1.03418, -2.015}};
	};
	
	class Land_benzina_schnell : Industrial {
		maxRoaming = 7;
		lootPos[] = {};
	};
	
	class Land_deutshe_mini : Residential {
		maxRoaming = 3;
		lootPos[] = {{-1.81348, 2.36963, -2.79262}, {-2.11768, -0.958008, -2.73062}, {3.41357, 0.916504, -2.78435}, {3.76172, -2.10693, -2.73065}};
	};
	
	class Land_sara_stodola : Farm {
		maxRoaming = 3;
		lootPos[] = {{-2.94824, -0.0193848, -2.19523}, {4.08301, -1.0835, -2.19523}};
	};
	
	class Land_hut01 : Residential {
		maxRoaming = 2;
		lootPos[] = {0.323242, 1.36377, -0.44834};
	};
	
	class Land_hut02 : Residential {
		maxRoaming = 2;
		lootPos[] = {-0.162598, 1.24707, -0.445763};
	};
	
	class Land_hut04 : Residential {
		maxRoaming = 2;
		lootPos[] = {-0.0205078, 1.74512, -0.437198};
	};
	
	class Land_hut03 : Residential {
		maxRoaming = 2;
		lootPos[] = {};
	};
	
	class Land_hut_old02 : Industrial {
		maxRoaming = 5;
		lootPos[] = {{0.573242, -7.09033, -3.03308}, {0.1875, 0.723145, -3.03308}, {-7.09033, -3.14648, -3.03308}, {-7.18457, 1.79688, -3.03308}};
	};
	
	class Land_dum_rasovna : Residential {
		maxRoaming = 3;
		lootPos[] = {{1.02197, 3.18604, 0.272606}, {1.36816, 1.83447, -2.66958}};
	};
	
	class Land_dum_istan3_pumpa : Residential {
		maxRoaming = 5;
		lootPos[] = {{3.21826, 0.550293, 1.47485}, {-2.80615, 0.327637, 1.47485}};
	};
	
	class Land_dum_istan3_hromada2 : Residential {
		maxRoaming = 5;
		lootPos[] = {{-1.50049, 4.32764, -1.28517}, {-1.12061, -3.42383, -1.28517}, {4.62012, -3.88379, 2.08801}, {6.20166, 2.93652, 2.08801}};
	};
	
	class Land_fuelstation : Industrial {
		maxRoaming = 10;
	};
	
	class Land_chilovej_dum_mini : Residential {
		maxRoaming = 3;
		lootPos[] = {2.51221, 2.39453, -2.86942};
	};
	
	class Land_dum_mesto2 : Residential {
		maxRoaming = 10;
		lootPos[] = {{-2.21777, 5.00586, -0.944006}, {1.03662, 6.85107, -0.944006}, {-1.46631, -5.90137, -0.944006}, {0.757324, -3.8291, -0.944006}, {-2.23193, -6.66846, -4.34475}, {-1.34229, -2.26807, -4.34475}, {2.40283, 4.83936, -4.34475}, {-1.56201, 5.76904, -4.34475}};
	};
	
	class Land_HouseV_1I4: Residential {
		lootPos[] = {{-0.400146,-3.87695,-2.76879},{-3.67749,-2.52002,-2.76551},{-0.472168,3.19702,-2.72021}};
	};
	class Land_kulna: Residential {
		lootPos[] = {{0.504395,0.218262,-1.11643},{-0.496582,1.93262,-1.12826}};
	};
	class Land_Ind_Workshop01_01: Industrial {
		lootPos[] = {{0.595215,-2.43115,-1.29412},{1.24365,0.463867,-1.295},{-0.663574,-0.50293,-1.29837}};
	};
	class Land_Ind_Garage01: Industrial {
		lootPos[] = {{-0.580078,-1.49707,-1.23483},{-0.834473,2.75781,-1.22563},{2.47754,-1.12891,-1.23714},{1.31934,1.63086,-1.23228}};
	};
	class Land_Ind_Workshop01_02: Industrial {
		lootPos[] = {{1.1543,-0.552246,-1.42943},{-1.18665,-0.178223,-1.42868},{-0.661621,1.104,-1.42682}};
	};
	class Land_Ind_Workshop01_04: Industrial {
		lootPos[] = {{-1.37415,4.18896,-1.53123},{0.695435,4.24561,-1.52934},{-1.06677,2.69531,-1.53062},{0.79248,-4.60742,-1.49341},{-1.84424,-6.1709,-1.44427},{-1.05566,-4.08398,-1.51927},{1.43774,-6.59424,-1.41742}};
		hangPos[] = {{-0.541748,4.01221,-2.03068}};
	};
	class Land_Ind_Workshop01_L: Industrial {
		lootPos[] = {{-3.26172,4.75439,-1.30246},{0.175781,3.91748,-1.30766},{-2.37891,2.35303,-1.30405},{4.10547,-4.10791,-1.31345},{0.727539,-2.61621,-1.31418},{2.54688,-2.17725,-1.31482},{1.52344,-3.79443,-1.31332}};
	};
	class Land_Hangar_2: Industrial {
		lootPos[] = {{10.1245,-6.4873,-2.56317},{11.9387,7.91113,-2.56317},{1.79517,7.12695,-2.56317},{-11.8948,10.5449,-2.56317},{-8.97021,-4.34766,-2.56317},{-0.562744,-7.59375,-2.56317},{5.98804,-2.6123,-2.56317}};
	};
	class Land_hut06: Residential {
		lootPos[] = {{0.328125,2.26953,-1.57786},{-0.552368,-0.0620117,-1.53837}};
	};
	class Land_stodola_old_open: Farm {
		lootPos[] = {{-3.06836,8.63184,-5.08054},{2.52588,10.5261,-5.08051},{4.76758,5.00854,-0.9935},{-2.78467,10.2368,-0.9935},{4.62598,10.4983,-0.993469},{2.09082,10.8425,2.96448},{-0.440918,10.3091,2.96445},{-2.58838,-5.91821,-5.08054},{4.11084,-10.9302,-5.08054},{-2.62842,-6.55518,-1.01584},{2.50537,-10.741,2.96445},{0.0410156,-11.0596,2.96445}};
		hangPos[] = {{-1.50537,5.34473,-5.08813},{0.494141,9.42725,-5.09016},{2.59473,-6.21191,-5.08055},{-1.74854,-2.39844,-1.14301}};
	};
	class Land_A_FuelStation_Build: Industrial {
		lootChance = 0.5;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		lootPos[] = {{-1.31958,-0.655151,-1.57448},{1.82349,0.769653,-1.57458},{1.67871,-0.918701,-1.57458},{-1.23242,1.26794,-1.57458}};
	};
	class Land_A_GeneralStore_01: Supermarket {
		lootPos[] = {{-9.38965,-3.30371,-1.20155},{-3.77539,-3.86865,-1.20155},{1.31836,1.46631,-1.20155},{9.01367,3.8457,-1.20155},{13.3008,-1.77832,-1.20155},{9.81055,1.43213,-1.20155},{1.65039,5.14355,-1.20155},{0.753906,-3.69531,-1.20155},{13.3125,-7.65137,-1.20155},{11.168,-3.73682,-1.20155},{8.89453,-8.37402,-1.20155},{-2.04492,-7.58105,-1.20155},{-7.84766,-5.73633,-1.20155},{-8.22461,-7.32422,-1.20155},{3.79004,-5.69336,-1.20155},{-9.38379,4.46191,-1.20155},{-3.5752,4.46533,-1.20155},{-3.33789,0.612793,-1.20155},{10.5918,-9.9458,-1.21082},{0.105469,-9.6084,-1.21082},{-4.86035,-10.4209,-1.21082},{-6.80859,-1.23975,-1.20155},{1.12207,-1.58887,-1.20155}};
	};
	class Land_Farm_Cowshed_a: Farm {
		lootPos[] = {{-1.06836,-5.92163,-3.08763},{1.69043,-4.91089,-3.08763},{5.8833,-6.15381,-3.08763},{8.83984,-5.60278,-3.08763},{9.74023,-2.48657,-3.08763},{2.88428,-2.34546,-3.08763},{7.88037,2.94214,-3.08763}};
	};
	class Land_stodola_open: Farm {
		lootPos[] = {{-2.60303,5.31665,-4.12804},{-2.58154,-0.530029,-4.17349},{-0.0478516,-4.88989,-4.136},{0.983398,6.20483,-4.11143}};
		hangPos[] = {{-0.932617,-3.35962,-4.16446},{-2.01563,-0.115112,-4.19492}};
	};
	class Land_Barn_W_01: Farm {
		lootPos[] = {{4.93188,-17.0444,-2.63063},{-3.82813,-18.6699,-2.63036},{-4.46387,16.6665,-2.63651},{5.78711,18.9473,-2.6369},{3.9541,4.88428,-2.63446},{-2.99072,-4.16748,-2.63287}};
	};
	class Land_Hlidac_budka: Residential {
		lootPos[] = {{-2.3186,1.5127,-0.78363},{2.02075,0.444336,-0.78363},{-0.460938,1.75879,-0.78363}};
	};
	class Land_HouseV2_02_Interier: Residential {
		lootPos[] = {{7.23096,5.37207,-5.53067},{8.55005,0.754883,-5.53067},{5.20166,-1.54004,-5.53067},{3.34912,1.9707,-5.53067},{-3.62598,3.05371,-5.53067},{-5.4812,-0.0292969,-5.53067},{-5.83325,3.26563,-5.53067},{-5.71045,5.49414,-5.53067}};
	};
	class Land_a_stationhouse: Military {
		lootChance = 0.3;
		lootPos[] = {{-2.69922,-7.57422,-9.47058},{-0.892578,-5.7168,-9.47058},{-3.2417,-6.61914,-4.6489},{-1.35645,-8.3623,-4.6489},{-1.70801,-7.85449,-0.0437927},{-3.39502,-7.88281,-0.0437927},{-1.396,-7.79883,4.41141},{-1.37939,-5.79102,4.41141},{1.5127,1.96484,-9.47058},{18.9058,-4.06738,-9.47058}};
	};
	class Land_Mil_ControlTower: Military {
		lootChance = 0.4;
		lootPos[] = {{10.0703,3.76367,-9.62869},{3.89844,3.43457,-5.46368},{1.75195,5.68164,-5.46368},{6.66113,-0.625488,-1.0687},{2.63965,-0.191406,-1.0687},{6.72266,3.23389,-1.0687}};
	};
	class Land_SS_hangar: Military {
		maxRoaming = 3;
		lootPos[] = {{11.7344,-17.165,-5.87253},{-11.7158,-18.9541,-5.87253},{-14.2461,23.0439,-5.87253}};
	};
	class Land_A_Pub_01: Residential {
		zombieChance = 0.2;
		lootPos[] = {{1.83398,0.393799,-5.7462},{-1.76514,0.334473,-5.74622},{-6.62207,-6.55371,-5.74622},{-4.63623,-0.100586,-5.74622},{-5.75928,-3.05029,-5.74622},{-2.08203,0.922852,-1.76122},{-4.76514,-5.89087,-1.76122},{-6.94385,-1.9375,-1.76122},{-4.05225,-0.779785,-1.76122},{1.39795,-1.73779,-1.76122},{3.13867,-2.78564,-1.76122},{3.58301,-0.591309,-1.76122},{3.03027,-4.04346,-1.76122},{1.94092,3.18799,-1.76122},{-0.0961914,6.22437,-1.76122},{5.30469,7.55957,-1.76122},{6.72559,-2.72705,-1.76122},{2.56885,-4.6001,-5.74621},{4.06738,5.41406,-5.74622},{0.753418,2.2998,-5.74622}};
	};
	class Land_HouseB_Tenement: Office {
		lootPos[] = {{5.40576,9.89551,-20.7845},{5.99023,14.1689,-20.7845},{12.9609,14.0718,-20.7845},{14.6069,8.92383,-20.7845},{-2.75635,-2.08594,-20.7845}};
	};
	class Land_A_Hospital: hospital {
		lootChance = 0.9;
		lootPos[] = {{0.807129,-1.16333,-7.33966},{-7.23389,-2.63647,-7.33966},{-16.3687,-2.40381,-7.33966},{-12.2847,-3.19604,-7.33966},{4.40674,-3.50513,-7.33966},{-3.2666,-0.925293,-7.33966},{6.85693,-2.75146,-7.33966},{11.0151,-3.95435,-7.33966},{16.8198,-4.71118,-7.33966},{-1.12793,3.78418,-7.44939},{12.7476,0.142822,3.29184},{10.2661,-1.21558,3.29184}};
	};
	class Land_Panelak: Office {
		lootPos[] = {{-2.76904,-6.26563,0.0714226},{-2.93896,-1.3916,0.0714226},{-5.42065,-3.13184,0.0714226},{-6.81128,-6.15527,0.0714221},{-4.00879,2.53027,0.0714226},{-0.730957,-3.20117,2.77144},{3.979,-7.08936,2.77144},{2.49609,2.93701,2.77144},{6.7373,1.63281,2.77144},{6.38525,-2.3916,2.77144},{6.80615,-5.77295,2.77144},{3.75122,-0.803711,2.77144},{-0.824219,1.86914,1.32865}};
	};
	class Land_Panelak2: Office {
		lootPos[] = {{-0.729492,-3.00635,-2.62859},{-0.764648,1.36279,-1.37137},{-0.30127,3.65039,1.40864},{0.73584,-3.22217,2.71097},{-0.630859,1.84766,4.15244},{3.68921,-7.33545,5.43665},{2.26807,2.94092,5.43665},{6.7002,2.68994,5.43665},{6.87842,-1.45947,5.43665},{6.09619,-5.94824,5.43665},{4.45508,-1.64893,5.43665},{2.76367,0.445801,5.43665}};
	};
	class Land_Shed_Ind02: Industrial {
		lootPos[] = {{-2.28174,-5.67236,-4.62599},{4.54529,9.6665,-4.62599},{4.41223,2.64941,-1.27954},{-0.437866,11.6943,-1.27641},{-3.44482,12.2119,-1.27704}};
	};
	class Land_Shed_wooden: Residential {
		lootPos[] = {{1.26807,-0.361328,-1.29153},{-0.342773,1.0293,-1.29153}};
	};
	class Land_Misc_PowerStation: Industrial {
		lootPos[] = {{4.09888,4.89746,-1.26743},{4.22827,-1.19873,-1.2681}};
	};
	class Land_HouseBlock_A1_1: Residential {
		lootPos[] = {{-3.52881,0.158936,-4.74365},{-3.56152,-2.33484,-4.73106}};
	};
	class Land_Shed_W01: Industrial {
		lootPos[] = {{-1.52637,-0.246094,-1.41129}};
	};
	class Land_HouseV_1I1: Residential {
		lootPos[] = {{0.181641,-1.97314,-2.82275}};
	};
	class Land_Tovarna2: Industrial {
		lootPos[] = {{-11.6309,7.2052,-5.55933},{-12.0674,2.56909,-5.55933},{-4.89355,6.6394,-5.55933},{-3.74121,2.90393,-3.89665},{-12.8672,1.44519,-2.23135},{-12.415,8.1311,-2.23135},{-12.7236,4.11255,-2.23135},{-3.99805,8.9801,-2.23156},{-7.33105,8.44214,-2.23156},{-4.55371,5.22644,-2.23156},{-11.4746,2.92114,1.66661},{-11.0703,8.13818,1.66661},{-4.67578,7.32678,1.62174},{-2.68262,3.44763,3.4243},{-13.1953,-8.95862,3.4243},{-8.80859,-0.443481,0.401226},{-12.1328,-0.149414,0.424298},{-2.03418,6.61414,-5.55933},{0.239258,1.72278,-5.59793},{6.22461,-3.948,-4.61825},{-6.39355,-8.24353,-5.59541},{-10.8496,-6.91211,-5.56572},{-6.77637,-1.73083,-5.56019}};
	};
	class Land_rail_station_big: Office {
		lootPos[] = {{-4.97266,4.55737,-5.04438},{0.458496,4.85229,-5.04438},{2.4624,2.21851,-5.04438},{-1.32373,-2.60571,-5.04438},{-3.29443,-0.121826,-5.04438},{-1.07764,2.36646,-5.04438},{7.46045,-3.41528,-5.04438},{8.93408,3.1189,-5.04438},{-8.16357,-5.12842,-5.04438}};
	};
	class Land_Ind_Vysypka: Industrial {
		lootPos[] = {{0.486084,4.95459,-4.96861},{1.08032,-0.406738,-4.96801},{-0.0354004,-10.8208,-4.96686},{-5.07788,-16.4624,-4.96759},{-6.30298,2.92969,-4.96838},{-6.26685,26.7349,-4.9772},{1.64697,23.4038,-4.97097},{7.14575,3.92529,-4.96972},{4.63599,-12.1621,-4.96971}};
	};
	class Land_A_MunicipalOffice: Residential {
		zombieChance = 0;
		minRoaming = 3;
		maxRoaming = 9;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
		lootChance = 0.4;
		lootPos[] = {{-4.66113,-6.27173,-18.429},{3.31641,-5.77417,-18.429},{-0.20752,-6.48682,-18.429},{-9.72412,-4.88745,-3.78903},{-9.57813,3.55615,-3.78903},{-7.16797,11.0737,-3.78903},{5.07422,11.1838,-3.78903},{9.3208,5.38623,-3.78903},{9.65332,-4.82056,-3.78903},{3.23535,-0.105957,-0.169027},{4.85205,-3.69019,-0.169027},{-0.80127,-7.89087,-0.169027},{-4.4082,-4.91772,-0.169027},{-4.90771,-2.23169,-0.169027}};
	};
	class Land_A_Office01: Office {
		lootPos[] = {{-2.50391,-2.46948,-4.528},{4.23535,-0.336914,-4.528},{4.11133,6.1123,-4.528},{0.242188,6.06299,-4.528},{4.31641,3.74023,-4.528},{5.08887,0.219727,-4.528},{11.6504,-1.5647,-4.528},{14.5811,-4.1123,-4.528},{13.8545,-0.749023,-4.528},{-7.7627,5.59082,-4.528},{1.81152,0.993408,-2.028},{4.93164,4.31982,-2.028},{1.18945,6.07031,-2.028},{2.23145,3.76563,-2.028},{-4.76367,-2.51221,-2.028},{-14.5596,-3.40723,-2.028},{-15.2705,5.92773,-2.028},{-10.9063,6.04175,0.472008},{-6.30762,3.30078,0.472006},{7.6416,6.38696,0.472001},{13.6729,6.5957,0.471999},{13.1924,-2.58691,0.471998},{3.0918,2.4375,6.20491},{-1.45703,-2.28369,6.20491},{-2.12988,4.51587,0.472005},{4.74414,-4.60156,-2.01486},{8.3457,-1.10718,-2.028},{9.94727,-3.74146,-2.028},{7.13867,-2.50732,-2.028},{12.8701,4.70923,-2.028},{15.3721,3.42383,-2.028}};
	};
	class Land_A_Office02: Office {
		lootPos[] = {{4.72266,-5.74121,-8.15108},{0.961426,-5.16943,-8.15076}};
	};
	class Land_A_BuildingWIP: Industrial {
		lootChance = 0.5;
		lootPos[] = {{-4.62573,4.52344,-6.45268},{-12.6377,0.494141,-6.49242},{-14.6023,-8.62842,-6.49961},{-16.0005,-9.80957,-6.50423},{-15.5627,-5.17725,-6.50523},{0.94458,-2.30371,-6.43043},{7.28125,3.20898,-6.44042},{9.75708,10.1138,-6.40827},{14.771,7.29688,-6.47756},{15.4504,-0.314941,-6.52979},{20.4895,2.31836,-4.52571},{17.3123,-3.1001,-2.53291},{10.707,-6.51611,-2.53255},{2.22534,-9.21582,-2.534},{-8.91943,-7.18896,-2.53313},{-16.3179,-8.35645,-2.53357},{-21.3064,-6.7915,-2.53182},{-21.6018,-1.79541,-2.53182},{-17.5808,6.14746,-2.53182},{-23.198,8.44727,-2.53182},{-17.1973,9.58594,-2.53182},{-4.99023,9.80957,-2.53182},{14.0872,7.44092,-2.52676},{10.5796,-6.84912,1.48116},{-3.19116,-2.49463,1.49403},{-13.8186,3.98975,1.49829},{-15.9502,-6.17383,1.48802},{-20.6997,-16.9761,1.50282},{-15.415,-13.3901,5.46683}};
	};
	class Land_Church_01: Church {
		lootPos[] = {{-6.92102,-0.382813,-4.21339}};
	};
	class Land_Church_03: Church {
		lootPos[] = {{5.15332,-6.96875,-14.3021},{-1.79053,-7.68018,-14.3021},{-0.0263672,-2.98438,-14.3021},{-0.00341797,2.02246,-14.3021},{5.49878,7.20508,-14.3021},{5.38892,3.4043,-14.3021},{3.23657,2.76074,-14.3021},{-1.51001,7.66309,-14.3021},{-7.6416,4.8125,-14.3021},{-6.56592,-4.59131,-14.3021},{9.552,2.22363,-13.7588},{9.93262,-3.85254,-13.7588}};
		hangPos[] = {{1.72168,-8.39771,-0.172569},{2.08838,-14.4236,-0.27536},{-13.7158,-10.4808,-0.795174},{-12.9072,-16.4105,-0.895065}};
	};
	class Land_Church_02: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Church_02a: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Church_05R: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Mil_Barracks_i: MilitarySpecial {
		lootPos[] = {{5.39038,-1.75684,-1.09824},{1.46753,-0.131836,-1.09824},{1.29395,-2.16211,-1.09824},{-1.78394,-0.168945,-1.09824},{-1.80615,-1.97656,-1.09824},{-4.77881,0.0488281,-1.09824},{-5.39258,-2.11816,-1.09824},{-5.47046,2.58105,-1.09824},{-8.32593,-0.144531,-1.09824},{-9.14966,-2.55859,-1.09824},{-1.95288,2.57715,-1.09824},{5.46362,2.57813,-1.09824}};
	};	//Qty: 2
	class Land_A_TVTower_Base: Industrial {
		lootPos[] = {{-0.982422,-1.92627,-2.21573},{-2.01782,-4.2417,-2.21918},{-0.759277,1.42139,-2.21573}};
	};
	class Land_Mil_House: Military {
		vehPos[] = {{13.439,3.25244,-5.71244,84}};
		lootPos[] = {{12.457,1.4248,-5.51439},{11.0391,4.85278,-5.51439},{13.667,4.42139,-5.51439}};
	};
	class Land_Misc_Cargo1Ao: Industrial {
		lootPos[] = {{0.48877,-1.61377,-1.09224},{0.012207,2.19263,-1.09224},{0.00976563,0.19043,-1.09224}};
	};
	class Land_Misc_Cargo1Bo: Industrial {
		lootPos[] = {{-0.322021,1.68555,-1.09222},{0.548584,-1.96289,-1.09222},{0.223389,-0.580078,-1.09222}};
	};
	class Land_Nav_Boathouse: Industrial {
		lootPos[] = {{17.3271,-20.1973,5.8072},{8.30371,-20.252,5.80898},{7.69434,-26.3506,5.80898},{7.9707,-4.63477,5.69823},{5.61719,-13.543,5.70075}};
	};
	class Land_ruin_01: Residential {
		lootPos[] = {{-4.31934,-0.115234,-1.45578},{3.41309,0.270508,-1.71365},{3.00293,3.42773,-1.55765},{0.62207,-1.73779,-1.49048}};
	};
	class Land_wagon_box: Industrial {
		lootPos[] = {{0.542969,-3.89453,-0.776679},{0.47998,-0.608398,-0.776638},{0.515381,3.03857,-0.776592}};
	};
	class Land_HouseV2_04_interier: Residential {
		lootPos[] = {{7.49463,5.8374,-5.73902},{7.50989,-0.930176,-5.74176},{1.95532,4.16406,-5.73938},{2.10876,6.60645,-5.7386},{-2.30017,4.22461,-5.73936},{-5.13306,6.74365,-5.73856},{-4.74658,2.68457,-5.73985}};
	};
	class Land_HouseV2_01A: Residential {
		lootPos[] = {{-3.52881,-3.16895,-5.60346},{-1.62988,-3.25439,-5.66887}};
	};
	class Land_psi_bouda: Residential {
		maxRoaming = 4;
		lootPos[] = {{-1.77002,-1.45166,1.95942}};
	}; // Qty: 183
	class Land_KBud: Residential {
		zombieChance = 0;
		maxRoaming = 0;
		lootPos[] = {{-0.0170898,0.0114746,-0.66367}};
	}; // Qty: 90
	class Land_A_Castle_Bergfrit: Residential {
		lootPos[] = {{0.0185547,1.91602,-2.8364},{1.19141,-1.43848,-2.8364},{-2.36816,3.32275,-0.628571},{2.36133,3.86768,1.83972},{2.48438,-3.20557,3.85541},{-2.09473,-3.44873,6.31903},{-1.15918,3.13867,8.76691},{1.74707,1.26807,8.76691},{-0.540039,-2.35254,8.76691},{-1.62207,-4.27979,13.4801},{-2.23047,4.82471,16.856},{1.67578,-0.825195,16.8505}};
	}; // Qty: 3
	class Land_A_Castle_Stairs_A: Residential {
		lootPos[] = {{0.697998,-1.79395,0.726929},{8.3938,0.890625,0.875122},{8.17261,1.48926,7.02588}};
	}; // Qty: 3
	class Land_A_Castle_Gate: Residential {
		lootChance = 0.7;
		lootPos[] = {{0.244141,-4.48486,-3.14362},{-1.25293,2.98779,-3.07028},{4.50684,-3.31152,-2.94885},{4.55176,3.29834,-2.94858},{7.94824,1.4082,-2.91003}};
	}; // Qty: 3
	class Land_Mil_Barracks: Military {
		lootPos[] = {};
	}; // Qty: 8
	class Land_Mil_Barracks_L: Military {
		lootPos[] = {};
	}; // Qty: 5 
	class Land_Barn_W_02: Farm {
		lootPos[] = {{3.16504,5.56543,-2.31409},{3.35938,-0.152344,-2.31305},{2.53613,-5.89453,-2.30957},{-2.94629,-5.01367,-2.31006},{-2.84375,0.212891,-2.31183},{-5.63281,4.8291,-2.31363}};
	}; // Qty: 3
	class Land_sara_domek_zluty: Residential {
		maxRoaming = 1;
		lootPos[] = {{2.95703,3.00732,-2.4337},{7.06738,2.95557,-2.4337},{6.36304,-0.236328,-2.43375},{0.627686,-0.586914,-2.43387},{-0.659912,2.05371,-2.4337},{-2.77515,0.751953,-2.43372},{-5.07666,3.04492,-2.43361},{-6.17139,-2.33691,-2.43382},{-3.75293,-3.54688,-2.43382}};
	}; // Qty: 3
	class Land_HouseV_3I4: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 103
	class Land_Shed_W4: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 172
	class Land_HouseV_3I1: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 103
	class Land_HouseV_1L2: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 101
	class Land_HouseV_1T: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 90
	class Land_telek1: Industrial {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 4
	class Land_Rail_House_01: Industrial {
		lootPos[] = {{2.81152,3.61426,-1.28266},{-1.82178,3.10547,-1.28266},{0.487793,3.38867,-1.28266}};
	}; // Qty: 9
	class Land_HouseV_2I: Default {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 83
	class Land_Misc_deerstand: Military {
		zombieChance = 0;
		lootChance = 0.5;
		maxRoaming = 3;
		lootPos[] = {{-0.923828,-0.808594,1.08539},{0.419922,-0.237305,1.08539}};
	}; // Qty: 56

	class Land_Stan: Military {
		maxRoaming = 1;
		lootPos[] = {{0.880371,2.16016,-1.14058},{-0.37207,-0.763672,-1.14759}};
	}; // Qty: 1

	class CampEast: Military {
		maxRoaming = 1;
		lootPos[] = {{-1.05713,-1.80762,-1.31049},{0.627441,1.83398,-1.31049}};
	}; // Qty: 1
	class Land_stan_east: Military {
		maxRoaming = 1;
		lootPos[] = {{2,-3.4,-1.20093},{-1,1,-1.27363},{-2,-3.4,-1.27363},{1,1,-1.27363}};
	}; // Qty: 1

	class MASH: Hospital {
		maxRoaming = 1;
		lootChance = 0.4;
		lootPos[] = {{1.18213,-1.65039,-1.17793},{0.24707,0.799316,-1.17803}};
	}; // Qty: 1
	class MASH_EP1: MASH {};

	class UH1Wreck_Ori: Military {
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 0;
		lootChance = 0;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
	};
	class Land_kamaz: TavianaDZ {
		zombieClass[] = {"z_soldier_heavy","z_soldier_heavy"};
		zombieChance = 1;
		lootChance = 1;
		minRoaming = 5;
		maxRoaming = 9;
		lootPos[] = {{-2.26855,2.1084,-1.78322},{-0.986328,-0.760742,-1.78323},{-1.16699,-3.86816,-1.78323},{0.269531,-5.41943,-1.78321},{1.94141,-3.60742,-1.78316},{1.25928,0.82666,-1.7831},{2.22852,3.42529,-1.78313}};
	};
	//Origins Wrecks
	class Land_zygul_wrecked : Residential {
		maxRoaming = 1;
		lootPos[] = {};
	};
	class Land_sedan_weck : Residential {
		maxRoaming = 1;
		lootPos[] = {};
	};
	class Land_Trabant_wreck : Residential {
		maxRoaming = 1;
		lootPos[] = {};
	};
	class Land_kamaz_hasic : Residential {
		minRoaming = 1;
		maxRoaming = 1;
		zombieClass[] = {"ori_pozarnik","ori_pozarnik","ori_pozarnik","ori_zombie6Ln"};
		lootPos[] = {};
	};
	class USMC_WarfareBFieldhHospital: MASH {
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_soldier","z_soldier_heavy"};
		lootPos[] = {{-3.52246,-5.03931,1.14726},{2.36621,-4.52295,1.14786},{1.39063,-0.423096,1.14746},{1.14258,5.00952,1.1478},{3.7124,1.89795,1.14788}};
	}; // Qty: 1

	class Land_Ind_Shed_02_main: Default {
		zombieChance = 0;
		maxRoaming = 3;
	}; // Qty: 283
	class HouseRoaming: Residential {
		lootChance = 0;
		zombieChance = 0;
		maxRoaming = 2;
	};
	class FarmRoaming: Farm {
		lootChance = 0;
		zombieChance = 0;
		maxRoaming = 2;
	};
	class Land_Shed_W03: HouseRoaming {}; // Qty: 206
	class Land_HouseV_1I3: HouseRoaming {}; // Qty: 117
	class Land_HouseV_1L1: HouseRoaming {}; // Qty: 97
	class Land_HouseV_1I2: HouseRoaming {};
	class Land_HouseV_2L: HouseRoaming {};
	class Land_HouseV_2T1: HouseRoaming {};
	class Land_houseV_2T2: HouseRoaming {};
	class Land_HouseV_3I2: HouseRoaming {};
	class Land_HouseV_3I3: HouseRoaming {};
	class Land_HouseBlock_A1: HouseRoaming {};
	class Land_HouseBlock_A1_2: HouseRoaming {};
	class Land_HouseBlock_A2: HouseRoaming {};
	class Land_HouseBlock_A2_1: HouseRoaming {};
	class Land_HouseBlock_A3: HouseRoaming {};
	class Land_HouseBlock_B1: HouseRoaming {};
	class Land_HouseBlock_B2: HouseRoaming {};
	class Land_HouseBlock_B3: HouseRoaming {};
	class Land_HouseBlock_B4: HouseRoaming {};
	class Land_HouseBlock_B5: HouseRoaming {};
	class Land_HouseBlock_B6: HouseRoaming {};
	class Land_HouseBlock_C1: HouseRoaming {};
	class Land_HouseBlock_C2: HouseRoaming {};
	class Land_HouseBlock_C3: HouseRoaming {};
	class Land_HouseBlock_C4: HouseRoaming {};
	class Land_HouseBlock_C5: HouseRoaming {};
	class Land_HouseV2_01B: HouseRoaming {}; // Qty: 20
	class Land_Misc_Cargo1D: HouseRoaming {}; // Qty: 29
	class Land_HouseV2_03: HouseRoaming {}; // Qty: 8
	class Land_Ind_Shed_01_end: HouseRoaming {}; // Qty: 266
	class Land_A_statue01: HouseRoaming {
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2","z_soldier","z_soldier_heavy","z_policeman"};
		minRoaming = 2;
		maxRoaming = 8;
	}; // Qty: 3
	class Land_Shed_W02: FarmRoaming {}; // Qty: 213
	//allow 
	class Grave: HouseRoaming {
		maxRoaming = 3;
	};
	class GraveCross1: HouseRoaming {	
		maxRoaming = 2;
	};
	class GraveCross2: HouseRoaming {	
		maxRoaming = 2;
	};
	class GraveCrossHelmet: Military {	
		maxRoaming = 4;
	};
};
