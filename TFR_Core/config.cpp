class CfgPatches
{
	class TFR_Core
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={};
		name="Task Force Raider Core";
		author="TFR Team";
		url="https://discord.gg/yDcs8Mf";
	};
};
class CfgMods
{
	class Mod_Base;
	class TFR: Mod_Base
	{
		author="TFR Team";
		picture="\TFR_core\data\tfrlogo_ca.paa";
		logo="\TFR_core\data\tfrlogo_ca.paa";
		logoOver="\TFR_core\data\tfrlogo_ca.paa";
		logoSmall="\TFR_core\data\tfrlogo_ca.paa";
		dlcColor[]={0,0,0,1};
		hideName=1;
		hidePicture=0;
		tooltip="TFR";
		tooltipOwned="TFR";
		name="Task Force Raider";
		overview="A complementary mod for use within Task Force Raider.";
		action="https://discord.gg/yDcs8Mf";
		dir="TFR";
	};
};