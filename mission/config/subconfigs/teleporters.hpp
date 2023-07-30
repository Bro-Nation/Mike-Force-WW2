class objects
{
	class vn_mf_greenhornets_teleporter 
	{
		destinations[] = {"mikeforce_base", "acav_base", "spiketeam_base", "french_central_base", "french_northern_base", "french_southern_base"};
	};

	class vn_mf_spiketeam_teleporter
	{
		destinations[] = {"mikeforce_base", "acav_base", "greenhornets_base", "french_central_base", "french_northern_base", "french_southern_base"};
	};

	class vn_french_resistance_1_teleporter
	{
		destinations[] = {"spiketeam_base", "acav_base", "greenhornets_base", "french_central_base", "french_northern_base", "french_southern_base"};
	};

	class vn_french_resistance_2_teleporter
	{
		destinations[] = {"spiketeam_base", "acav_base", "greenhornets_base", "french_central_base", "french_northern_base", "french_southern_base"};
	};

	class vn_french_resistance_3_teleporter
	{
		destinations[] = {"spiketeam_base", "acav_base", "greenhornets_base", "french_central_base", "french_northern_base", "french_southern_base"};
	};

	class vn_mf_mikeforce_teleporter
	{
		destinations[] = {"spiketeam_base", "acav_base", "greenhornets_base", "french_central_base", "french_northern_base", "french_southern_base"};
	};

	class vn_mf_acav_teleporter
	{
		destinations[] = {"mikeforce_base", "spiketeam_base", "greenhornets_base", "french_central_base", "french_northern_base", "french_southern_base"};
	};
};

class destinations
{
	class spiketeam_base
	{
		image = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_tel_spikebase_ca.paa";
		position_marker = "mf_respawn_spiketeam";
	};

	class mikeforce_base
	{
		image = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_tel_mikebase_ca.paa";
		position_marker = "mf_respawn_mikeforce";
	};

	class acav_base
	{
		image = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_tel_acavbase_ca.paa";
		position_marker = "mf_respawn_acav";
	};

	class french_northern_base
	{
		image = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_tel_spikebase_ca.paa";
		position_marker = "mf_respawn_french1";
	};

	class french_central_base
	{
		image = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_tel_spikebase_ca.paa";
		position_marker = "mf_respawn_french2";
	};

	class french_southern_base
	{
		image = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_tel_spikebase_ca.paa";
		position_marker = "mf_respawn_french3";
	};



	class greenhornets_base
	{
		image = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_tel_airbase_ca.paa";
		position_marker = "mf_respawn_greenhornets";
	};
};
