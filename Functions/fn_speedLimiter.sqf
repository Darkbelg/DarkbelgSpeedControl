if (!([vehicle player] call DBSC_fnc_isCorrectVehicle)) exitWith {
	// systemChat "Not a CarX,TankX or ShipX vehicle.";  
};

getCruiseControl vehicle player params ["_speedLimit", "_cruiseControlActive"];

if (_speedLimit > 0 && _cruiseControlActive == false ) then {
    (vehicle player) setCruiseControl [0,false];
    systemChat "Speed Limiter Deactivated";
} else {
    (vehicle player) setCruiseControl [speed (vehicle player),false];
    systemChat "Speed Limiter Activated";
};
