/*
	File: fn_create_hq_buildings.sqf
	Author: Savage Game Design
	Public: No
	
	Description:
		Creates buildings for a PAVN HQ.
	
	Parameter(s):
		_position - Position [Position]
	
	Returns: nothing
	
	Example(s): none
*/

params ["_position"];

[_position, 20] call para_s_fnc_hide_foliage;

vn_mf_hq_composition = [
	["Land_SPE_Sandbag_Nest",[-9.27368,-4.70361,0],87.5488,1,0,[0,0],"","",true,false], 
	["Land_SPE_Sandbag_Nest",[-2.85034,10.9302,0],96.1339,1,0,[0,-0],"","",true,false], 
	["vn_o_vc_static_mg42_high",[-10.0176,-5.01123,-0.0705175],88.0798,1,0,[-0.131315,0.208944],"","",true,false], 
	["SPE_MG34_Bipod",[-3.08887,11.1484,-0.0749998],95.8475,1,0,[0,-0],"","",true,false], 
	["Land_SPE_Wood_TrenchLogWall_01_4m_v2",[-9.71338,8.62476,0],180.043,1,0,[0,0],"","",true,false], 
	["Land_SPE_Wood_TrenchLogWall_01_4m_v2",[-11.6487,6.60254,0],271.039,1,0,[0,0],"","",true,false], 
	["SPE_FlaK_38",[-11.5474,8.61206,-0.0466428],90.2106,1,0,[0.864184,0.473827],"","",true,false], 
	["Land_SPE_Wood_TrenchLogWall_01_4m_v2",[-11.6301,10.6575,0],271.039,1,0,[0,0],"","",true,false], 
	["vn_o_prop_t102e_01",[-12.9683,10.0049,0],358.779,1,0,[-4.02865e-005,-8.20116e-006],"","",true,false], 
	["SPE_FlagCarrier_GER",[-15.3271,-5.36841,0],0,1,0,[0,0],"","",true,false], 
	["Land_vn_pavn_weapons_stack2",[-11.6479,11.8521,-0.0285091],1.11808,1,0.0488008,[-0.599792,2.25045e-006],"","",true,false], 
	["Land_SPE_Dugout_6m45_sandbags",[-8.65039,15.7717,0],31.1594,1,0,[0,0],"","",true,false], 
	["Land_vn_pavn_weapons_stack2",[-12.0103,-14.406,-0.0285091],360,1,0.048008,[-0.599825,-1.2687e-006],"","",true,false], 
	["Land_SPE_Wood_TrenchLogWall_01_4m_v2",[-11.5095,-15.6172,0],271.039,1,0,[0,0],"","",true,false], 
	["vn_o_vc_static_mg42_high",[-12.4565,15.4509,-0.0704885],31.5013,1,0,[-0.132874,0.210536],"","",true,false], 
	["Land_SPE_Wood_TrenchLogWall_01_4m_v2",[-9.59277,-17.6499,0],180.043,1,0,[0,0],"","",true,false], 
	["SPE_FlaK_38",[-11.4268,-17.6533,-0.0462575],90.3139,1,0,[0.858475,-0.0316574],"","",true,false], 
	["Land_SPE_Wood_TrenchLogWall_01_4m_v2",[-11.5281,-19.6721,0],271.039,1,0,[0,0],"","",true,false], 
	["Land_SPE_Dugout_6m45_sandbags",[-14.5103,19.3936,0],353.142,1,0,[0,0],"","",true,false], 
	["SPE_MG34_Lafette_low_Deployed",[-24.2151,-5.34009,-0.0674982],87.3029,1,0,[0.000210947,1.87299e-005],"","",true,false], 
	["Land_SPE_House_Big_04_ruins",[-25.427,-5.52368,0],0,1,0,[0,0],"","",true,false], 
	["Land_vn_pavn_weapons_stack2",[-24.6772,-10.0852,0.805099],204.191,1,1,[6.73309,176.975],"","",true,false], 
	["SPE_MG34_Bipod",[-19.8911,19.1526,-0.0749998],358.431,1,0,[0,0],"","",true,false], 
	["Land_SPE_Sandbag_Nest",[-19.7263,19.356,0],0.897172,1,0,[0,0],"","",true,false], 
	["SPE_PzKpfwIII_M",[-16.8804,-23.3687,-0.0733666],147.704,1,0,[-0.0558174,0.000796526],"","",true,false], 
	["SPE_FlaK_36",[-25.3962,14.1082,-0.65093],360,1,0,[5.26902e-007,1.2512e-006],"","",true,false], 
	["SPE_MG34_Bipod",[-29.252,-10.6147,2.85965],270.145,1,0,[0,0],"","",true,false], 
	["SPE_PzKpfwIV_G",[-33.0308,10.5522,-0.0748539],316.117,1,0,[0.102473,-0.00324094],"","",true,false], 
	["SPE_FlaK_36",[-23.7766,-26.4712,-0.65093],180.876,1,0,[1.9371e-006,4.22275e-006],"","",true,false], 
	["SPE_FlagCarrier_GER",[-35.3542,-5.42114,0],0,1,0,[0,0],"","",true,false], 
	["Land_vn_pavn_weapons_stack2",[-40.9453,5.56396,-0.0285149],359.996,1,0.0459102,[-0.600045,-1.67409e-005],"","",true,false], 
	["SPE_MG42_Bipod",[-40.9934,-6.13257,-0.0749998],272.401,1,0,[0,0],"","",true,false], 
	["Land_SPE_Sandbag_Nest",[-41.1685,-5.93457,0],271.377,1,0,[0,0],"","",true,false], 
	["Land_SPE_Wood_TrenchLogWall_01_4m_v2",[-41.4282,6.53223,0],90.9098,1,0,[0,-0],"","",true,false], 
	["vn_o_vc_static_mg42_high",[-35.1487,-23.4104,-0.0705314],204.64,1,0,[-0.130604,0.208424],"","",true,false], 
	["SPE_FlaK_38",[-41.5203,8.56274,-0.0450602],270.005,1,0,[0.861449,-0.154041],"","",true,false], 
	["SPE_MG34_Bipod",[-30.5889,-29.7517,-0.0749998],163.214,1,0,[0,-0],"","",true,false], 
	["Land_SPE_Wood_TrenchLogWall_01_4m_v2",[-41.4189,10.5872,0],90.9098,1,0,[0,-0],"","",true,false], 
	["Land_SPE_Sandbag_Nest",[-30.7363,-30.002,0],162.887,1,0,[0,-0],"","",true,false], 
	["Land_SPE_Dugout_6m45_sandbags",[-35.5898,-25.51,0],182.243,1,0,[0,0],"","",true,false], 
	["Land_SPE_Wood_TrenchLogWall_01_4m_v2",[-43.3496,8.56055,0],359.914,1,0,[0,0],"","",true,false], 
	["Land_SPE_Wood_TrenchLogWall_01_4m_v2",[-41.4399,-15.5486,0],90.9098,1,0,[0,-0],"","",true,false], 
	["SPE_FlaK_38",[-41.5388,-17.5654,-0.0454087],269.86,1,0,[0.859305,0.225059],"","",true,false], 
	["Land_SPE_Wood_TrenchLogWall_01_4m_v2",[-41.4492,-19.6035,0],90.9098,1,0,[0,-0],"","",true,false], 
	["Land_SPE_Wood_TrenchLogWall_01_4m_v2",[-43.3706,-17.5752,0],359.914,1,0,[0,0],"","",true,false], 
	["SPE_MG34_Bipod",[-42.7349,-24.1299,-0.0749998],218.982,1,0,[0,0],"","",true,false], 
	["Land_SPE_Sandbag_Nest",[-43.0557,-24.113,0],211.192,1,0,[0,0],"","",true,false]
];

private _hqObjects = [_position, 0, vn_mf_hq_composition] call BIS_fnc_objectsMapper;
{
    if (_x isKindOf "Land_vn_o_trench_firing_01") then {
        _x setVectorUp (surfaceNormal getPos _x);
    };

	if (_x isKindOf "StaticWeapon") then {
		_x setVectorUp (surfaceNormal getPos _x);
		_x setPos [getPos _x # 0, getPos _x # 1, 0];
	};
} forEach _hqObjects;

_hqObjects