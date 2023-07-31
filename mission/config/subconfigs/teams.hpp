// limits and vanilla/custom trait values
class MikeForce
{
    name = "Mike Force [Infantry]";
    icon = "custom\images\1st_INF_tex.paa";
    shortname = "Mike Force";
    unit = "SPE_US_First_Lieutenant";

    class rolelimits 
    {
        medic = 1;
        engineer = 1;
        explosiveSpecialist = 1;
        vn_artillery = 1;
    };
    
    class defaultTraits
    {
        camouflageCoef = 0.8;
        audibleCoef = 0.6;
        loadCoef = 1;
        engineer = false;
        explosiveSpecialist = false;
        medic = false;
        UAVHacker = false;
        vn_artillery = false;
        harassable = true;
        scout = true;
    };

    //Function Calls on team Join
    onJoin = "";
    onLeave = "";
};
class SpikeTeam
{
    name = "Spike Team [Special Forces]";
    icon = "custom\images\5th_ranger_logo_tex.paa";
    shortname = "Spike Team";
    unit = "SPE_US_First_Lieutenant";

    class rolelimits 
    {
        medic = 1;
        engineer = 0;
        explosiveSpecialist = 1;
        vn_artillery = 1;
    };
    
    class defaultTraits
    {
        camouflageCoef = 1;
        audibleCoef = 0.3;
        loadCoef = 0.5;
        engineer = false;
        explosiveSpecialist = false;
        medic = false;
        UAVHacker = false;
        vn_artillery = false;
        harassable = false;
        scout = true;
        scout_multiple = true;
    };

    //Function Calls on team Join
    onJoin = "";
    onLeave = "";
};
class ACAV
{
    name = "Armored Cavalry [Ground Support]";
    icon = "custom\images\2nd_Armor_logo_tex.paa";
    shortname = "ACAV";
    unit = "SPE_US_First_Lieutenant";

    class rolelimits 
    {
        medic = 2;
        engineer = 40;
        explosiveSpecialist = 2;
        vn_artillery = 2;
    };
    
    class defaultTraits
    {
        camouflageCoef = 0.8;
        audibleCoef = 0.6;
        loadCoef = 1;
        engineer = false;
        explosiveSpecialist = false;
        medic = false;
        UAVHacker = false;
        vn_artillery = false;
        harassable = true;
        scout = false;
    };

    //Function Calls on team Join
    onJoin = "";
    onLeave = "";
};
class GreenHornets
{
    name = "Green Hornets [Air Support]";
    icon = "custom\images\US_army_air_corps_tex.paa";
    shortname = "Green Hornets";
    unit = "SPE_US_First_Lieutenant";
    
    class rolelimits 
    {
        medic = 1;
        engineer = 1;
        explosiveSpecialist = 1;
        vn_artillery = 1;
    };
    
    class defaultTraits
    {
        camouflageCoef = 0.8;
        audibleCoef = 0.6;
        loadCoef = 1;
        engineer = false;
        explosiveSpecialist = false;
        medic = false;
        UAVHacker = false;
        vn_artillery = false;
        harassable = true;
        scout = false;
    };

    //Function Calls on team Join
    onJoin = "";
    onLeave = "";
};
