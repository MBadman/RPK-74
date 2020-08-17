class CfgPatches
{
	class CUP_Weapons_AK
	{
		units[] = {};
		weapons[] = {"CUP_arifle_RPK74","CUP_arifle_RPK74_top_rail","CUP_arifle_RPK74_45","CUP_arifle_RPK74_45_top_rail","CUP_arifle_RPK74M","CUP_arifle_RPK74M_top_rail","CUP_arifle_RPK74M_railed"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Acc","A3_Weapons_F_Beta_Acc","A3_Weapons_F_EPA_Acc","A3_Weapons_F_EPB_Acc","A3_Weapons_F_Bootcamp","A3_Data_F","A3_UI_F","A3_Anims_F","asdg_jointrails"};
	};
};



class CfgSoundCurves
{
	class CUP_soundCurve
	{
		points[] = {{0.0,1},{1.0,0}};
	};
	class CUP_rifleSoundCurve
	{
		points[] = {{0.0,1},{0.001,0.92},{0.005,0.89},{0.1,0.8475},{0.2,0.8096},{0.4,0.7533},{0.6,0.6315},{0.8,0.4968},{0.9,0.3968},{1.0,0}};
	};
	class CUP_silencedSoundCurve
	{
		points[] = {{0.0,1},{0.001,0.85},{0.005,0.69},{0.1,0.5475},{0.2,0.4596},{0.4,0.3033},{0.6,0.2515},{0.8,0.1268},{0.9,0.0468},{1.0,0}};
	};
};
class cfgDistanceFilters
{
	class CUP_defaultDistanceFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 150;
		qFactor = 1;
		innerRange = 400;
		range = 2600;
		powerFactor = 32;
	};
	class CUP_rifleTailDistanceFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 150;
		qFactor = 1;
		innerRange = 350;
		range = 1800;
		powerFactor = 32;
	};
};
class CfgSoundShaders
{
	class CUP_AK74_Closure_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\Closure_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\Closure_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\Closure_3",1}};
		volume = 1.912;
		range = 15;
		rangeCurve[] = {{0,1},{15,0}};
	};
	class CUP_AK74_0m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\0m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\0m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\0m_3",1}};
		volume = 1.912;
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class CUP_AK74_50m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\50m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\50m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\50m_3",1}};
		volume = 1.6252;
		range = 150;
		rangeCurve[] = {{0,0},{50,1},{150,0}};
	};
	class CUP_AK74_150m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\150m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\150m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\150m_3",1}};
		volume = 1.464;
		range = 550;
		rangeCurve[] = {{0,0},{50,0},{150,1},{550,0}};
	};
	class CUP_AK74_550m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\550m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\550m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\550m_3",1}};
		volume = 0.823;
		range = 1000;
		rangeCurve[] = {{0,0},{150,0},{550,1},{1000,0}};
	};
	class CUP_AK74_1000m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\1000m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\1000m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\1000m_3",1}};
		volume = "(0.34-(interior*0.34))";
		range = 1800;
		rangeCurve[] = {{0,0},{550,0},{1000,1},{1800,0}};
	};
	class CUP_AK74_1800m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\1800m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\1800m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\1800m_3",1}};
		volume = "(0.35-(interior*0.35))";
		range = 3000;
		rangeCurve[] = {{0,0},{1000,0},{1800,1},{3000,0}};
	};
	class CUP_AK74_SD_0m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_0m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_0m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_0m_3",1}};
		volume = 0.85;
		range = 30;
		rangeCurve[] = {{0,1},{30,0}};
	};
	class CUP_AK74_SD_30m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_30m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_30m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_30m_3",1}};
		volume = 0.75;
		range = 100;
		rangeCurve[] = {{0,0},{30,1},{150,0}};
	};
	class CUP_AK74_SD_150m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_150m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_150m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_150m_3",1}};
		volume = 0.65;
		range = 350;
		rangeCurve[] = {{0,0},{30,0},{150,1},{350,0}};
	};
	class CUP_AK74_SD_350m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_350m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_350m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AK74\SD_350m_3",1}};
		volume = "(0.55-(interior*0.55))";
		range = 700;
		rangeCurve[] = {{0,0},{150,0},{350,1},{700,0}};
	};
	class CUP_AKM_Closure_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\Closure_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\Closure_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\Closure_3",1}};
		volume = 1.912;
		range = 15;
		rangeCurve[] = {{0,1},{15,0}};
	};
	class CUP_AKM_0m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\0m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\0m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\0m_3",1}};
		volume = 1.912;
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class CUP_AKM_50m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\50m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\50m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\50m_3",1}};
		volume = 1.6252;
		range = 150;
		rangeCurve[] = {{0,0},{50,1},{150,0}};
	};
	class CUP_AKM_150m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\150m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\150m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\150m_3",1}};
		volume = 1.464;
		range = 550;
		rangeCurve[] = {{0,0},{50,0},{150,1},{550,0}};
	};
	class CUP_AKM_550m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\550m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\550m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\550m_3",1}};
		volume = 0.823;
		range = 1000;
		rangeCurve[] = {{0,0},{150,0},{550,1},{1000,0}};
	};
	class CUP_AKM_1000m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\1000m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\1000m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\1000m_3",1}};
		volume = "(0.34-(interior*0.34))";
		range = 1800;
		rangeCurve[] = {{0,0},{550,0},{1000,1},{1800,0}};
	};
	class CUP_AKM_1800m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\1800m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\1800m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\1800m_3",1}};
		volume = "(0.35-(interior*0.35))";
		range = 3250;
		rangeCurve[] = {{0,0},{1000,0},{1800,1},{3250,0}};
	};
	class CUP_AKM_SD_0m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_0m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_0m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_0m_3",1}};
		volume = 0.85;
		range = 30;
		rangeCurve[] = {{0,1},{30,0}};
	};
	class CUP_AKM_SD_30m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_30m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_30m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_30m_3",1}};
		volume = 0.75;
		range = 100;
		rangeCurve[] = {{0,0},{30,1},{150,0}};
	};
	class CUP_AKM_SD_150m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_150m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_150m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_150m_3",1}};
		volume = 0.65;
		range = 350;
		rangeCurve[] = {{0,0},{30,0},{150,1},{350,0}};
	};
	class CUP_AKM_SD_350m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_350m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_350m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\AKM\SD_350m_3",1}};
		volume = "(0.55-(interior*0.55))";
		range = 700;
		rangeCurve[] = {{0,0},{150,0},{350,1},{700,0}};
	};






	class CUP_Rifle1_Meadows_0m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Meadows_0m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Meadows_0m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Meadows_0m_3",1}};
		volume = " 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
		limitation = 1;
	};
	class CUP_Rifle1_Meadows_50m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Meadows_50m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Meadows_50m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Meadows_50m_3",1}};
		volume = " 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 150;
		rangeCurve[] = {{0,0},{50,1},{150,0}};
		limitation = 1;
	};
	class CUP_Rifle1_Meadows_150m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Meadows_150m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Meadows_150m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Meadows_150m_3",1}};
		volume = " 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 550;
		rangeCurve[] = {{0,0},{50,0},{150,1},{1000,0}};
		limitation = 1;
	};
	class CUP_Rifle1_Meadows_550m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Far_550m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Far_550m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Far_550m_3",1}};
		volume = " 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 3000;
		rangeCurve[] = {{0,0},{150,0},{1000,1},{3000,0}};
		limitation = 1;
	};
	class CUP_Rifle1_Houses_0m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Houses_0m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Houses_0m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Houses_0m_3",1}};
		volume = " 3.85*((1-interior/1.4)*houses/3)";
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
		limitation = 1;
	};
	class CUP_Rifle1_Houses_50m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Houses_50m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Houses_50m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Houses_50m_3",1}};
		volume = " 3.85*((1-interior/1.4)*houses/3)";
		range = 150;
		rangeCurve[] = {{0,0},{50,1},{150,0}};
		limitation = 1;
	};
	class CUP_Rifle1_Houses_150m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Houses_150m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Houses_150m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Houses_150m_3",1}};
		volume = " 3.85*((1-interior/1.4)*houses/3)";
		range = 550;
		rangeCurve[] = {{0,0},{50,0},{150,1},{1000,0}};
		limitation = 1;
	};
	class CUP_Rifle1_Houses_550m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Far_550m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Far_550m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Far_550m_3",1}};
		volume = " 3.85*((1-interior/1.4)*houses/3)";
		range = 3000;
		rangeCurve[] = {{0,0},{150,0},{1000,1},{3000,0}};
		limitation = 1;
	};
	class CUP_Rifle1_Trees_0m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\forest_0m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\forest_0m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\forest_0m_3",1}};
		volume = " 3.85*((1-interior/1.4)*trees/3)";
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
		limitation = 1;
	};
	class CUP_Rifle1_Trees_50m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\forest_50m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\forest_50m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\forest_50m_3",1}};
		volume = " 3.85*((1-interior/1.4)*trees/3)";
		range = 150;
		rangeCurve[] = {{0,0},{50,1},{150,0}};
		limitation = 1;
	};
	class CUP_Rifle1_Trees_150m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\forest_150m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\forest_150m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\forest_150m_3",1}};
		volume = " 3.85*((1-interior/1.4)*trees/3)";
		range = 550;
		rangeCurve[] = {{0,0},{50,0},{150,1},{1000,0}};
		limitation = 1;
	};
	class CUP_Rifle1_Trees_550m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_550m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_550m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_550m_3",1}};
		volume = " 3.85*((1-interior/1.4)*trees/3)";
		range = 3000;
		rangeCurve[] = {{0,0},{150,0},{1000,1},{3000,0}};
		limitation = 1;
	};
	class CUP_Rifle1_Forest_0m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_0m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_0m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_0m_3",1}};
		volume = " 3.85*((1-interior/1.4)*Forest/3)";
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
		limitation = 1;
	};
	class CUP_Rifle1_Forest_50m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_50m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_50m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_50m_3",1}};
		volume = " 3.85*(1.3*((1-interior/1.4)*Forest/3))";
		range = 150;
		rangeCurve[] = {{0,0},{50,1},{150,0}};
		limitation = 1;
	};
	class CUP_Rifle1_Forest_150m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_150m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_150m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_150m_3",1}};
		volume = " 3.85*(1.4*((1-interior/1.4)*forest/3))";
		range = 550;
		rangeCurve[] = {{0,0},{50,0},{150,1},{1000,0}};
		limitation = 1;
	};
	class CUP_Rifle1_Forest_550m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_550m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_550m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Forest_550m_3",1}};
		volume = " 3.85*(1.8*((1-interior/1.4)*forest/3))";
		range = 3000;
		rangeCurve[] = {{0,0},{150,0},{1000,1},{3000,0}};
		limitation = 1;
	};
	class CUP_Rifle1_Interior_0m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_0m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_0m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_0m_3",1}};
		volume = " 3.85*((interior)*0.65)";
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
		limitation = 1;
	};
	class CUP_Rifle1_Interior_50m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_50m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_50m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_50m_3",1}};
		volume = " 3.85*((interior)*0.65)";
		range = 150;
		rangeCurve[] = {{0,0},{50,1},{150,0}};
		limitation = 1;
	};
	class CUP_Rifle1_Interior_150m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_150m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_150m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_150m_3",1}};
		volume = " 3.85*((interior)*0.65)";
		range = 550;
		rangeCurve[] = {{0,0},{50,0},{150,1},{550,0}};
		limitation = 1;
	};
	class CUP_Rifle1_Interior_550m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_550m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_550m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1\Interior_550m_3",1}};
		volume = " 3.85*((interior)*0.65)";
		range = 1000;
		rangeCurve[] = {{0,0},{150,0},{550,1},{1000,0}};
		limitation = 1;
	};
	class CUP_Rifle1_SD_Meadows_0m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Meadows_0m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Meadows_0m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Meadows_0m_3",1}};
		volume = "2.40*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class CUP_Rifle1_SD_Meadows_150m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Meadows_150m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Meadows_150m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Meadows_150m_3",1}};
		volume = "2.40*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 700;
		rangeCurve[] = {{0,0},{150,1},{700,0}};
		limitation = 1;
	};
	class CUP_Rifle1_SD_Houses_0m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Houses_0m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Houses_0m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Houses_0m_3",1}};
		volume = "2.40*((1-interior/1.4)*houses/3)";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class CUP_Rifle1_SD_Houses_150m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Houses_150m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Houses_150m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Houses_150m_3",1}};
		volume = "2.40*((1-interior/1.4)*houses/3)";
		range = 700;
		rangeCurve[] = {{0,0},{150,1},{700,0}};
		limitation = 1;
	};
	class CUP_Rifle1_SD_Trees_0m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\forest_0m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\forest_0m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\forest_0m_3",1}};
		volume = "2.40*((1-interior/1.4)*trees/3)";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class CUP_Rifle1_SD_Trees_150m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\forest_150m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\forest_150m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\forest_150m_3",1}};
		volume = "2.40*((1-interior/1.4)*trees/3)";
		range = 700;
		rangeCurve[] = {{0,0},{150,1},{700,0}};
		limitation = 1;
	};
	class CUP_Rifle1_SD_Forest_0m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Forest_0m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Forest_0m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Forest_0m_3",1}};
		volume = "2.40*((1-interior)*Forest)";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class CUP_Rifle1_SD_Forest_150m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Forest_150m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Forest_150m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Forest_150m_3",1}};
		volume = "2.40*((1-interior)*Forest)";
		range = 700;
		rangeCurve[] = {{0,0},{150,1},{700,0}};
		limitation = 1;
	};
	class CUP_Rifle1_SD_Interior_0m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Interior_0m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Interior_0m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Interior_0m_3",1}};
		volume = "2.40*((interior)*0.7)";
		range = 40;
		rangeCurve[] = {{0,1},{40,0}};
		limitation = 1;
	};
	class CUP_Rifle1_SD_Interior_40m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Interior_40m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Interior_40m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Interior_40m_3",1}};
		volume = "2.40*((interior)*0.7)";
		range = 150;
		rangeCurve[] = {{0,0},{40,1},{150,0}};
		limitation = 1;
	};
	class CUP_Rifle1_SD_Interior_150m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Interior_150m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Interior_150m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\Rifle1_SD\Interior_150m_3",1}};
		volume = "2.40*((interior)*0.68)";
		range = 350;
		rangeCurve[] = {{0,0},{40,0},{150,1},{350,0}};
		limitation = 1;
	};





	class CUP_lmg1_Meadows_0m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Meadows_0m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Meadows_0m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Meadows_0m_3",1}};
		volume = " 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
		limitation = 1;
	};
	class CUP_lmg1_Meadows_50m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Meadows_50m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Meadows_50m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Meadows_50m_3",1}};
		volume = " 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 150;
		rangeCurve[] = {{0,0},{50,1},{150,0}};
		limitation = 1;
	};
	class CUP_lmg1_Meadows_150m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Meadows_150m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Meadows_150m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Meadows_150m_3",1}};
		volume = " 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 550;
		rangeCurve[] = {{0,0},{50,0},{150,1},{1000,0}};
		limitation = 1;
	};
	class CUP_lmg1_Meadows_550m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Far_550m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Far_550m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Far_550m_3",1}};
		volume = " 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 3100;
		rangeCurve[] = {{0,0},{150,0},{1000,1},{3100,0}};
		limitation = 1;
	};
	class CUP_lmg1_Houses_0m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Houses_0m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Houses_0m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Houses_0m_3",1}};
		volume = " 3.85*((1-interior/1.4)*houses/3)";
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
		limitation = 1;
	};
	class CUP_lmg1_Houses_50m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Houses_50m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Houses_50m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Houses_50m_3",1}};
		volume = " 3.85*((1-interior/1.4)*houses/3)";
		range = 150;
		rangeCurve[] = {{0,0},{50,1},{150,0}};
		limitation = 1;
	};
	class CUP_lmg1_Houses_150m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Houses_150m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Houses_150m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Houses_150m_3",1}};
		volume = " 3.85*((1-interior/1.4)*houses/3)";
		range = 550;
		rangeCurve[] = {{0,0},{50,0},{150,1},{1000,0}};
		limitation = 1;
	};
	class CUP_lmg1_Houses_550m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Far_550m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Far_550m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Far_550m_3",1}};
		volume = " 3.85*((1-interior/1.4)*houses/3)";
		range = 3100;
		rangeCurve[] = {{0,0},{150,0},{1000,1},{3100,0}};
		limitation = 1;
	};
	class CUP_lmg1_Trees_0m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\forest_0m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\forest_0m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\forest_0m_3",1}};
		volume = " 3.85*((1-interior/1.4)*trees/3)";
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
		limitation = 1;
	};
	class CUP_lmg1_Trees_50m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\forest_50m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\forest_50m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\forest_50m_3",1}};
		volume = " 3.85*((1-interior/1.4)*trees/3)";
		range = 150;
		rangeCurve[] = {{0,0},{50,1},{150,0}};
		limitation = 1;
	};
	class CUP_lmg1_Trees_150m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\forest_150m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\forest_150m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\forest_150m_3",1}};
		volume = " 3.85*((1-interior/1.4)*trees/3)";
		range = 550;
		rangeCurve[] = {{0,0},{50,0},{150,1},{1000,0}};
		limitation = 1;
	};
	class CUP_lmg1_Trees_550m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_550m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_550m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_550m_3",1}};
		volume = " 3.85*((1-interior/1.4)*trees/3)";
		range = 3100;
		rangeCurve[] = {{0,0},{150,0},{1000,1},{3100,0}};
		limitation = 1;
	};
	class CUP_lmg1_Forest_0m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_0m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_0m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_0m_3",1}};
		volume = " 3.85*((1-interior/1.4)*Forest/3)";
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
		limitation = 1;
	};
	class CUP_lmg1_Forest_50m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_50m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_50m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_50m_3",1}};
		volume = " 3.85*(1.3*((1-interior/1.4)*Forest/3))";
		range = 150;
		rangeCurve[] = {{0,0},{50,1},{150,0}};
		limitation = 1;
	};
	class CUP_lmg1_Forest_150m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_150m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_150m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_150m_3",1}};
		volume = " 3.85*(1.4*((1-interior/1.4)*forest/3))";
		range = 550;
		rangeCurve[] = {{0,0},{50,0},{150,1},{1000,0}};
		limitation = 1;
	};
	class CUP_lmg1_Forest_550m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_550m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_550m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Forest_550m_3",1}};
		volume = " 3.85*(1.8*((1-interior/1.4)*forest/3))";
		range = 3100;
		rangeCurve[] = {{0,0},{150,0},{1000,1},{3100,0}};
		limitation = 1;
	};
	class CUP_lmg1_Interior_0m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_0m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_0m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_0m_3",1}};
		volume = " 3.85*((interior)*0.65)";
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
		limitation = 1;
	};
	class CUP_lmg1_Interior_50m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_50m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_50m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_50m_3",1}};
		volume = " 3.85*((interior)*0.65)";
		range = 150;
		rangeCurve[] = {{0,0},{50,1},{150,0}};
		limitation = 1;
	};
	class CUP_lmg1_Interior_150m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_150m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_150m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_150m_3",1}};
		volume = " 3.85*((interior)*0.65)";
		range = 550;
		rangeCurve[] = {{0,0},{50,0},{150,1},{550,0}};
		limitation = 1;
	};
	class CUP_lmg1_Interior_550m_SoundShader
	{
		samples[] = {{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_550m_1",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_550m_2",1},{"\CUP\Weapons\CUP_Weapons_Sounds\tails\lmg1\Interior_550m_3",1}};
		volume = " 3.85*((interior)*0.65)";
		range = 1000;
		rangeCurve[] = {{0,0},{150,0},{550,1},{1000,0}};
		limitation = 1;
	};

};
class CfgSoundSets
{

	class CUP_AK74_Closure_SoundSet
	{
		soundShaders[] = {"CUP_AK74_Closure_SoundShader"};
		volumeFactor = 0.95;
		volumeCurve = "CUP_rifleSoundCurve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "CUP_defaultDistanceFilter";
		frequencyRandomizer = 0.05;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class CUP_AK74_Shot_SoundSet
	{
		soundShaders[] = {"CUP_AK74_0m_SoundShader","CUP_AK74_50m_SoundShader","CUP_AK74_150m_SoundShader","CUP_AK74_550m_SoundShader","CUP_AK74_1000m_SoundShader","CUP_AK74_1800m_SoundShader"};
		volumeFactor = 1.35;
		volumeCurve = "CUP_rifleSoundCurve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "CUP_defaultDistanceFilter";
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class CUP_AK74_ShotSD_SoundSet
	{
		soundShaders[] = {"CUP_AK74_SD_0m_SoundShader","CUP_AK74_SD_30m_SoundShader","CUP_AK74_SD_150m_SoundShader","CUP_AK74_SD_350m_SoundShader"};
		volumeFactor = 0.9;
		volumeCurve = "CUP_silencedSoundCurve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "CUP_defaultDistanceFilter";
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class CUP_AKM_Closure_SoundSet
	{
		soundShaders[] = {"CUP_AKM_Closure_SoundShader"};
		volumeFactor = 0.95;
		volumeCurve = "CUP_rifleSoundCurve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "CUP_defaultDistanceFilter";
		frequencyRandomizer = 0.05;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class CUP_AKM_Shot_SoundSet
	{
		soundShaders[] = {"CUP_AKM_0m_SoundShader","CUP_AKM_50m_SoundShader","CUP_AKM_150m_SoundShader","CUP_AKM_550m_SoundShader","CUP_AKM_1000m_SoundShader","CUP_AKM_1800m_SoundShader"};
		volumeFactor = 1.35;
		volumeCurve = "CUP_rifleSoundCurve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "CUP_defaultDistanceFilter";
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class CUP_AKM_ShotSD_SoundSet
	{
		soundShaders[] = {"CUP_AKM_SD_0m_SoundShader","CUP_AKM_SD_30m_SoundShader","CUP_AKM_SD_150m_SoundShader","CUP_AKM_SD_350m_SoundShader"};
		volumeFactor = 0.9;
		volumeCurve = "CUP_silencedSoundCurve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "CUP_defaultDistanceFilter";
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};



	class CUP_Rifle1_SD_Tail_SoundSet
	{
		soundShaders[] = {"CUP_Rifle1_SD_Meadows_0m_SoundShader","CUP_Rifle1_SD_Meadows_150m_SoundShader","CUP_Rifle1_SD_Houses_0m_SoundShader","CUP_Rifle1_SD_Houses_150m_SoundShader","CUP_Rifle1_SD_Trees_0m_SoundShader","CUP_Rifle1_SD_Trees_150m_SoundShader","CUP_Rifle1_SD_Forest_0m_SoundShader","CUP_Rifle1_SD_Forest_150m_SoundShader","CUP_Rifle1_SD_Interior_0m_SoundShader","CUP_Rifle1_SD_Interior_40m_SoundShader","CUP_Rifle1_SD_Interior_150m_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "CUP_silencedSoundCurve";
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		soundShadersLimit = 2;
		distanceFilter = "CUP_rifleTailDistanceFilter";
		frequencyRandomizer = 0.1;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};

	class CUP_lmg1_Tail_SoundSet
	{
		soundShaders[] = {"CUP_lmg1_Meadows_0m_SoundShader","CUP_lmg1_Meadows_50m_SoundShader","CUP_lmg1_Meadows_150m_SoundShader","CUP_lmg1_Meadows_550m_SoundShader","CUP_lmg1_Houses_0m_SoundShader","CUP_lmg1_Houses_50m_SoundShader","CUP_lmg1_Houses_150m_SoundShader","CUP_lmg1_Houses_550m_SoundShader","CUP_lmg1_Trees_0m_SoundShader","CUP_lmg1_Trees_50m_SoundShader","CUP_lmg1_Trees_150m_SoundShader","CUP_lmg1_Trees_550m_SoundShader","CUP_lmg1_Forest_0m_SoundShader","CUP_lmg1_Forest_50m_SoundShader","CUP_lmg1_Forest_150m_SoundShader","CUP_lmg1_Forest_550m_SoundShader","CUP_lmg1_Interior_0m_SoundShader","CUP_lmg1_Interior_50m_SoundShader","CUP_lmg1_Interior_150m_SoundShader","CUP_lmg1_Interior_550m_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "CUP_rifleSoundCurve";
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		soundShadersLimit = 2;
		distanceFilter = "CUP_rifleTailDistanceFilter";
		frequencyRandomizer = 0.1;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};

};





class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		CUP_GestureReloadAK = "CUP_GestureReloadAK";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			CUP_GestureReloadAK[] = {"CUP_GestureReloadAK","Gesture"};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			CUP_GestureReloadAK[] = {"CUP_GestureReloadAK_prone","Gesture"};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			CUP_GestureReloadAK[] = {"CUP_GestureReloadAK_Context","Gesture"};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			CUP_GestureReloadAK[] = {"CUP_GestureReloadAK_Context","Gesture"};
			class RifleAdjustFProneActions: RifleAdjustProneBaseActions
			{
				CUP_GestureReloadAK[] = {"CUP_GestureReloadAK_Context","Gesture"};
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadAKM;
		class CUP_GestureReloadAK: GestureReloadAKM
		{
			file = "CUP\Weapons\CUP_Weapons_WeaponsCore\anim\AK\GestureReloadAK.rtm";
		};
		class CUP_GestureReloadAK_prone: GestureReloadAKM
		{
			file = "CUP\Weapons\CUP_Weapons_WeaponsCore\anim\AK\GestureReloadAKProne.rtm";
		};
		class CUP_GestureReloadAK_Context: CUP_GestureReloadAK
		{
			mask = "handsWeapon_context";
		};
	};
};
class cfgRecoils
{
	class recoil_default;
	class Recoil_CUP_RPK74: recoil_default
	{
		muzzleOuter[] = {0.19,0.68,0.2,0.2};
		kickBack[] = {0.018,0.038};
		temporary = 0.009;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class asdg_OpticRail;
class asdg_OpticSideMount: asdg_OpticRail
{
	class compatibleItems
	{};
};
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class CUP_DovetailMount: asdg_OpticSideMount
{
	scope = 0;
	linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
	displayName = "East Dovetail Optics Mount";
};

class asdg_MuzzleSlot;
class asdg_MuzzleSlot_545R: asdg_MuzzleSlot
{
	class compatibleItems
	{};
};
class CUP_EastMuzzleSlotPBS4: asdg_MuzzleSlot_545R
{
	scope = 0;
	displayName = "Suppressor Attachment";
	linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
};




class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_arifle_AK_Base: Rifle_Base_F
	{
		dlc = "CUP_Weapons";
		author = "Cut by MrBadman";
		scope = 0;
		value = 0;
		model = "";
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_AK\Data\Anim\AK.rtm"};
		optics = 1;
		modes[] = {"FullAuto","Single","Burst","FullAuto_medium"};
		magazines[] = {};
		magazineWell[] = {"CBA_545x39_AK","CBA_545x39_RPK","AK_545x39"};
		selectionFireAnim = "zasleh";
		drySound[] = {"CUP\Weapons\CUP_Weapons_AK\data\sfx\Dry",0.56234133,1,10};
		reloadAction = "CUP_GestureReloadAK";
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_reload",1,1,10};
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.25118864,1,20};
		magazineReloadSwitchPhase = 0.15384;
		jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";
		initSpeed = -0.95467;
		ACE_barrelTwist = 199.898;
		ACE_barrelLength = 414.02;
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
			dispersion = 0.00125;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
		class Burst: Mode_Burst
		{
			soundBurst = 0;
			reloadTime = 0.1;
			ffCount = 3;
			dispersion = 0.00125;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.1;
			ffCount = 30;
			dispersion = 0.00125;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
		};
		class ItemInfo
		{
			priority = 1;
		};
		class WeaponSlotsInfo
		{
			class CUP_DovetailMount_AK: CUP_DovetailMount
			{
				iconPosition[] = {0.58,0.28};
				iconScale = 0.15;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint = "Bottom";
			};
			class CUP_EastMuzzleSlotAK: CUP_EastMuzzleSlotPBS4
			{
				iconPosition[] = {0.1,0.35};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint = "Right";
			};
			allowedSlots[] = {901};
		};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		aimTransitionSpeed = 1;
	};
class rbc_rifle_rpk74n: CUP_arifle_AK_Base
	{
		author = "Cut by MrBadman";
		scope = 2;
		model = "\CUP\Weapons\CUP_Weapons_AK\CUP_rpk74n.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_AK\data\UI\gear_rpk74_X_CA.paa";
		magazines[] = {};
		magazineWell[] = {"CBA_545x39_AK","CBA_545x39_RPK","AK_545x39"};
		displayname = "РПК-74Н";
		recoil = "Recoil_CUP_RPK74";
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
		discretedistance[] = {440,100,200,300,400,500,600,700,800,900,1000};
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
			libTextDesc = "rpk-74";
		};
		descriptionShort = "rpk-74";
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
			class CUP_EastMuzzleSlotAK: CUP_EastMuzzleSlotPBS4
			{
				iconPosition[] = {0.04,0.35};
				iconScale = 0.15;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint = "Right";
			};
		};
	};

	class rbc_rifle_rpk74n_top_rail: rbc_rifle_rpk74n
	{
		author = "Cut by MrBadman";
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
	class rbc_rifle_rpk74m: rbc_rifle_rpk74n
	{
		author = "Cut by MrBadman";
		scope = 2;
		model = "\CUP\Weapons\CUP_Weapons_AK\CUP_rpk74m.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_AK\data\UI\gear_rpk74m_X_CA.paa";
		displayname = "$STR_CUP_dn_rpk74m";
		descriptionShort = "$STR_CUP_dss_rpk";
		magazines[] = {};
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
	class rbc_rifle_rpk74m_top_rail: rbc_rifle_rpk74m
	{
		author = "Cut by MrBadman";
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
	class rbc_rifle_rpk74m_railed: rbc_rifle_rpk74m_top_rail
	{
		author = "Cut by MrBadman";
		scope = 2;
		model = "\CUP\Weapons\CUP_Weapons_AK\CUP_rpk74m_railed.p3d";
		displayName = "$STR_CUP_dn_rpk74m_railed";
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_AK\Data\Anim\AK_hg.rtm"};
		picture = "\CUP\Weapons\CUP_Weapons_AK\data\UI\gear_rpk74m_railed_X_CA.paa";
	};
};
