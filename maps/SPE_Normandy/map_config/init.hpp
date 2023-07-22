class map_config {
	max_camps_per_zone = 5;
	max_aa_per_zone = 10;
	max_artillery_per_zone = 3;
	max_fortifications_per_zone = 0;
	max_tunnels_per_zone = 3;
	max_vehicle_depots_per_zone = 3;
	starting_zones[] = {"zone_st_denis_le_gast"};
	class zones {
		#include "zones.hpp"
	};
};
