class CfgPatches
{
	class tfr_aslav
	{
		units[]=
		{
			"adfu_armour_aslav",
			"adfu_armour_aslav_t1",
            "adfu_armour_aslav_pc"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Soft_F",
			"ADFU_base",
            "CUP_wheeledvehicles_LAV25"
		};
	};
};

class CfgVehicles
{
    class CUP_B_LAV25M240_desert_USMC;
    class CUP_B_LAV25_HQ_USMC;
    class CUP_B_LAV25_USMC;

    class ADFU_armour_aslav: CUP_B_LAV25_USMC
	{
		displayName="ASLAV-25";
        faction="ADFU";
		vehicleClass="Armored";
		author="TFR & CUP Team";
		dlc="TFR";
        picture="adfu_armour\data\UI\Picture_aslav_CA.paa";
		Icon="adfu_armour\data\UI\Icon_aslav_CA.paa";
        crew="ADFU_AMC_Cav_Crew";
		typicalCargo[]=
		{
			"ADFU_AMC_FTL",
			"ADFU_AMC_Rifleman",
			"ADFU_AMC_GL",
			"ADFU_AMC_CLS",
			"ADFU_AMC_Rifleman",
			"ADFU_AMC_Rifleman"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody_desert_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody2_desert_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lav_hq_desert_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavalfa_desert_ca.paa"
		};
		class textureSources
		{
			class TFR_Auscam
			{
				displayName="Auscam";
				author="TFR Team";
				textures[]=
				{
					"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody_co.paa",
					"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody2_co.paa",
					"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lav_hq_co.paa",
					"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavalfa_ca.paa"
				};
				factions[]={};
			};
		};
		editorPreview="CUP\WheeledVehicles\CUP_WheeledVehicles_LAV25\Data\preview\CUP_B_LAV25M240_desert_USMC.jpg";
	};
    class ADFU_armour_aslav_t1: CUP_B_LAV25M240_desert_USMC
	{
		displayName="ASLAV-25 (MAG58)";
        faction="ADFU";
		vehicleClass="Armored";
		author="TFR & CUP Team";
		dlc="TFR";
        picture="adfu_armour\data\UI\Picture_aslav_CA.paa";
		Icon="adfu_armour\data\UI\Icon_aslav_CA.paa";
        crew="ADFU_AMC_Cav_Crew";
		typicalCargo[]=
		{
			"ADFU_AMC_FTL",
			"ADFU_AMC_Rifleman",
			"ADFU_AMC_GL",
			"ADFU_AMC_CLS",
			"ADFU_AMC_Rifleman",
			"ADFU_AMC_Rifleman"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody_desert_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody2_desert_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lav_hq_desert_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavalfa_desert_ca.paa"
		};
		editorPreview="CUP\WheeledVehicles\CUP_WheeledVehicles_LAV25\Data\preview\CUP_B_LAV25M240_desert_USMC.jpg";
		class EventHandlers
		{
			init="";
		};
		class textureSources
		{
			class TFR_Auscam
			{
				displayName="Auscam";
				author="TFR Team";
				textures[]=
				{
					"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody_co.paa",
					"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody2_co.paa",
					"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lav_hq_co.paa",
					"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavalfa_ca.paa"
				};
				factions[]={};
			};
		};
	};
    class ADFU_armour_aslav_pc: CUP_B_LAV25_HQ_USMC
	{
		displayName="ASLAV-PC";
        faction="ADFU";
		vehicleClass="Armored";
		author="TFR & CUP Team";
		dlc="TFR";
        picture="adfu_armour\data\UI\Picture_aslav_CA.paa";
		Icon="adfu_armour\data\UI\Icon_aslav_CA.paa";
        crew="ADFU_AMC_Cav_Crew";
		typicalCargo[]=
		{
			"ADFU_AMC_FTL",
			"ADFU_AMC_Rifleman",
			"ADFU_AMC_GL",
			"ADFU_AMC_CLS",
			"ADFU_AMC_Rifleman",
			"ADFU_AMC_Rifleman"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody_desert_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody2_desert_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lav_hq_desert_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavalfa_desert_ca.paa"
		};
		class textureSources
		{
			class TFR_Auscam
			{
				displayName="Auscam";
				author="TFR Team";
				textures[]=
				{
					"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody_co.paa",
					"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody2_co.paa",
					"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lav_hq_co.paa",
					"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavalfa_ca.paa"
				};
				factions[]={};
			};
		};
		editorPreview="CUP\WheeledVehicles\CUP_WheeledVehicles_LAV25\Data\preview\CUP_B_LAV25_HQ_desert_USMC.jpg";
	};

};