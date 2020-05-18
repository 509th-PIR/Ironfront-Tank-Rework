class CfgPatches
{
	class Tank_Weapons
	{
		units[]=
		{
			"LIB_PzKpfwIV_H"
		};
		weapons[]={};
        magazines[]=
		{
            "LIB_PzGr39_KWK40_AP",
            "LIB_S_76L55_APMk3"

        };
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"WW2_Core_c_WW2_Core_c",
            "LIB_Shell_base"
		};
	};
};

class CfgAmmo {
    class LIB_Shell_base;
    class LIB_PzGr39_KWK40_AP : LIB_Shell_base {
        hit = 380;
        caliber = "(122 * 75 * 790 / 1000)";
        deflecting = 70;
        indirectHitRange = 1;
        indirectHit = 0;
        explosive = 0.1;
    };
    class LIB_S_76L55_APMk3 : LIB_Shell_base {
        hit = 150;
        caliber = "(90 * 76 * 884 / 1000)";
        deflecting = 60;
        indirectHitRange = 1;
        indirectHit = 0;
        explosive = 0.1;
    };
};