class CfgPatches
{
	class CUP_Weapons_AK
	{
		units[] = {};
		weapons[] = {"CUP_arifle_RPK74","CUP_arifle_RPK74_top_rail","CUP_arifle_RPK74_45","CUP_arifle_RPK74_45_top_rail","CUP_arifle_RPK74M","CUP_arifle_RPK74M_top_rail","CUP_arifle_RPK74M_railed"};
		requiredVersion = 0.1;
		requiredAddons[] = {""};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class CUP_PicatinnyUnderMount;
class CUP_DovetailMount;
class CUP_EastMuzzleSlotPBS4;
class CUP_EastMuzzleSlot9mm;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556: asdg_MuzzleSlot
{
	class compatibleItems;
};
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_arifle_RPK74: CUP_arifle_AK_Base
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		model = "\CUP\Weapons\CUP_Weapons_AK\CUP_rpkn.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_AK\data\UI\gear_rpk_X_CA.paa";
		magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_bakelite_M","CUP_30Rnd_762x39_AK103_bakelite_M","CUP_30Rnd_762x39_AK47_TK_M","CUP_20Rnd_762x39_AMD63_M","CUP_10Rnd_762x39_SaigaMk03_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};
		magazineWell[] = {"CBA_762x39_AK","CBA_762x39_RPK","AK_762x39"};
		displayname = "$STR_CUP_dn_rpk";
		recoil = "Recoil_CUP_RPK";
		aiDispersionCoefY = 14;
		aiDispersionCoefX = 14;
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_AK\Data\Anim\AK.rtm"};
		drySound[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\Dry",0.56234133,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_reload",1,1,10};
		modes[] = {"manual","close","short","medium","far_optic1","far_optic2","Single"};
		jsrs_soundeffect = "JSRS2_Distance_Effects_RPK";
		initSpeed = -1.0;
		ACE_barrelTwist = 195.072;
		ACE_barrelLength = 589.28;
		deployedPivot = "bipod";
		hasBipod = 1;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down","db-3",1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up","db-3",1,20};
		cameraDir = "eye_look";
		discretedistance[] = {350,100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[] = {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
		discretedistanceinitindex = 3;
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"CUP\Weapons\CUP_Weapons_AK\Data\rpk_body_co.paa","CUP\Weapons\CUP_Weapons_AK\Data\rpk_furniture_co.paa"};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"CUP_ak74_Closure_SoundSet","CUP_akm_Shot_SoundSet","CUP_lmg1_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"CUP_ak74_Closure_SoundSet","CUP_akm_ShotSD_SoundSet","CUP_Rifle1_SD_Tail_SoundSet"};
			};
			reloadTime = 0.1;
			ffCount = 30;
			dispersion = 0.001125;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
		};
		class manual: Mode_FullAuto
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"CUP_ak74_Closure_SoundSet","CUP_akm_Shot_SoundSet","CUP_lmg1_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"CUP_ak74_Closure_SoundSet","CUP_akm_ShotSD_SoundSet","CUP_Rifle1_SD_Tail_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 12;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 500;
			maxRangeProbab = 0.04;
		};
		class far_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 650;
			maxRangeProbab = 0.01;
		};
		class far_optic2: far_optic1
		{
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.01;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"CUP_ak74_Closure_SoundSet","CUP_akm_Shot_SoundSet","CUP_lmg1_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"CUP_ak74_Closure_SoundSet","CUP_akm_ShotSD_SoundSet","CUP_Rifle1_SD_Tail_SoundSet"};
			};
			reloadTime = 0.1;
			dispersion = 0.001125;
			aiRateOfFireDistance = 650;
			minRange = 400;
			minRangeProbab = 0;
			midRange = 600;
			midRangeProbab = 0;
			maxRange = 800;
			maxRangeProbab = 0;
		};
		class Library
		{
			libTextDesc = "$STR_CUP_lib_rpk";
		};
		descriptionShort = "$STR_CUP_dss_rpk762";
		inertia = 0.6;
		dexterity = 1.4;
		aimTransitionSpeed = 0.8;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 101.4;
			class CUP_DovetailMount_AK: CUP_DovetailMount
			{
				iconPosition[] = {0.62,0.28};
				iconScale = 0.15;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint = "Bottom";
			};
			class CUP_PicatinnySideMountAK: CUP_PicatinnySideMount
			{
				iconPosition[] = {0.33,0.34};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint = "Center";
			};
			class CUP_EastMuzzleSlotAK: CUP_EastMuzzleSlot9mm
			{
				iconPosition[] = {0.04,0.35};
				iconScale = 0.15;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint = "Right";
			};
		};
	};
	class CUP_arifle_RPK74_top_rail: CUP_arifle_RPK74
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		model = "\CUP\Weapons\CUP_Weapons_AK\CUP_rpkn_top_rail.p3d";
		displayName = "$STR_CUP_dn_rpk_top_rail";
		picture = "\CUP\Weapons\CUP_Weapons_AK\data\UI\gear_rpk_top_rail_X_CA.paa";
		class WeaponSlotsInfo
		{
			mass = 101.4;
			class CUP_PicatinnyTopMountAK: CUP_PicatinnyTopShortMount
			{
				iconPosition[] = {0.62,0.23};
				iconScale = 0.15;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint = "Bottom";
			};
			class CUP_PicatinnySideMountAK: CUP_PicatinnySideMount
			{
				iconPosition[] = {0.33,0.34};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint = "Center";
			};
			class CUP_EastMuzzleSlotAK: CUP_EastMuzzleSlot9mm
			{
				iconPosition[] = {0.04,0.35};
				iconScale = 0.15;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint = "Right";
			};
			allowedSlots[] = {901};
		};
	};
	class CUP_arifle_RPK74_45: CUP_arifle_RPK74
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		model = "\CUP\Weapons\CUP_Weapons_AK\CUP_rpk74n.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_AK\data\UI\gear_rpk74_X_CA.paa";
		displayname = "$STR_CUP_dn_rpk74_45";
		descriptionShort = "$STR_CUP_dss_rpk";
		magazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_Subsonic_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M","CUP_30Rnd_TE1_White_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M","CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_Subsonic_545x39_AK74M_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M","CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M","CUP_30Rnd_TE1_White_Tracer_545x39_AK74M_M","CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74M_M","CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_Subsonic_545x39_AK74_plum_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M","CUP_30Rnd_TE1_Red_Tracer_545x39_AK74_plum_M","CUP_30Rnd_TE1_White_Tracer_545x39_AK74_plum_M","CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74M_camo_M","CUP_20Rnd_545x39_AKSU_M","CUP_20Rnd_Subsonic_545x39_AKSU_M","CUP_60Rnd_545x39_AK74M_M","CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M","CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M","CUP_60Rnd_TE1_White_Tracer_545x39_AK74M_M","CUP_60Rnd_TE1_Yellow_Tracer_545x39_AK74M_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};
		magazineWell[] = {"CBA_545x39_AK","CBA_545x39_RPK","AK_545x39"};
		recoil = "Recoil_CUP_RPK74";
		cameraDir = "eye_look";
		discretedistance[] = {440,100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[] = {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
		discretedistanceinitindex = 3;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 101.4;
			class CUP_DovetailMount_AK: CUP_DovetailMount
			{
				iconPosition[] = {0.62,0.28};
				iconScale = 0.15;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint = "Bottom";
			};
			class CUP_PicatinnySideMountAK: CUP_PicatinnySideMount
			{
				iconPosition[] = {0.33,0.34};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint = "Center";
			};
			class CUP_EastMuzzleSlotAK: CUP_EastMuzzleSlotPBS4
			{
				iconPosition[] = {0.04,0.35};
				iconScale = 0.15;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint = "Right";
			};
		};
	};
	class CUP_arifle_RPK74_45_top_rail: CUP_arifle_RPK74_45
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		model = "\CUP\Weapons\CUP_Weapons_AK\CUP_rpk74n_top_rail.p3d";
		displayName = "$STR_CUP_dn_rpk74_top_rail";
		picture = "\CUP\Weapons\CUP_Weapons_AK\data\UI\gear_rpk74_top_rail_X_CA.paa";
		class WeaponSlotsInfo
		{
			mass = 101.4;
			class CUP_PicatinnyTopMountAK: CUP_PicatinnyTopShortMount
			{
				iconPosition[] = {0.62,0.23};
				iconScale = 0.15;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint = "Bottom";
			};
			class CUP_PicatinnySideMountAK: CUP_PicatinnySideMount
			{
				iconPosition[] = {0.33,0.34};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint = "Center";
			};
			class CUP_EastMuzzleSlotAK: CUP_EastMuzzleSlotPBS4
			{
				iconPosition[] = {0.04,0.35};
				iconScale = 0.15;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint = "Right";
			};
			allowedSlots[] = {901};
		};
	};
	class CUP_arifle_RPK74M: CUP_arifle_RPK74
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		model = "\CUP\Weapons\CUP_Weapons_AK\CUP_rpk74m.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_AK\data\UI\gear_rpk74m_X_CA.paa";
		displayname = "$STR_CUP_dn_rpk74m";
		descriptionShort = "$STR_CUP_dss_rpk";
		magazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_Subsonic_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M","CUP_30Rnd_TE1_White_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M","CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_Subsonic_545x39_AK74M_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M","CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M","CUP_30Rnd_TE1_White_Tracer_545x39_AK74M_M","CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74M_M","CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_Subsonic_545x39_AK74_plum_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M","CUP_30Rnd_TE1_Red_Tracer_545x39_AK74_plum_M","CUP_30Rnd_TE1_White_Tracer_545x39_AK74_plum_M","CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74M_camo_M","CUP_20Rnd_545x39_AKSU_M","CUP_20Rnd_Subsonic_545x39_AKSU_M","CUP_60Rnd_545x39_AK74M_M","CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M","CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M","CUP_60Rnd_TE1_White_Tracer_545x39_AK74M_M","CUP_60Rnd_TE1_Yellow_Tracer_545x39_AK74M_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};
		magazineWell[] = {"CBA_545x39_AK","CBA_545x39_RPK","AK_545x39"};
		recoil = "Recoil_CUP_RPK74";
		cameraDir = "eye_look";
		discretedistance[] = {440,100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[] = {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
		discretedistanceinitindex = 3;
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"CUP\Weapons\CUP_Weapons_AK\Data\rpk_body_co.paa","CUP\Weapons\CUP_Weapons_AK\Data\rpk_furniture_co.paa","CUP\Weapons\CUP_Weapons_AK\Data\rpk74m_furniture_co.paa","CUP\Weapons\CUP_Weapons_AK\Data\rpk74m_other_co.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 101.4;
			class CUP_DovetailMount_AK: CUP_DovetailMount
			{
				iconPosition[] = {0.62,0.28};
				iconScale = 0.15;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint = "Bottom";
			};
			class CUP_PicatinnySideMountAK: CUP_PicatinnySideMount
			{
				iconPosition[] = {0.33,0.34};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint = "Center";
			};
			class CUP_EastMuzzleSlotAK: CUP_EastMuzzleSlotPBS4
			{
				iconPosition[] = {0.04,0.35};
				iconScale = 0.15;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint = "Right";
			};
		};
	};
	class CUP_arifle_RPK74M_top_rail: CUP_arifle_RPK74M
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		model = "\CUP\Weapons\CUP_Weapons_AK\CUP_rpk74m_top_rail.p3d";
		displayName = "$STR_CUP_dn_rpk74m_top_rail";
		picture = "\CUP\Weapons\CUP_Weapons_AK\data\UI\gear_rpk74m_top_rail_X_CA.paa";
		class WeaponSlotsInfo
		{
			mass = 101.4;
			class CUP_PicatinnyTopMountAK: CUP_PicatinnyTopShortMount
			{
				iconPosition[] = {0.62,0.23};
				iconScale = 0.15;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint = "Bottom";
			};
			class CUP_PicatinnySideMountAK: CUP_PicatinnySideMount
			{
				iconPosition[] = {0.33,0.34};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint = "Center";
			};
			class CUP_EastMuzzleSlotAK: CUP_EastMuzzleSlotPBS4
			{
				iconPosition[] = {0.04,0.35};
				iconScale = 0.15;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint = "Right";
			};
			allowedSlots[] = {901};
		};
	};
	class CUP_arifle_RPK74M_railed: CUP_arifle_RPK74M_top_rail
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		model = "\CUP\Weapons\CUP_Weapons_AK\CUP_rpk74m_railed.p3d";
		displayName = "$STR_CUP_dn_rpk74m_railed";
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_AK\Data\Anim\AK_hg.rtm"};
		picture = "\CUP\Weapons\CUP_Weapons_AK\data\UI\gear_rpk74m_railed_X_CA.paa";
	};
};
