if (!([vehicle player] call DBSC_fnc_isCorrectVehicle)) exitWith {
	// systemChat "Not a CarX,TankX or ShipX vehicle.";  
};

getCruiseControl vehicle player params ["_speedLimit", "_cruiseControlActive"];

if (_speedLimit > 0 && _cruiseControlActive == true && (speed vehicle player) <= (_speedLimit*1.3) ) then {
    (vehicle player) setCruiseControl [0,false];
    systemChat "Cruise Control Deactivated";
} else {
    if (speed (vehicle player) <= 0) exitWith {
        systemChat "Not enough speed";
    };
    (vehicle player) setCruiseControl [speed (vehicle player),true];
    systemChat "Cruise Control Activated";
};