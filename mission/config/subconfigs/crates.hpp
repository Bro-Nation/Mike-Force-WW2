class MedicalCrate
{
	objectClassname = "vn_b_ammobox_supply_03";
	weapons[] = {};
	magazines[] = {{"vn_prop_med_antivenom",30},
	{"vn_prop_med_wormpowder",15},
	{"vn_prop_med_dysentery",15},
	{"vn_prop_med_painkillers",30},
	{"vn_prop_med_antimalaria",15},
	{"vn_prop_med_antibiotics",30}};
	items[] = {{"vn_b_item_medikit_01",10},
	{"vn_b_item_firstaidkit",40}};
	backpacks[] = {};
};

class AmmoCrateLight
{
	objectClassname = "SPE_BasicAmmunitionBox_US";
	weapons[] = {};
	magazines[] = {
		{},
		{},
		{"SPE_8Rnd_762x63",30},
		{"SPE_8Rnd_762x63_t",25},
		{"SPE_8Rnd_762x63_M2_AP",25},
		{"SPE_15Rnd_762x33",25},
		{"SPE_15Rnd_762x33_t",25},
		{"SPE_5Rnd_762x63",25},
		{"SPE_5Rnd_762x63_t",25},
		{"SPE_5Rnd_762x63_M1",25},
		{"SPE_5Rnd_762x63_M2_AP",25},
		{"SPE_30Rnd_M3_GreaseGun_45ACP",25},
		{"SPE_30Rnd_M3_GreaseGun_45ACP_t",25},
		{"SPE_32Rnd_9x19_Sten",25},
		{"SPE_30Rnd_Thompson_45ACP",25},
		{"SPE_30Rnd_Thompson_45ACP_t",25},
		{"SPE_20Rnd_Thompson_45ACP",25},
		{"SPE_20Rnd_Thompson_45ACP_t",25},
		{"SPE_32Rnd_9x19_Sten",20},
		{"SPE_7Rnd_45ACP_1911",20},
		{"SPE_50Rnd_762x63",25},
		{"SPE_50Rnd_762x63_M1",25},
		{"SPE_50Rnd_762x63_M2_AP",25},
		{"vn_m1897_fl_mag",20},
		{"vn_m1897_buck_mag", 25},
		{"SPE_50Rnd_762x63", 25},
		{"SPE_50Rnd_762x63_M1", 25},
		{"SPE_50Rnd_762x63_M2_AP", 25},
		{"vn_m1928_mag", 30}
	};
	items[] = {};
	backpacks[] = {};
};

class AmmoCrateSupport
{
	objectClassname = "SPE_BasicAmmunitionBox_US";
	weapons[] = {{"SPE_M1919A4",10},
	    {"SPE_M1918A2_BAR",10},
		{"SPE_FM_24_M29",10},
		{"SPE_M1919A6",10},
		{"SPE_M2_Tripod",10},
		{"SPE_Lafette_Tripod",10},
		{"SPE_M1_81_Stand",10},
		{"SPE_M1_81_Barrel",10},
        {"SPE_MLE_27_31_Stand",10},
        {"SPE_MLE_27_31_Barrel",10},
        {"SPE_GrW278_1_Stand",10},
        {"SPE_GrW278_1_Barrel",10},
        {"SPE_M2_Flamethrower",10},
		{"SPE_M1A1_Bazooka",5}
	};
	magazines[] = {
        {"SPE_M2_Flamethrower_Mag",10}};
	items[] = {{"vn_m_wrench_01",10}};      
	 backpacks[] = {
	    {"vn_b_pack_static_m2_high_01",03},
        {"vn_b_pack_static_m2_low_01",03},
        {"vn_b_pack_static_m2_01",03},
        {"vn_b_pack_static_m29_01",03},
        {"vn_b_pack_static_m1919a4_low_01",03},
		{"vn_b_pack_static_m1919a4_high_01",03},
		{"vn_b_pack_static_m1919a6_01",03},
		{"vn_b_pack_static_base_01",03},
		{"vn_o_pack_static_mg42_high",03},
		{"vn_o_pack_08",03}};
}

class AmmoCrateExplosives
{
	objectClassname = "SPE_US_Ammocrate_Grenades_Frag";
	weapons[] = {
		{"SPE_M1A1_Bazooka"};
		{},
	};
	magazines[] = {
		{"SPE_1Rnd_60mm_M6",30},
		{"SPE_US_M18",30},
		{"SPE_US_M18_Red",30},
		{"SPE_US_M18_Green",20},
		{"SPE_US_M18_Yellow",20},
		{"SPE_US_M18_Violet",20},
		{"SPE_US_Mk_1",20},
		{"SPE_NB39",10},
		{"SPE_NBK39b",10},
		{"SPE_US_Mk_2",20},
		{"SPE_US_Mk_2_Yellow",20},
		{"SPE_US_Mk_3",20},
		{"SPE_US_M15",20},
		{"SPE_US_AN_M14",20},
		{"SPE_Shg24",10},
		{"SPE_Shg24_Frag",10},
		{"SPE_Shg24x7",20},
		{"SPE_M39",20},
		{"SPE_US_M1A1_ATMINE_mag",15},
		{"SPE_US_M3_MINE_mag",10},
		{"SPE_US_M3_Pressure_MINE_mag",10},
		{"SPE_US_TNT_4pound_mag",25},
		{"SPE_US_TNT_half_pound_mag",30},
		{"SPE_US_Bangalore_mag",20},
		{"SPE_TMI_42_MINE_mag",20},
		{"SPE_1Rnd_G_SPRGR_30",25},
		{"SPE_1Rnd_G_Mk2",40},
		{"SPE_1Rnd_G_M9A1",20},
		{"SPE_1Rnd_G_M2_ANM8",10},
		{"SPE_1Rnd_G_M2_M18_Red",10},
        {"SPE_1Rnd_G_M2_M18_Yellow",10},
		{"SPE_1Rnd_G_M2_M18_Green",10},
		{"SPE_1Rnd_G_M2_M18_Violet",10},
        {"SPE_1Rnd_G_M2_AN_M14",10},
        {"SPE_1Rnd_G_M17A1",10},
		{"SPE_1Rnd_G_M19A1",10},
		{"SPE_1Rnd_G_M21A1",10},
		{"SPE_1Rnd_G_M51A1",10}};
	items[] = {};
	backpacks[] = {};
};

class FoodCrate
{
	objectClassname = "vn_b_ammobox_supply_02";
	weapons[] = {};
	magazines[] = {};
	items[] = {};
	backpacks[] = {};
};
