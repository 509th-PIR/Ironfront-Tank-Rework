class CfgPatches
{
	class PzKpfw_IV
	{
		units[]=
		{
			"LIB_PzKpfwIV_H"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"WW2_Core_c_WW2_Core_c",
			"WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Trucks",
			"LIB_PzKpfwIV_H",
            "LIB_PzKpfwIV_H_base"
		};
	};
};

class CfgVehicles
{
    class LIB_PzKpfwIV_H_base;
    class LIB_RW_PzKpfwIV_H : LIB_PzKpfwIV_H_base
    {
        mapSize=5;
		armor=350;
        //LIB_KwK40_L48    LIB_MG34_coax    
        /* 
            "LIB_30x_PzGr39_KWK40_AP",
			"LIB_10x_PzGr40_KWK40_APCR",
			"LIB_60x_SprGr34_KWK40_HE",
			"LIB_150rnd_MG34",
        */
        maxSpeed = 39;
		author = "Donov C.";
        scope=2;
		displayName="Pz. IV H";
		side=1;
		faction="LIB_WEHRMACHT";
		crew="LIB_GER_tank_crew";
    };
    class LIB_PzKpfwIV_H: LIB_RW_PzKpfwIV_H
	{
        scope=2;
    };
};