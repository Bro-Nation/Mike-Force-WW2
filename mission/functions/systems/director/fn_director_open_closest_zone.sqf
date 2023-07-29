/*
    File: fn_director_open_closest_zone.sqf
    Author: Cerebral
    Public: No
    
    Description:
        Find zone closest to a marker called "starting_point" and open it.
    
    Parameter(s):
        NONE
    
    Returns:
        NONE
    
    Example(s):
        call vn_mf_fnc_director_open_closest_zone;
*/

private _uncapturedZones = mf_s_zone_markers select { !(localNamespace getVariable _x select struct_zone_m_captured) };
private _startingPoint = getMarkerPos "starting_point";
private _nearestMarker = [_uncapturedZones, _startingPoint] call BIS_fnc_nearestPosition;
[_nearestMarker] call vn_mf_fnc_director_open_zone;

// Find zone data from mf_s_zones by marker name
private _zoneData = mf_s_zones select (mf_s_zones findIf {_nearestMarker isEqualTo (_x select struct_zone_m_marker)});
[[_zoneData]] call vn_mf_fnc_sites_generate;