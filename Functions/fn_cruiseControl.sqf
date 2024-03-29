if (!([vehicle player] call DBSC_fnc_isCorrectVehicle)) exitWith {
	// systemChat "Not a CarX,TankX or ShipX vehicle.";  
};

getCruiseControl vehicle player params ["_speedLimit", "_cruiseControlActive"];
DBSC_speed = (player getVariable ["speed", speed (vehicle player)]) call BIS_fnc_parseNumber;

if (_speedLimit > 0 && _cruiseControlActive == true && DBSC_speed <= (_speedLimit*1.3)) exitWith {
    (vehicle player) setCruiseControl [0,false];
    if(DBSC_on_off_debug_info) then {
        systemChat "Cruise Control Deactivated";
    }
};

if (DBSC_speed <= 0 && DBSC_on_off_debug_info) exitWith {
    systemChat "Not enough speed";
};

(vehicle player) setCruiseControl [DBSC_speed,true];
if (DBSC_on_off_debug_info) then {
    systemChat format ["Cruise Control Activated at %1 km/h",ceil(DBSC_speed)];
};
