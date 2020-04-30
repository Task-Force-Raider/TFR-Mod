class CfgPatches
{
	class tfr_landrovers
	{
		units[]=
		{
			"TFR_LR_Transport",
			"TFR_LR_Armed"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Soft_F",
            "CUP_wheeledvehicles_lr"
		};
	};
};

class CfgVehicles
{
    class CUP_B_LR_Transport_GB_W;
    class CUP_B_LR_Special_M2_GB_W;

    class TFR_LR_Transport: CUP_B_LR_Transport_GB_W
    {
        displayName="Landrover";
        faction="ADFU";
		author="TFR & CUP Team";
		dlc="TFR";
        crew="ADFU_AMC_Rifleman";
        hiddenselectionstextures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_special_co.paa"};
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
    class TFR_LR_Armed: CUP_B_LR_Special_M2_GB_W
    {
        displayName="Landrover (Armed)";
        faction="ADFU";
		author="TFR & CUP Team";
		dlc="TFR";
        crew="ADFU_AMC_Rifleman";
        hiddenSelectionsTextures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_special_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_jackal\data\jackal_base_woodlnd_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_jackal\data\jackal_mount_woodlnd_co.paa"};
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
};