if (!([vehicle player] call DBSC_fnc_isCorrectVehicle)) exitWith {
	// systemChat "Not a CarX,TankX or ShipX vehicle.";  
};

getCruiseControl vehicle player params ["_speedLimit", "_cruiseControlActive"];
DBSC_speed = (player getVariable ["speed",speed (vehicle player)]) call BIS_fnc_parseNumber;

if (_speedLimit > 0 && _cruiseControlActive == false && _speedLimit >= parseNumber(player getVariable ["speed",_speedLimit]) && DBSC_on_off_debug_info) exitWith {
    (vehicle player) setCruiseControl [0,false];
    systemChat "Speed Limiter Deactivated";
};

if (DBSC_speed <= 0 && DBSC_on_off_debug_info) exitWith {
    systemChat "Not enough speed";
};

(vehicle player) setCruiseControl [DBSC_speed,false];

if (DBSC_on_off_debug_info) then {
  systemChat format ["Speed Limiter Activated at %1 km/h",ceil(DBSC_speed)];  
};
