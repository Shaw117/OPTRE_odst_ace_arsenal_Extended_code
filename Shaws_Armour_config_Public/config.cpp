#include "BIS_AddonInfo.hpp"
#define _ARMA_

class CfgPatches
{
    class ArmorsShaw
    {
        name = "Shaw Armours";
        author = "Shaw";
        url = "";
        requiredVersion = 1.0;
        requiredAddons[]=
        {
            "A3_Weapons_F",
            "A3_characters_f_bootcamp",
            "A3_Characters_F",
            "A3_air_f_orange",
            "OPTRE_Core",
            "OPTRE_UNSC_Units",
            "OPTRE_UNSC_Units_Army",
            "OPTRE_Weapons",
            "OPTRE_Weapons_Items"
        };
		weapons[]=
        {
            "M52D_Shaw",
            "CH252D_Shaw",
            "CH252D_Shaw_dp"
        };
		units[] =
		{

		};
	};
};
class cfgWeapons
{
    //Externals
    class ItemInfo;
    class UniformItem;
    class VestItem;
    class HeadgearItem;
    class Uniform_Base;
    class HitpointsProtectionInfo;

    class OPTRE_UNSC_M52D_Armor_Light;

	class OPTRE_UNSC_CH252D_Helmet;
    class OPTRE_UNSC_CH252D_Helmet_dp;
    class OPTRE_UNSC_RECON_Helmet;
    class OPTRE_UNSC_RECON_Helmet_dp;

    class OPTRE_ILCS_Rucksack_Black;

	class OPTRE_UNSC_Army_Uniform_WDL;

	class CH252D_Shaw : OPTRE_UNSC_CH252D_Helmet
	{
		author = "Shaw";
		displayName = "[Shaw] CH252D Helmet";
		class XtdGearInfo
		{
			model = "CH252D_Shaw";
			Helmet = "base";
			visor = "Default";
		};

		hiddenSelectionsTextures[] = {
			"\Shaws_Armour_config_Public\armours\helm\odst_helmet_base.paa",
			"\Shaws_Armour_config_Public\armours\helm\odst_visor_hr.paa"
		};
	};
	class CH252D_Shaw_dp : OPTRE_UNSC_CH252D_Helmet_dp
	{
		author = "Shaw";
		displayName = "[Shaw] CH252D Helmet";
		hiddenSelectionsTextures[] = {
			"\Shaws_Armour_config_Public\armours\helm\odst_helmet_base.paa",
			""
		};
	};
	//class RECON_Shaw : OPTRE_UNSC_RECON_Helmet
	//{
	//	author = "Shaw";
	//	displayName = "[Shaw] RECON Helmet";
	//	class XtdGearInfo
	//	{
	//		model = "RECON_Shaw";
	//		Helmet = "base";
	//		visor = "Gold";
	//	};

	//	hiddenSelectionsTextures[] = {
	//		"\Shaws_Armour_config_Public\armours\helm\Recon_base.paa",
	//		"\Shaws_Armour_config_Public\armours\helm\recon_visor.paa"
	//	};
	//};
	//class RECON_Shaw_dp : OPTRE_UNSC_RECON_Helmet_dp
	//{
	//	author = "Shaw";
	//	displayName = "[Shaw] RECON Helmet";
	//	hiddenSelectionsTextures[] = {
	//		"\Shaws_Armour_config_Public\armours\helm\Recon_base.paa",
	//		""
	//	};
	//};

	class M52D_Shaw : OPTRE_UNSC_M52D_Armor_Light
	{
		author = "Shaw";
		displayName = "[Shaw] M52D ODST vest";
		mass = 50;
		descriptionShort = "Shaw";
		class XtdGearInfo
		{
			model = "M52D_Shaw";
			camo = "base";
			shoulders1 = "ODST";
			shoulders2 = "ODST";
			Knife = "None";
			pouch = "None";
			Ghillie = "No";

		};
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"\Shaws_Armour_config_Public\armours\vest\odst_legs.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"\Shaws_Armour_config_Public\armours\vest\armour_base.paa"
		};
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			//"AS_ODSTLeft",
			//"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_ODSTCQBLeft",
			 "AS_ODSTCQBRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		class iteminfo : iteminfo
		{
			containerClass = Supply130;
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				//"AS_ODSTLeft",
				//"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};

	// Shaw ODST Vests
	#include <armours\Vestbase.hpp>
    #include <armours\Vestblue.hpp>
	//#include <armours\VestReaper.hpp>
    // Shaw ODST Helmets
	#include <armours\helmbase.hpp>
    #include <armours\helmblue.hpp>
};
class XtdGearModels
{
	class CfgWeapons
	{
		class M52D_Shaw
		{
			label = "[Shaw] M52D";
			author = "Shaw";
			options[] =
			{
				"camo",
				"shoulders1",
				"shoulders2",
				"knife",
				"pouch",
				"Ghillie"
			};
			class camo
			{
				values[] =
				{
					"base",
					"blue"
				};
			};
			class shoulders1
			{
				label = "Left Shoulder";
				changeingame = 1;
				values[] =
				{
					"ODST",
					"CQB",
					"Sniper",
					"None"
				};
				class ODST
				{
					description = "Restore your equipment to its default state.";
				};
			};
			class shoulders2 : shoulders1
			{
				label = "Right Shoulder";
			};
			class knife
			{
				label = "Knife";
				changeingame = 1;
				values[] =
				{
					"Back",
					"Shoulder",
					"None"
				};
			};
			class Ghillie
			{
				label = "Ghillie";
				changeingame = 1;
				values[] =
				{
					"Yes",
					"No"
				};
			};
			class pouch
			{
				label = "pouch";
				changeingame = 1;
				values[] =
				{
					"type1",
					"type2",
					"type3",
					"type4",
					"type5",
					"type6",
					"None"
				};
			};
		};
		class CH252D_Shaw
		{
			label = "[Shaw] CH252D Helmet";
			author = "Shaw";
			options[] =
			{
				"visor",
				"Helmet"
			};
			class Helmet
			{
				values[] =
				{
					"base",
					"blue"
				};
			};
			class visor
			{
				hiddenselection = "visor";
				values[] =
				{
					"Default",
					"Black"
				};
			};
		};
		//class VX19_Shaw
		//{
		//	label = "[Shaw] VX19 Helmet";
		//	author = "Shaw";
		//	options[] =
		//	{
		//		//"visor",
		//		"Helmet"
		//	};
		//	class Helmet
		//	{
		//		values[] =
		//		{
		//			"Reaper",
		//			"WarHawk"
		//		};
		//		class Reaper
		//		{
		//			description = "Restore your equipment to its default state.";
		//		};
		//		class WarHawk
		//		{
		//			description = "Lion's made a thing";
		//		};
		//	};
			//class visor
			//{
			//	hiddenselection = "visor";
			//	values[] =
			//	{
			//		"Default"
			//	};
			//	class Default
			//	{
			//		description = "Restore your equipment to its default state.";
			//	};
			//};
		};
		//class RECON_Shaw
		//{
		//	label = "[Shaw] RECON Helmet";
		//	author = "Shaw";
		//	options[] =
		//	{
		//		"visor",
		//		"Helmet"
		//	};
		//	class Helmet
		//	{
		//		values[] =
		//		{
		//			"base",
		//			"Blue"
		//		};
		//	};
		//	class visor
		//	{
		//		hiddenselection = "visor";
		//		values[] =
		//		{
		//			"Gold",
		//		};
		//	};
		//};
	};
};