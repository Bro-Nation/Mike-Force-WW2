#include "..\ui\icons.inc"

#define CONDITION_HAS_RANK { $STR_vn_mf_buildingMenu_condition_hasRank, "player getVariable ['vn_mf_db_rank',0] >= getNumber(_config >> 'rank')"}
#define CONDITION_IS_ENGINEER { $STR_vn_mf_buildingMenu_condition_isEngineer, "player getUnitTrait 'engineer'"}
#define CONDITION_IS_ON_FOOT { $STR_vn_mf_buildingMenu_condition_rnFoot, "isNull objectParent player"}
#define CONDITION_NOT_IN_RESTRICTED_ZONE { $STR_vn_mf_buildingMenu_condition_inRestrictedZone, "vn_mf_markers_blocked_areas findIf {_pos inArea _x} isEqualTo -1"}
#define CONDITION_IS_ACAV { $STR_vn_mf_buildingMenu_condition_inACav, "player getVariable ['vn_mf_db_player_group', 'MikeForce'] isEqualTo 'ACAV'"}

//Takes "Capacity" in supply units, and "Lifetime" in seconds.
#define DAYS_TO_SECONDS(days) (days * 86400)
#define HOURS_TO_SECONDS(hours) (hours * 3600)
#define MINUTES_TO_SECONDS(minutes) (minutes * 60)
#define SUPPLY_CAPACITY(capacity, lifetime) \
	supply_capacity = capacity; \
	supply_consumption = __EVAL(capacity / lifetime)

class Land_vn_guardhouse_01
{
	name = "STR_vn_mf_checkpoint";
	type = "checkpoints";
	categories[] = {"functional", "buildings"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));

	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_guardhouse_01_part0";
		};
		class middle_state
		{
			object_class = "vn_guardhouse_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_guardhouse_01";
		};
	};

	class features
	{
		class respawn {};
	};
};

class Land_vn_tent_mash_01
{
	name = "STR_vn_mf_aid_post";
	type = "aid";
	categories[] = {"medical", "functional", "tents"};
	rank = 0;
	SUPPLY_CAPACITY(1000, HOURS_TO_SECONDS(2));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_tent_mash_01_part0";
		};
		class middle_state
		{
			object_class = "vn_tent_mash_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_tent_mash_01";
		};
	};
};

class Land_vn_b_tower_01
{
	name = "STR_vn_mf_guardtower";
	type = "towers";
	categories[] = {"towers"};
	rank = 0;
	SUPPLY_CAPACITY(300, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_tower_01_part0";
		};
		class middle_state
		{
			object_class = "vn_b_tower_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_b_tower_01";
		};
	};
};

class Land_vn_hlaska
{
	name = "";
	type = "towers";
	categories[] = {"towers"};
	rank = 0;
	SUPPLY_CAPACITY(300, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hlaska_part0";
		};
		class middle_state
		{
			object_class = "vn_hlaska_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hlaska";
		};
	};
};

class vn_b_ammobox_supply_07
{
	name = "STR_vn_mf_ammoresupply";
	type = "ammocrates";
	categories[] = {"resupply", "functional"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	nearby[] = {"ammo"};
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_ammobox_supply_07_part0";
		};
		class middle_state
		{
			//TODO: Fix this, this shouldn't able to resupply in middle state.
			object_class = "vn_b_ammobox_supply_07";
		};
		class final_state
		{
			object_class = "vn_b_ammobox_supply_07";
		};
	};

	class features
	{
		class maintenance
		{
			canRearm = 1;
		};
	};
};

class vn_b_ammobox_supply_08
{
	name = "STR_vn_mf_repairresupply";
	type = "resupplycrates";
	categories[] = {"resupply", "functional"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	nearby[] = {"repair"};
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_ammobox_supply_08_part0";
		};
		class middle_state
		{
			//TODO: Fix this, should not be able to rearm in middle state
			object_class = "vn_b_ammobox_supply_08";
		};
		class final_state
		{
			object_class = "vn_b_ammobox_supply_08";
		};
	};

	class features
	{
		class maintenance
		{
			canRepair = 1;
		};
	};
};

class vn_b_ammobox_supply_09
{
	name = "STR_vn_mf_fuelresupply";
	type = "refuelcrates";
	categories[] = {"resupply", "functional"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	nearby[] = {"fuel"};
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_ammobox_supply_09_part0";
		};
		class middle_state
		{
			//TODO: FIx this, hsould not be able to refuel in middle state.
			object_class = "vn_b_ammobox_supply_09";
		};
		class final_state
		{
			object_class = "vn_b_ammobox_supply_09";
		};
	};

	class features
	{
		class maintenance
		{
			canRefuel = 1;
		};
	};
};

class Land_vn_usaf_fueltank_75_01
{
	name = "STR_vn_mf_fuelresupply";
	type = "refuelcrates";
	categories[] = {"resupply", "functional"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	nearby[] = {"fuel"};
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_usaf_fueltank_75_01_part0";
		};
		class middle_state
		{
			//TODO: FIx this, hsould not be able to refuel in middle state.
			object_class = "vn_usaf_fueltank_75_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_usaf_fueltank_75_01";
		};
	};

	class features
	{
		class maintenance
		{
			canRefuel = 1;
		};
	};
};

class Land_vn_bunker_small_01
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "nonAcav"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_bunker_small_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_bunker_small_01";
		};
		class final_state
		{
			object_class = "Land_vn_bunker_small_01";
		};
	};
};
class Land_vn_bunker_big_01
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_bunker_big_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_bunker_big_01";
		};
		class final_state
		{
			object_class = "Land_vn_bunker_big_01";
		};
	};
};

class Land_vn_bunker_big_02
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_bunker_big_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_bunker_big_02";
		};
		class final_state
		{
			object_class = "Land_vn_bunker_big_02";
		};
	};
};

class Land_vn_pillboxbunker_01_big_f
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_pillboxbunker_01_big_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_pillboxbunker_01_big_f";
		};
		class final_state
		{
			object_class = "Land_vn_pillboxbunker_01_big_f";
		};
	};
};

class Land_vn_pillboxbunker_01_hex_f
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_pillboxbunker_01_hex_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_pillboxbunker_01_hex_f";
		};
		class final_state
		{
			object_class = "Land_vn_pillboxbunker_01_hex_f";
		};
	};
};

class Land_vn_pillboxbunker_02_hex_f
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_pillboxbunker_02_hex_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_pillboxbunker_02_hex_f";
		};
		class final_state
		{
			object_class = "Land_vn_pillboxbunker_02_hex_f";
		};
	};
};

class Land_vn_pillboxbunker_01_rectangle_f
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_pillboxbunker_01_rectangle_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_pillboxbunker_01_rectangle_f";
		};
		class final_state
		{
			object_class = "Land_vn_pillboxbunker_01_rectangle_f";
		};
	};
};

class Land_vn_b_trench_wall_01_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "fences"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	offset[] = {0,6.5,0};
	//max_segments = 3;
	min_distance = 7;
	max_distance = 15;
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_01_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_01_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_01_01";
		};
	};
};
class Land_vn_b_trench_wall_01_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "fences"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_01_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_01_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_01_02";
		};
	};
};
class Land_vn_b_trench_wall_01_03
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "fences"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_01_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_01_03";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_01_03";
		};
	};
};
class Land_vn_b_trench_wall_03_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "fences"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_03_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_03_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_03_01";
		};
	};
};
class Land_vn_b_trench_wall_03_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "fences"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_03_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_03_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_03_02";
		};
	};
};
class Land_vn_b_trench_wall_03_03
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "fences"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_03_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_03_03";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_03_03";
		};
	};
};
class Land_vn_b_trench_wall_05_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "fences"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_05_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_05_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_05_01";
		};
	};
};

class Land_vn_b_trench_wall_05_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "fences"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_05_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_05_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_05_02";
		};
	};
};
class Land_vn_b_trench_wall_05_03
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "fences"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_05_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_05_03";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_05_03";
		};
	};
};
class Land_vn_b_trench_wall_10_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "fences"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_10_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_10_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_10_01";
		};
	};
};
class Land_vn_b_trench_wall_10_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "fences"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_10_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_10_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_10_02";
		};
	};
};

class Land_vn_b_trench_wall_10_03
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "fences"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_10_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_10_03";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_10_03";
		};
	};
};

class Land_vn_b_trench_tee_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_tee_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_tee_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_tee_01";
		};
	};
};
class Land_vn_b_trench_stair_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "nonAcav"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_stair_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_stair_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_stair_01";
		};
	};
};
class Land_vn_b_trench_stair_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "nonAcav"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_stair_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_stair_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_stair_02";
		};
	};
};

class Land_vn_b_trench_revetment_tall_09
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "nonAcav", "fences"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_revetment_tall_09_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_revetment_tall_09";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_revetment_tall_09";
		};
	};
};

class Land_vn_b_trench_revetment_tall_03
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "nonAcav", "fences"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_revetment_tall_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_revetment_tall_03";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_revetment_tall_03";
		};
	};
};

class Land_vn_b_trench_revetment_90_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "nonAcav", "fences"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_revetment_90_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_revetment_90_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_revetment_90_01";
		};
	};
};

class Land_vn_b_trench_revetment_05_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "nonAcav", "fences"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_revetment_05_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_revetment_05_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_revetment_05_01";
		};
	};
};

class Land_vn_b_trench_firing_05
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_firing_05_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_firing_05";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_firing_05";
		};
	};
};

class Land_vn_b_trench_firing_04
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_firing_04_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_firing_04";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_firing_04";
		};
	};
};

class Land_vn_b_trench_firing_03
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_firing_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_firing_03";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_firing_03";
		};
	};
};

class Land_vn_b_trench_firing_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_firing_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_firing_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_firing_02";
		};
	};
};

class Land_vn_b_trench_firing_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "nonAcav"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_firing_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_firing_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_firing_01";
		};
	};
};

class Land_vn_o_trench_firing_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "fences"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_o_trench_firing_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_trench_firing_01";
		};
		class final_state
		{
			object_class = "Land_vn_o_trench_firing_01";
		};
	};
};

class Land_vn_b_trench_end_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_end_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_end_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_end_01";
		};
	};
};

class Land_vn_b_trench_cross_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_cross_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_cross_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_cross_02";
		};
	};
};

class Land_vn_b_trench_cross_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_cross_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_cross_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_cross_01";
		};
	};
};

class Land_vn_b_trench_corner_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications","nonAcav"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_corner_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_corner_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_corner_01";
		};
	};
};


class Land_vn_b_trench_bunker_06_02
{
	name = "";
	type = "bunkers";
	categories[] = {"tents", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_06_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_06_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_06_02";
		};
	};
};

class Land_vn_b_trench_bunker_06_01
{
	name = "";
	type = "bunkers";
	categories[] = {"tents", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_06_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_06_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_06_01";
		};
	};
};

class Land_vn_b_trench_bunker_05_02
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "tents"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_05_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_05_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_05_02";
		};
	};
};

class Land_vn_b_trench_bunker_05_01
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "tents"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_05_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_05_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_05_01";
		};
	};
};

class Land_vn_b_trench_bunker_04_01
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_04_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_04_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_04_01";
		};
	};
};

class Land_vn_b_trench_bunker_03_04
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "functional"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_03_04_part0";
		};
		class middle_state
		{
			object_class = "vn_b_trench_bunker_03_04_part1";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_03_04";
		};
	};
	class features
	{
		class base_starter {};
	};
};

class Land_vn_b_trench_bunker_03_03
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "medical", "functional"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_03_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_03_03";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_03_03";
		};
	};
};

class Land_vn_b_trench_bunker_03_02
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "functional"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_03_02_part0";
		};
		class middle_state
		{
			object_class = "vn_b_trench_bunker_03_02_part1";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_03_02";
		};
	};
	class features
	{
		class supply_depot
		{
			supplyChange = 2500;
		};
	};
};

class Land_vn_b_trench_bunker_03_01
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "storage"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_03_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_03_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_03_01";
		};
	};
	class features
	{
		class supply_depot
		{
			supplyChange = 1500;
		};
	};
};

class Land_vn_b_trench_bunker_02_04
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "barracks"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_02_04_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_02_04";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_02_04";
		};
	};
	class features
	{
		class supply_depot
		{
			supplyChange = 500;
		};
	};
};

class Land_vn_b_trench_bunker_02_03
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "barracks"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_02_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_02_03";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_02_03";
		};
	};
	class features
	{
		class supply_depot
		{
			supplyChange = 500;
		};
	};
};

class Land_vn_b_trench_bunker_02_02
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "barracks"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_02_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_02_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_02_02";
		};
	};
	class features
	{
		class supply_depot
		{
			supplyChange = 500;
		};
	};
};

class Land_vn_b_trench_bunker_02_01
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "storage"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_02_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_02_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_02_01";
		};
	};
	class features
	{
		class supply_depot
		{
			supplyChange = 1000;
		};
	};
};

class Land_vn_b_trench_bunker_01_03
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "barracks"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_01_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_01_03";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_01_03";
		};
	};
};

class Land_vn_b_trench_bunker_01_02
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "barracks"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_01_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_01_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_01_02";
		};
	};
};

class Land_vn_b_trench_bunker_01_01
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "barracks"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_01_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_01_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_01_01";
		};
	};
	class features
	{
		class respawn {};
	};
};

class Land_vn_b_trench_90_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_90_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_90_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_90_02";
		};
	};
};

class Land_vn_b_trench_90_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(400, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_90_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_90_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_90_01";
		};
	};
};

class Land_vn_b_trench_45_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_45_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_45_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_45_02";
		};
	};
};

class Land_vn_b_trench_45_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(400, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_45_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_45_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_45_01";
		};
	};
};

class Land_vn_b_trench_20_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "fences"};
	rank = 0;
	SUPPLY_CAPACITY(300, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_20_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_20_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_20_02";
		};
	};
};

class Land_vn_b_trench_20_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_20_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_20_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_20_01";
		};
	};
};

class Land_vn_b_trench_05_03
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "nonAcav"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_05_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_05_03";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_05_03";
		};
	};
};

class Land_vn_b_trench_05_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "nonAcav", "fences"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_05_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_05_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_05_02";
		};
	};
};

class Land_vn_b_trench_05_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "nonAcav"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_05_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_05_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_05_01";
		};
	};
};

class Land_vn_b_mortarpit_01
{
	name = "";
	type = "mortarpits";
	categories[] = { "fortifications", "bunkers"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_mortarpit_01_part0";
		};
		class middle_state
		{
			object_class = "vn_b_mortarpit_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_b_mortarpit_01";
		};
	};
};

class Land_vn_b_helipad_01
{
	name = "";
	type = "helipads";
	categories[] = {"helipads"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};

	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_helipad_01_part0";
		};
		class middle_state
		{
			object_class = "vn_b_helipad_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_b_helipad_01";
		};
	};

	class features
	{
		class wreck_recovery {};
	};
};

class Land_vn_b_gunpit_01
{
	name = "";
	type = "gunpits";
	categories[] = {"fortifications", "bunkers"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_gunpit_01_part0";
		};
		class middle_state
		{
			object_class = "vn_b_gunpit_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_b_gunpit_01";
		};
	};
};

class Land_vn_b_foxhole_01
{
	name = "";
	type = "foxholes";
	categories[] = {"trenches", "fortifications", "nonAcav", "bunkers"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_foxhole_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_foxhole_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_foxhole_01";
		};
	};
};

class Land_vn_b_prop_barrels_water_01
{
	name = "";
	type = "props";
	categories[] = {"decorative", "sanitation"};
	rank = 0;
	SUPPLY_CAPACITY(50, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_prop_barrels_water_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_prop_barrels_water_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_prop_barrels_water_01";
		};
	};
};

class Land_vn_steeldrum_bbq_01
{
	name = "";
	type = "props";
	categories[] = {"decorative", "sanitation"};
	rank = 0;
	SUPPLY_CAPACITY(50, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_steeldrum_bbq_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_steeldrum_bbq_01";
		};
		class final_state
		{
			object_class = "Land_vn_steeldrum_bbq_01";
		};
	};
};

class Land_vn_steeldrum_01
{
	name = "";
	type = "props";
	categories[] = {"decorative"};
	rank = 0;
	SUPPLY_CAPACITY(50, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_steeldrum_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_steeldrum_01";
		};
		class final_state
		{
			object_class = "Land_vn_steeldrum_01";
		};
	};
};

class Land_vn_us_common_lantern_01
{
	name = "";
	type = "lighting";
	categories[] = {"lighting"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_us_common_lantern_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_us_common_lantern_01";
		};
		class final_state
		{
			object_class = "Land_vn_us_common_lantern_01";
		};
	};
};

class Land_vn_lampazel
{
	name = "";
	type = "lighting";
	categories[] = {"lighting", "decorative"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_lampazel_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_lampazel";
		};
		class final_state
		{
			object_class = "Land_vn_lampazel";
		};
	};
};

class Land_vn_lampshabby_f_dir_normal
{
	name = "";
	type = "lighting";
	categories[] = {"lighting", "decorative"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_lampshabby_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_lampshabby_f_dir_normal";
		};
		class final_state
		{
			object_class = "Land_vn_lampshabby_f_dir_normal";
		};
	};
};

class Land_vn_lampshabby_f_dir_close
{
	name = "";
	type = "lighting";
	categories[] = {"lighting", "decorative"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_lampshabby_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_lampshabby_f_dir_close";
		};
		class final_state
		{
			object_class = "Land_vn_lampshabby_f_dir_close";
		};
	};
};

class Land_vn_lampshabby_f_dir_far
{
	name = "";
	type = "lighting";
	categories[] = {"lighting", "decorative"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_lampshabby_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_lampshabby_f_dir_far";
		};
		class final_state
		{
			object_class = "Land_vn_lampshabby_f_dir_far";
		};
	};
};

class Land_vn_razorwire_f
{
	name = "";
	type = "fences";
	categories[] = {"fences", "nonAcav"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_razorwire_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_razorwire_f";
		};
		class final_state
		{
			object_class = "Land_vn_razorwire_f";
		};
	};
};

class Land_vn_czechhedgehog_01_f
{
	name = "";
	type = "fences";
	categories[] = {"fences", "fortifications", "nonAcav"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_czechhedgehog_01_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_czechhedgehog_01_f";
		};
		class final_state
		{
			object_class = "Land_vn_czechhedgehog_01_f";
		};
	};
};

class Land_vn_barricade_01_10m_f
{
	name = "";
	type = "walls";
	categories[] = {"fortifications", "nonAcav", "fences"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_barricade_01_10m_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_barricade_01_10m_f";
		};
		class final_state
		{
			object_class = "Land_vn_barricade_01_10m_f";
		};
	};
};

class Land_vn_hootch_02_03
{
	name = "STR_vn_mf_situation_room";
	type = "hqs";
	categories[] = {"hootches", "buildings", "functional", "storage"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_02_03_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_02_03_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_02_03";
		};
	};
	class features
	{
		class base_starter {};
	};
};

class Land_vn_hootch_01_01
{
	name = "";
	type = "hootches";
	categories[] = {"buildings", "hootches", "barracks"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_01_01_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_01_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_01_01";
		};
	};
	class features
	{
		class respawn {};
	};
};

class Land_vn_hootch_01_02
{
	name = "";
	type = "hootches";
	categories[] = {"buildings", "hootches", "barracks"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_01_02_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_01_02_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_01_02";
		};
	};
};

class Land_vn_hootch_01_03
{
	name = "";
	type = "hootches";
	categories[] = {"buildings", "hootches", "medical", "functional", "resupply"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_01_03_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_01_03_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_01_03";
		};
	};
};

class Land_vn_hootch_01_11
{
	name = "";
	type = "hootches";
	categories[] = {"buildings", "hootches", "barracks"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_01_11_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_01_11_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_01_11";
		};
	};
};

class Land_vn_hootch_01_12
{
	name = "";
	type = "hootches";
	categories[] = {"buildings", "hootches", "barracks"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_01_12_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_01_12_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_01_12";
		};
	};
};

class Land_vn_hootch_01_13
{
	name = "";
	type = "hootches";
	categories[] = {"buildings", "hootches", "medical", "functional", "resupply"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_01_13_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_01_13_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_01_13";
		};
	};
};

class Land_vn_hootch_02
{
	name = "";
	type = "hootches";
	categories[] = {"buildings", "hootches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_02_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_02_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_02";
		};
	};
};

class Land_vn_hootch_02_01
{
	name = "";
	type = "hootches";
	categories[] = {"buildings", "hootches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_02_01_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_02_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_02_01";
		};
	};
};

class Land_vn_hootch_02_02
{
	name = "";
	type = "hootches";
	categories[] = {"buildings", "hootches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_02_02_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_02_02_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_02_02";
		};
	};
};

class Land_vn_hootch_02_11
{
	name = "";
	type = "hootches";
	categories[] = {"buildings", "hootches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_02_11_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_02_11_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_02_11";
		};
	};
};

class Land_vn_i_shed_ind_old_f
{
	name = "STR_vn_mf_vehicle_workshop";
	type = "buildings";
	categories[] = {"buildings", "functional"};
	rank = 0;
	SUPPLY_CAPACITY(300, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};

	class build_states
	{
		class initial_state
		{
			object_class = "vn_i_shed_ind_old_f_part0";
		};
		class middle_state
		{
			object_class = "vn_i_shed_ind_old_f_part1";
		};
		class final_state
		{
			object_class = "Land_vn_i_shed_ind_old_f";
		};
	};

	class features
	{
		class vehicle_spawning
		{
			class vehicle_class
			{
				class trucks
				{
					icon = VEHICLE_ICON_TRUCK;
					name = "STR_vn_mf_vic_truck";

					class SPE_US_M3_Halftrack_Unarmed
					{
						/*Array currently unused, only the first number is used*/
						cost[] = {{"BuildingSupplies", 350}};
						cooldown = 300;
						icon = VEHICLE_ICON_TRUCK;
						//side = "INDEPENDENT";
					};

					class SPE_US_M3_Halftrack_Unarmed_Open
					{
						/*Array currently unused, only the first number is used*/
						cost[] = {{"BuildingSupplies", 350}};
						cooldown = 300;
						icon = VEHICLE_ICON_TRUCK;
						//side = "INDEPENDENT";
					};

					class SPE_US_M3_Halftrack
					{
						/*Array currently unused, only the first number is used*/
						cost[] = {{"BuildingSupplies", 650}};
						cooldown = 360;
						icon = VEHICLE_ICON_TRUCK;
						//side = "INDEPENDENT";
					};

					class SPE_US_M16_Halftrack
					{
						/*Array currently unused, only the first number is used*/
						cost[] = {{"BuildingSupplies", 650}};
						cooldown = 360;
						icon = VEHICLE_ICON_TRUCK;
						//side = "INDEPENDENT";
					};
				};
				class statics
				{
					icon = VEHICLE_ICON_STATIC;
					name = "STR_vn_mf_vic_static";

					class SPE_57mm_M1
					{
						cost[] = {{"BuildingSupplies", 350}};
						cooldown = 60;
						icon = VEHICLE_ICON_STATIC;
						//side = "INDEPENDENT";
					};

					class vn_b_navy_static_l60mk3
					{
						cost[] = {{"BuildingSupplies", 300}};
						cooldown = 60;
						icon = VEHICLE_ICON_STATIC;
						//side = "INDEPENDENT";
					};

					class vn_b_navy_static_l70mk2
					{
						cost[] = {{"BuildingSupplies", 300}};
						cooldown = 60;
						icon = VEHICLE_ICON_STATIC;
						//side = "INDEPENDENT";
					};

					class vn_b_army_static_m1919a4_high
					{
						cost[] = {{"BuildingSupplies", 100}};
						cooldown = 60;
						icon = VEHICLE_ICON_STATIC;
						//side = "INDEPENDENT";
					};
					class vn_b_army_static_m2_high
					{
						cost[] = {{"BuildingSupplies", 300}};
						cooldown = 120;
						icon = VEHICLE_ICON_STATIC;
						//side = "INDEPENDENT";
					};

					class vn_b_sf_static_m1919a6
					{
						cost[] = {{"BuildingSupplies", 100}};
						cooldown = 60;
						icon = VEHICLE_ICON_STATIC;
						//side = "INDEPENDENT";
					};

					class SPE_M1_81
					{
						cost[] = {{"BuildingSupplies", 300}};
						cooldown = 120;
						icon = VEHICLE_ICON_STATIC;
						//side = "INDEPENDENT";
					};

					class SPE_M45_Quadmount
					{
						cost[] = {{"BuildingSupplies", 250}};
						cooldown = 60;
						icon = VEHICLE_ICON_STATIC;
						//side = "INDEPENDENT";
					};
				};
				class armour
				{
					icon = VEHICLE_ICON_ARMOUR;
					name = "STR_vn_mf_vic_armour";

					class SPE_M18_Hellcat
					{
						cost[] = {{"BuildingSupplies", 1000}};
						cooldown = 450;
						icon = VEHICLE_ICON_ARMOUR;
						//side = "INDEPENDENT";
					};

					class SPE_M10
					{
						cost[] = {{"BuildingSupplies", 1000}};
						cooldown = 480;
						icon = VEHICLE_ICON_ARMOUR;
						//side = "INDEPENDENT";
					};
				};
			};

			spawnPositionModelSpace[] = {6.00293,3.26758,-1.2};
			spawnDirectionModelSpace = 270;
		};
	};
};

class Land_vn_army_hut3_long_int
{
	name = "";
	type = "hootches";
	categories[] = {"buildings", "hootches", "barracks"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_army_hut3_long_int_part0";
		};
		class middle_state
		{
			object_class = "vn_army_hut3_long_int_part1";
		};
		class final_state
		{
			object_class = "Land_vn_army_hut3_long_int";
		};
	};
};

class Land_vn_fuel_tank_stairs
{
	name = "";
	type = "props";
	categories[] = {};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_fuel_tank_stairs_part0";
		};
		class middle_state
		{
			object_class = "vn_fuel_tank_stairs_part1";
		};
		class final_state
		{
			object_class = "Land_vn_fuel_tank_stairs";
		};
	};
};

class Land_vn_fireplace_f
{
	name = "";
	type = "lighting";
	categories[] = {"lighting", "nonAcav", "sanitation"};
	rank = 0;
	SUPPLY_CAPACITY(20, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_fireplace_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_fireplace_f";
		};
		class final_state
		{
			object_class = "Land_vn_fireplace_f";
		};
	};
};

class vn_b_prop_fmradio_01
{
	name = "";
	type = "radio";
	categories[] = {"decorative"};
	rank = 0;
	SUPPLY_CAPACITY(50, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_radio_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_radio";
		};
		class final_state
		{
			object_class = "vn_b_prop_fmradio_01";
		};
	};
	class features
	{
		class radio {};
	};
};

class Land_SPE_Dugout_6m45_sandbags
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Dugout_6m45_sandbags";
		};
		class middle_state
		{
			object_class = "Land_SPE_Dugout_6m45_sandbags";
		};
		class final_state
		{
			object_class = "Land_SPE_Dugout_6m45_sandbags";
		};
	};
};

class Land_SPE_Dugout_6m315_sandbags
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Dugout_6m315_sandbags";
		};
		class middle_state
		{
			object_class = "Land_SPE_Dugout_6m315_sandbags";
		};
		class final_state
		{
			object_class = "Land_SPE_Dugout_6m315_sandbags";
		};
	};
};

class Land_SPE_Dugout_3m_sandbags
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Dugout_3m_sandbags";
		};
		class middle_state
		{
			object_class = "Land_SPE_Dugout_3m_sandbags";
		};
		class final_state
		{
			object_class = "Land_SPE_Dugout_3m_sandbags";
		};
	};
};

class Land_SPE_Dugout_6m_sandbags
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Dugout_6m_sandbags";
		};
		class middle_state
		{
			object_class = "Land_SPE_Dugout_6m_sandbags";
		};
		class final_state
		{
			object_class = "Land_SPE_Dugout_6m_sandbags";
		};
	};
};

class Land_SPE_Dugout_3m
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Dugout_3m";
		};
		class middle_state
		{
			object_class = "Land_SPE_Dugout_3m";
		};
		class final_state
		{
			object_class = "Land_SPE_Dugout_3m";
		};
	};
};

class Land_SPE_Dugout_6m
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Dugout_6m";
		};
		class middle_state
		{
			object_class = "Land_SPE_Dugout_6m";
		};
		class final_state
		{
			object_class = "Land_SPE_Dugout_6m";
		};
	};
};

class Land_SPE_Dugout_Cover
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Dugout_Cover";
		};
		class middle_state
		{
			object_class = "Land_SPE_Dugout_Cover";
		};
		class final_state
		{
			object_class = "Land_SPE_Dugout_Cover";
		};
	};
};

class Land_SPE_Dugout_Pile_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Dugout_Pile_01";
		};
		class middle_state
		{
			object_class = "Land_SPE_Dugout_Pile_01";
		};
		class final_state
		{
			object_class = "Land_SPE_Dugout_Pile_01";
		};
	};
};

class Land_SPE_Dugout_Pile_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Dugout_Pile_02";
		};
		class middle_state
		{
			object_class = "Land_SPE_Dugout_Pile_02";
		};
		class final_state
		{
			object_class = "Land_SPE_Dugout_Pile_02";
		};
	};
};

class Land_SPE_Wood_TrenchLogWall_01_4m_v3
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Wood_TrenchLogWall_01_4m_v3";
		};
		class middle_state
		{
			object_class = "Land_SPE_Wood_TrenchLogWall_01_4m_v3";
		};
		class final_state
		{
			object_class = "Land_SPE_Wood_TrenchLogWall_01_4m_v3";
		};
	};
};

class Land_SPE_Wood_TrenchLogWall_01_4m_v2
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Wood_TrenchLogWall_01_4m_v2";
		};
		class middle_state
		{
			object_class = "Land_SPE_Wood_TrenchLogWall_01_4m_v2";
		};
		class final_state
		{
			object_class = "Land_SPE_Wood_TrenchLogWall_01_4m_v2";
		};
	};
};

class Land_SPE_Wood_TrenchLogWall_01_4m_v1
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Wood_TrenchLogWall_01_4m_v1";
		};
		class middle_state
		{
			object_class = "Land_SPE_Wood_TrenchLogWall_01_4m_v1";
		};
		class final_state
		{
			object_class = "Land_SPE_Wood_TrenchLogWall_01_4m_v1";
		};
	};
};

class Land_SPE_Stonewall_Low_4m
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Stonewall_Low_4m";
		};
		class middle_state
		{
			object_class = "Land_SPE_Stonewall_Low_4m";
		};
		class final_state
		{
			object_class = "Land_SPE_Stonewall_Low_4m";
		};
	};
};

class Land_SPE_Stonewall_Low_8m
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Stonewall_Low_8m";
		};
		class middle_state
		{
			object_class = "Land_SPE_Stonewall_Low_8m";
		};
		class final_state
		{
			object_class = "Land_SPE_Stonewall_Low_8m";
		};
	};
};

class Land_SPE_Netting_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Netting_01";
		};
		class middle_state
		{
			object_class = "Land_SPE_Netting_01";
		};
		class final_state
		{
			object_class = "Land_SPE_Netting_01";
		};
	};
};

class Land_SPE_Netting_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Netting_02";
		};
		class middle_state
		{
			object_class = "Land_SPE_Netting_02";
		};
		class final_state
		{
			object_class = "Land_SPE_Netting_02";
		};
	};
};

class Land_SPE_US_Tent
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_US_Tent";
		};
		class middle_state
		{
			object_class = "Land_SPE_US_Tent";
		};
		class final_state
		{
			object_class = "Land_SPE_US_Tent";
		};
	};
};

class Land_SPE_Tent_02
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Tent_02";
		};
		class middle_state
		{
			object_class = "Land_SPE_Tent_02";
		};
		class final_state
		{
			object_class = "Land_SPE_Tent_02";
		};
	};
};

class Land_SPE_Tent_03
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Tent_03";
		};
		class middle_state
		{
			object_class = "Land_SPE_Tent_03";
		};
		class final_state
		{
			object_class = "Land_SPE_Tent_03";
		};
	};
};

class Land_SPE_Tent_01
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Tent_01";
		};
		class middle_state
		{
			object_class = "Land_SPE_Tent_01";
		};
		class final_state
		{
			object_class = "Land_SPE_Tent_01";
		};
	};
};

class Land_SPE_German_Tent
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_German_Tent";
		};
		class middle_state
		{
			object_class = "Land_SPE_German_Tent";
		};
		class final_state
		{
			object_class = "Land_SPE_German_Tent";
		};
	};
};

class 
{
	name = "Land_SPE_German_Tent_Oak";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_German_Tent_Oak";
		};
		class middle_state
		{
			object_class = "Land_SPE_German_Tent_Oak";
		};
		class final_state
		{
			object_class = "Land_SPE_German_Tent_Oak";
		};
	};
};

class SPE_FlagCarrier_USA
{
	name = "";
	type = "props";
	categories[] = {"decorative", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "SPE_FlagCarrier_USA";
		};
		class middle_state
		{
			object_class = "SPE_FlagCarrier_USA";
		};
		class final_state
		{
			object_class = "SPE_FlagCarrier_USA";
		};
	};
};


class Land_SPE_BarbedWire_04
{
	name = "";
	type = "fences";
	categories[] = {"fences", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_BarbedWire_04";
		};
		class middle_state
		{
			object_class = "Land_SPE_BarbedWire_04";
		};
		class final_state
		{
			object_class = "Land_SPE_BarbedWire_04";
		};
	};
};

class Land_SPE_BarbedWire_03
{
	name = "";
	type = "fences";
	categories[] = {"fences", "fortifications", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_BarbedWire_03";
		};
		class middle_state
		{
			object_class = "Land_SPE_BarbedWire_03";
		};
		class final_state
		{
			object_class = "Land_SPE_BarbedWire_03";
		};
	};
};

class Land_SPE_BarbedWire_01
{
	name = "";
	type = "fences";
	categories[] = {"fences", "fortifications", "nonAcav", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_BarbedWire_01";
		};
		class middle_state
		{
			object_class = "Land_SPE_BarbedWire_01";
		};
		class final_state
		{
			object_class = "Land_SPE_BarbedWire_01";
		};
	};
};

class Land_SPE_BarbedWire_02
{
	name = "";
	type = "fences";
	categories[] = {"fences", "fortifications", "nonAcav", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_BarbedWire_02";
		};
		class middle_state
		{
			object_class = "Land_SPE_BarbedWire_02";
		};
		class final_state
		{
			object_class = "Land_SPE_BarbedWire_02";
		};
	};
};

class Land_SPE_BarbedWire_End
{
	name = "";
	type = "fences";
	categories[] = {"fences", "fortifications", "nonAcav", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_BarbedWire_End";
		};
		class middle_state
		{
			object_class = "Land_SPE_BarbedWire_End";
		};
		class final_state
		{
			object_class = "Land_SPE_BarbedWire_End";
		};
	};
};

class Land_SPE_Element_c_rust
{
	name = "";
	type = "fences";
	categories[] = {"fences", "fortifications", "nonAcav", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Element_c_rust";
		};
		class middle_state
		{
			object_class = "Land_SPE_Element_c_rust";
		};
		class final_state
		{
			object_class = "Land_SPE_Element_c_rust";
		};
	};
};

class Land_SPE_HedgeHog
{
	name = "";
	type = "fences";
	categories[] = {"fences", "fortifications", "nonAcav", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_HedgeHog";
		};
		class middle_state
		{
			object_class = "Land_SPE_HedgeHog";
		};
		class final_state
		{
			object_class = "Land_SPE_HedgeHog";
		};
	};
};

class Land_SPE_Sandbag_Curve
{
	name = "";
	type = "fences";
	categories[] = {"fences", "fortifications", "nonAcav", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Sandbag_Curve";
		};
		class middle_state
		{
			object_class = "Land_SPE_Sandbag_Curve";
		};
		class final_state
		{
			object_class = "Land_SPE_Sandbag_Curve";
		};
	};
};

class Land_SPE_Sandbag_Gun_Hole
{
	name = "";
	type = "fences";
	categories[] = {"fences", "fortifications", "nonAcav", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Sandbag_Gun_Hole";
		};
		class middle_state
		{
			object_class = "Land_SPE_Sandbag_Gun_Hole";
		};
		class final_state
		{
			object_class = "Land_SPE_Sandbag_Gun_Hole";
		};
	};
};

class Land_SPE_Sandbag_Long
{
	name = "";
	type = "fences";
	categories[] = {"fences", "fortifications", "nonAcav", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Sandbag_Long";
		};
		class middle_state
		{
			object_class = "Land_SPE_Sandbag_Long";
		};
		class final_state
		{
			object_class = "Land_SPE_Sandbag_Long";
		};
	};
};

class Land_SPE_Sandbag_Long_Line
{
	name = "";
	type = "fences";
	categories[] = {"fences", "fortifications", "nonAcav", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Sandbag_Long_Line";
		};
		class middle_state
		{
			object_class = "Land_SPE_Sandbag_Long_Line";
		};
		class final_state
		{
			object_class = "Land_SPE_Sandbag_Long_Line";
		};
	};
};

class Land_SPE_Sandbag_Long_Thick
{
	name = "";
	type = "fences";
	categories[] = {"fences", "fortifications", "nonAcav", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Sandbag_Long_Thick";
		};
		class middle_state
		{
			object_class = "Land_SPE_Sandbag_Long_Thick";
		};
		class final_state
		{
			object_class = "Land_SPE_Sandbag_Long_Thick";
		};
	};
};

class Land_SPE_Sandbag_Nest
{
	name = "";
	type = "fences";
	categories[] = {"fences", "fortifications", "nonAcav", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Sandbag_Nest";
		};
		class middle_state
		{
			object_class = "Land_SPE_Sandbag_Nest";
		};
		class final_state
		{
			object_class = "Land_SPE_Sandbag_Nest";
		};
	};
};

class Land_SPE_Sandbag_Short
{
	name = "";
	type = "fences";
	categories[] = {"fences", "fortifications", "nonAcav", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Sandbag_Short";
		};
		class middle_state
		{
			object_class = "Land_SPE_Sandbag_Short";
		};
		class final_state
		{
			object_class = "Land_SPE_Sandbag_Short";
		};
	};
};

class Land_SPE_Sandbag_Short_Low
{
	name = "";
	type = "fences";
	categories[] = {"fences", "fortifications", "nonAcav", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Sandbag_Short_Low";
		};
		class middle_state
		{
			object_class = "Land_SPE_Sandbag_Short_Low";
		};
		class final_state
		{
			object_class = "Land_SPE_Sandbag_Short_Low";
		};
	};
};

class Land_SPE_Sandbag_Single
{
	name = "";
	type = "fences";
	categories[] = {"fences", "fortifications", "nonAcav", "1944"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Sandbag_Single";
		};
		class middle_state
		{
			object_class = "Land_SPE_Sandbag_Single";
		};
		class final_state
		{
			object_class = "Land_SPE_Sandbag_Single";
		};
	};
};

class Land_SPE_Chateau_01
{
	name = "STR_vn_mf_situation_room";
	type = "hqs";
	categories[] = {"1944", "buildings", "functional", "storage"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_SPE_Chateau_01";
		};
		class middle_state
		{
			object_class = "Land_SPE_Chateau_01";
		};
		class final_state
		{
			object_class = "Land_SPE_Chateau_01";
		};
	};
	class features
	{
		class base_starter {};
	};
};

/*
class Land_vn_usaf_revetment_helipad_02
{
	name = "STR_vn_mf_vehicle_workshop";
	type = "buildings";
	categories[] = {"buildings", "functional"};
	rank = 0;
	SUPPLY_CAPACITY(300, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};

	class build_states
	{
		class initial_state
		{
			object_class = "Land_vn_usaf_revetment_helipad_02";
		};
		class middle_state
		{
			object_class = "vn_b_helipad_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_usaf_revetment_helipad_02";
		};
	};

	class features
	{
		class vehicle_spawning
		{
			class vehicle_class
			{
				class trucks
				{
					icon = VEHICLE_ICON_TRUCK;
					name = "STR_vn_mf_vic_truck";

					class vn_b_wheeled_m54_02
					{
						/*Array currently unused, only the first number is used
						cost[] = {{"BuildingSupplies", 500}};
						cooldown = 300;
						icon = VEHICLE_ICON_TRUCK;
						//side = "WEST";
					};
				};
				class cars
				{
					icon = VEHICLE_ICON_CAR;
					name = "STR_vn_mf_vic_car";

					class vn_b_wheeled_m151_01
					{
						cost[] = {{"BuildingSupplies", 250}};
						cooldown = 120;
						icon = VEHICLE_ICON_CAR;
						//side = "WEST";
					};

					class vn_b_wheeled_m151_mg_04
					{
						cost[] = {{"BuildingSupplies", 500}};
						cooldown = 300;
						icon = VEHICLE_ICON_CAR;
						//side = "WEST";
					};
				};
				class statics
				{
					icon = VEHICLE_ICON_STATIC;
					name = "STR_vn_mf_vic_static";

					class vn_b_sf_static_m2_high
					{
						cost[] = {{"BuildingSupplies", 100}};
						cooldown = 60;
						icon = VEHICLE_ICON_STATIC;
						//side = "WEST";
					};

					class vn_b_ammobox_wpn_01
					{
						cost[] = {{"BuildingSupplies", 100}};
						cooldown = 60;
						icon = VEHICLE_ICON_STATIC;
						//side = "WEST";
					};
				};
				class supplies
				{
					icon = VEHICLE_ICON_SUPPLY;
					name = "STR_vn_mf_vic_supply";

					class vn_b_ammobox_wpn_03
					{
						cost[] = {{"BuildingSupplies", 100}};
						cooldown = 60;
						icon = VEHICLE_ICON_STATIC;
						//side = "WEST";
					};

					class vn_b_ammobox_wpn_06
					{
						cost[] = {{"BuildingSupplies", 100}};
						cooldown = 60;
						icon = VEHICLE_ICON_STATIC;
						//side = "WEST";
					};
				};
			};

			spawnPositionModelSpace[] = {4,0,-0.8};
			spawnDirectionModelSpace = 90;
		};
	};
};*/
