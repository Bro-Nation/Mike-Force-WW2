#include "..\ui\icons.inc"

#define RESPAWN_SHORT respawnType = "RESPAWN"; time = 10
#define RESPAWN_MEDIUM respawnType = "RESPAWN"; time = 30
#define RESPAWN_LONG respawnType = "RESPAWN"; time = 60
#define WRECK_SHORT respawnType = "WRECK"; time = 10
#define WRECK_MEDIUM respawnType = "WRECK"; time = 30
#define WRECK_LONG respawnType = "WRECK"; time = 60

class vehicles {
	class SPE_P47 {
		tags[] = {"p47","armed","firesupport","plane"};
	};

	class SPE_US_M3_Halftrack_Unarmed {
		tags[] = {"m3a1","unarmed","transport","apc"};
	};

	class SPE_US_M3_Halftrack_Unarmed_Open {
		tags[] = {"m3a1","unarmed","transport","apc"};
	};

	class SPE_US_M3_Halftrack {
		tags[] = {"m3a1","armed","transport","apc"};
	};

	class SPE_US_M16_Halftrack {
		tags[] = {"m3a1","armed","antiair","apc"};
	};

	class SPE_M18_Hellcat {
		tags[] = {"tank","armed","firesupport"};
	};

	class SPE_M10 {
		tags[] = {"tank","armed","firesupport"};
	};

	class SPE_M4A0_75_Early {
		tags[] = {"sherman","armed","tank"};
	};

	class SPE_M4A0_75 {
		tags[] = {"sherman","armed","tank"};
	};

	class SPE_M4A1_T34_Calliope {
		tags[] = {"sherman","armed","firesupport"};
	};

	class SPE_M4A1_T34_Calliope_Direct {
		tags[] = {"sherman","armed","firesupport"};
	};

	class SPE_M4A1_75 {
		tags[] = {"sherman","armed","tank"};
	};

	class SPE_M4A1_76 {
		tags[] = {"sherman","armed","tank","heavytank"};
	};

	class SPE_US_M3_Halftrack_Ambulance {
		tags[] = {"m3a1","medical","apc"};
	};

	class vn_b_army_static_tow {
		tags[] = {"bgm71","armed","firesupport","static","antitank"};
	};

	class vn_b_sf_static_tow {
		tags[] = {"bgm71","armed","firesupport","static","antitank"};
	};

	class vn_b_navy_static_l60mk3 {
		tags[] = {"l60","armed","firesupport","static","antiair","nodisassemble"};
	};

	class vn_b_navy_static_l70mk2 {
		tags[] = {"l70","armed","firesupport","static","antiair","nodisassemble"};
	};

	class vn_b_army_static_m101_01 {
		tags[] = {"m101","armed","firesupport","static","antitank","nodisassemble"};
	};

	class vn_b_army_static_m101_02 {
		tags[] = {"m101","armed","firesupport","static","artillery","nodisassemble"};
	};

	class vn_b_army_static_m1919a4_high {
		tags[] = {"m1919","armed","firesupport","static","machinegun"};
	};

	class vn_b_army_static_m1919a4_low {
		tags[] = {"m1919","armed","firesupport","static","machinegun"};
	};

	class vn_b_army_static_m1919a6 {
		tags[] = {"m1919","armed","firesupport","static","machinegun"};
	};

	class vn_b_army_static_mortar_m2 {
		tags[] = {"m2","armed","firesupport","static","artillery","mortar"};
	};

	class vn_b_army_static_mortar_m29 {
		tags[] = {"m29","armed","firesupport","static","artillery","mortar"};
	};

	class vn_b_army_static_m2_high {
		tags[] = {"m2hb","armed","firesupport","static","machinegun"};
	};

	class vn_b_army_static_m2_scoped_high {
		tags[] = {"m2hb","armed","firesupport","static","machinegun"};
	};

	class vn_b_army_static_m2_low {
		tags[] = {"m2hb","armed","firesupport","static","machinegun"};
	};

	class vn_b_army_static_m2_scoped_low {
		tags[] = {"m2hb","armed","firesupport","static","machinegun"};
	};

	class vn_b_army_static_m40a1rr {
		tags[] = {"m40","armed","firesupport","static","antitank","nodisassemble"};
	};

	class vn_b_army_static_m45 {
		tags[] = {"m45","armed","firesupport","static","antiair","nodisassemble"};
	};

	class vn_b_army_static_m60_high {
		tags[] = {"m60","armed","firesupport","static","machinegun"};
	};

	class vn_b_army_static_m60_low {
		tags[] = {"m60","armed","firesupport","static","machinegun"};
	};

	class vn_b_army_static_mk18 {
		tags[] = {"m60","armed","firesupport","static","machinegun"};
	};

	class vn_b_wheeled_lr2a_01_aus_army {
		tags[] = {"dirtranger","transport","car"};
	};

	class vn_b_wheeled_lr2a_02_aus_army {
		tags[] = {"dirtranger","transport","car"};
	};

	class vn_b_wheeled_lr2a_03_aus_army {
		tags[] = {"dirtranger","medical","car"};
	};

	class vn_b_wheeled_lr2a_mg_01_aus_army {
		tags[] = {"dirtranger","armed","firesupport","car"};
	};

	class vn_b_wheeled_lr2a_mg_02_aus_army {
		tags[] = {"dirtranger","armed","firesupport","car"};
	};

	class vn_b_wheeled_lr2a_mg_03_aus_army {
		tags[] = {"dirtranger","armed","firesupport","car","antitank"};
	};

	class vn_b_wheeled_m54_01 {
		tags[] = {"m54","transport","truck"};
	};

	class vn_b_wheeled_m54_02 {
		tags[] = {"m54","transport","truck"};
	};

	class vn_b_wheeled_m54_03 {
		tags[] = {"m109","transport","truck"};
	};

	class vn_b_wheeled_m54_01_airport {
		tags[] = {"m54","transport","truck", "airport"};
	};

	class SPE_US_M3_Halftrack_Ammo {
		tags[] = {"m3a1","ammo","truck"};
	};

	class vn_b_wheeled_m54_ammo_airport {
		tags[] = {"m54","ammo","truck","airport"};
	};

	class SPE_US_M3_Halftrack_Fuel {
		tags[] = {"m3a1","fuel","truck"};
	};

	class vn_b_wheeled_m54_fuel_airport {
		tags[] = {"m49","fuel","truck","airport"};
	};

	class vn_b_wheeled_m54_mg_01 {
		tags[] = {"m54","armed","firesupport","truck"};
	};

	class vn_b_wheeled_m54_mg_02 {
		tags[] = {"m54","armed","firesupport","truck","antiair"};
	};

	class vn_b_wheeled_m54_mg_03 {
		tags[] = {"m54","armed","firesupport","truck"};
	};

	class SPE_US_M3_Halftrack_Repair {
		tags[] = {"m3a1","repair","truck"};
	};

	class vn_b_wheeled_m54_repair_airport {
		tags[] = {"m54","repair","truck","airport"};
	};

	class vn_c_bicycle_01 {
		tags[] = {"bicycle","civilian","transport","bicycle"};
	};

	class vn_c_bicycle_02 {
		tags[] = {"bicycle","civilian","transport","bicycle"};
	};

	class vn_c_car_01_01 {
		tags[] = {"boheme","civilian","transport","car"};
	};

	class vn_c_car_01_02 {
		tags[] = {"boheme","civilian","transport","car"};
	};

	class vn_c_car_02_01 {
		tags[] = {"boheme","civilian","transport","car"};
	};

	class vn_c_car_03_01 {
		tags[] = {"boheme","civilian","transport","car"};
	};

	class vn_c_car_04_01 {
		tags[] = {"boheme","civilian","transport","car"};
	};

	class vn_c_wheeled_m151_01 {
		tags[] = {"offroad","civilian","transport","car"};
	};

	class vn_c_wheeled_m151_02 {
		tags[] = {"offroad","civilian","transport","car"};
	};

	class vn_i_fank_70_static_sgm_high_01 {
		tags[] = {"sgm","static","machinegun"};
	};

	class vn_i_fank_70_static_sgm_low_01 {
		tags[] = {"sgm","static","machinegun"};
	};

	class vn_i_fank_70_static_sgm_low_02 {
		tags[] = {"sgm","static","machinegun"};
	};

	class vn_i_fank_70_static_zgu1_01 {
		tags[] = {"zgu1","static","antiair","nodisassemble"};
	};
};

class spawn_point_types {
	class light_transport {
		name = "Light transport";
		RESPAWN_SHORT;

		class categories {
			class dirtranger {
				name = "M3A1 Halftracks";
				icon = VEHICLE_ICON_CAR;
				include[] = { { "m3a1", "transport" } };
				exclude[] = { "antiair" };
			};
		};
	};

	class transport_airport {
		name = "Light airport transport";
		RESPAWN_SHORT;

		class categories {
			class mule {
				name = "M274 Mule";
				icon = VEHICLE_ICON_CAR;
				include[] = { { "m274", "airport" } };
				exclude[] = { "armed" };
			};
			class truck {
				name = "Truck";
				icon = VEHICLE_ICON_TRUCK;
				include[] = { { "truck", "airport" } };
				exclude[] = { "armed" };
			};
		};
	};

	class patrol {
		name = "Tank Destroyer";
		RESPAWN_MEDIUM;

		class categories {
			class tank {
				name = "Tank Destroyer";
				icon = VEHICLE_ICON_CAR;
				include[] = { { "tank", "armed","firesupport" } };
				exclude[] = { "sherman" };
			};
		};
	};

	class transport_heavy {
		name = "Heavy transport";
		RESPAWN_LONG;

		class categories {
			class m113 {
				name = "M113";
				icon = VEHICLE_ICON_ARMOUR;
				include[] = { { "m113", "transport" } };
				exclude[] = { "firesupport" };
			};
		};
	};

	class transport_trucks {
		name = "Trucks";
		RESPAWN_LONG;

		class categories {
			class trucks {
				name = "Trucks";
				icon = VEHICLE_ICON_TRUCK;
				include[] = { { "truck", "m3a1"} };
				exclude[] = { "firesupport", "airport" };
			};
		};
	};

	class ambulance {
		name = "Ambulance";
		RESPAWN_LONG;

		class categories {
			class car {
				name = "Cars";
				icon = VEHICLE_ICON_CAR;
				include[] = {	{ "m3a1", "medical" } };
			};
		};
	};

	class light_fire_support {
		name = "Light fire support";
		WRECK_SHORT;

		class categories {
			class armor {
				name = "M3A1 Armed";
				icon = VEHICLE_ICON_ARMOUR;
				include[] = { { "m3a1", "armed","antiair"} };
			};
		};
	};

	class heavy_fire_support {
		name = "Armored";
		WRECK_LONG;

		class categories {
			class tanks {
				name = "Tank";
				icon = VEHICLE_ICON_ARMOUR;
				include[] = { { "tank","sherman","heavytank","firesupport" } };
			};
		};
	};

	class utility {
		name = "Utility";
		RESPAWN_SHORT;

		class categories {
			class fuel {
				name = "Fuel";
				icon = VEHICLE_ICON_TRUCK;
				include[] = { "fuel","m3a1"};
				exclude[] = { "airport","medical","armed" };
			};
			class ammo {
				name = "Ammo";
				icon = VEHICLE_ICON_TRUCK;
				include[] = { "ammo","m3a1"};
				exclude[] = { "airport","medical","armed" };
			};
			class repair {
				name = "Repair";
				icon = VEHICLE_ICON_TRUCK;
				include[] = { "repair","m3a1"};
				exclude[] = { "airport","medical","armed" };
			};
		};
	};

	class utility_airport {
		name = "Utility";
		RESPAWN_SHORT;

		class categories {
			class fuel {
				name = "Fuel";
				icon = VEHICLE_ICON_TRUCK;
				include[] = { { "fuel", "airport" } };
			};
			class ammo {
				name = "Ammo";
				icon = VEHICLE_ICON_TRUCK;
				include[] = { { "ammo", "airport" } };
			};
			class repair {
				name = "Repair";
				icon = VEHICLE_ICON_TRUCK;
				include[] = { { "repair", "airport" } };
			};
		};
	};

	class air_scout {
		name = "Scout air";
		RESPAWN_SHORT;

		class categories {
			class cayuse {
				name = "OH-6A";
				icon = VEHICLE_ICON_HELO;
				include[] = { "oh6a" };
				exclude[] = { "firesupport" };
			};
		};
	};

	class air_light {
		name = "Light air";
		RESPAWN_SHORT;

		class categories {
			class cayuse {
				name = "OH-6A";
				icon = VEHICLE_ICON_HELO;
				include[] = { "oh6a" };
				exclude[] = { "firesupport" };
			};
			class uh1 {
				name = "UH-1";
				icon = VEHICLE_ICON_HELO;
				include[] = { "uh1" };
				exclude[] = { "firesupport" };
			};
		};
	};

	class air_transport {
		name = "Air transport";
		RESPAWN_MEDIUM;

		class categories {
			class ch34 {
				name = "CH-34";
				icon = VEHICLE_ICON_HELO;
				include[] = { "ch34" };
				exclude[] = { "firesupport" };
			};
			class ch47 {
				name = "CH-47";
				icon = VEHICLE_ICON_HELO;
				include[] = { "ch47" };
				exclude[] = { "firesupport" };
			};
		};
	};

	class air_transport_all {
		name = "Air transport";
		RESPAWN_MEDIUM;

		class categories {
			class uh1 {
				name = "UH-1";
				icon = VEHICLE_ICON_HELO;
				include[] = { "uh1" };
				exclude[] = { "firesupport" };
			};
			class ch34 {
				name = "CH-34";
				icon = VEHICLE_ICON_HELO;
				include[] = { "ch34" };
				exclude[] = { "firesupport" };
			};
			class ch47 {
				name = "CH-47";
				icon = VEHICLE_ICON_HELO;
				include[] = { "ch47" };
				exclude[] = { "firesupport" };
			};
		};
	};

	class air_fire_support {
		name = "Air support";
		WRECK_MEDIUM;

		class categories {
			class uh1 {
				name = "UH-1";
				icon = VEHICLE_ICON_HELO;
				include[] = { { "uh1", "firesupport" } };
			};
			class ch34 {
				name = "CH-34";
				icon = VEHICLE_ICON_HELO;
				include[] = { { "ch34", "firesupport" } };
			};
			class cayuse {
				name = "OH-6A";
				icon = VEHICLE_ICON_HELO;
				include[] = { { "oh6a", "firesupport" } };
			};
		};
	};

	class air_heavy_fire_support {
		name = "Heavy air support";
		WRECK_LONG;

		class categories {
			class p47 {
				name = "P-47 Thunderbolt";
				icon = VEHICLE_ICON_HELO;
				include[] = { { "p47", "firesupport" } };
			};
		};
	};

	class jets {
		name = "Jets";
		WRECK_LONG;

		class categories {
			class f100 {
				name = "F100";
				icon = VEHICLE_ICON_PLANE;
				include[] = { { "jet", "f100" } };
			};
			class f4 {
				name = "F4 Phantom";
				icon = VEHICLE_ICON_PLANE;
				include[] = { { "jet", "f4" } };
			};
		};
	};

	class large_statics {
		name = "Large static weapons";
		RESPAWN_SHORT;
		class categories {
			class anti_air {
				name = "Anti-air";
				icon = VEHICLE_ICON_STATIC;
				include[] = { { "static", "antiair", "nodisassemble" } };
				exclude[] = { "artillery" };
			};
			class anti_tank {
				name = "Anti-tank";
				icon = VEHICLE_ICON_STATIC;
				include[] = { { "static", "antitank", "nodisassemble" } };
				exclude[] = { "artillery" };
			};
		};
	};

	class artillery {
		name = "Artillery";
		WRECK_LONG;

		class categories {
			class artillery {
				name = "Artillery";
				icon = VEHICLE_ICON_STATIC;
				include[] = { { "static", "artillery","firesupport","heavytank"} };
				exclude[] = {};
				};
			};
	};
};