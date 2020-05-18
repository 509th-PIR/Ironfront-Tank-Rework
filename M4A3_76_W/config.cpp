class CfgPatches
{
	class M4A3_76_w
	{
		units[] = 
        {
            "LIB_M4A3_76"
        };
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
        {
            "WW2_Core_c_WW2_Core_c",
            "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Trucks",
            "WW2_Assets_c_Vehicles_Tanks_c_M4A3_75",
            "LIB_M4A3_76",
            "LIB_M4A3_75_base"
        };
	};
};

class CfgVehicles 
{
    class LIB_M4A3_75_base;
    class LIB_RW_M4A3_76: LIB_M4A3_75_base 
    {
        author = "Donov C.";
        maxSpeed = 41;
        armor = 200; //"LIB_30x_76L55_APMk3_AP","LIB_14x_76L55_APDSMk1_APCR","LIB_60x_76L55_M42_HE"
    };
	class LIB_M4A3_76: LIB_RW_M4A3_76 {};
};