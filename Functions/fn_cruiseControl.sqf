if (!([vehicle player] call DBSC_fnc_isCorrectVehicle)) exitWith {
	// systemChat "Not a CarX,TankX or ShipX vehicle.";  
};

getCruiseControl vehicle player params ["_speedLimit", "_cruiseControlActive"];

if (_speedLimit > 0 && _cruiseControlActive == true && player getVariable ["speed",speed (vehicle player)] <= (_speedLimit*1.3) ) exitWith {
    (vehicle player) setCruiseControl [0,false];
    systemChat "Cruise Control Deactivated";
};

if (player getVariable ["speed",speed (vehicle player)] <= 0) exitWith {
    systemChat "Not enough speed";
};

(vehicle player) setCruiseControl [player getVariable ["speed",speed (vehicle player)],true];
systemChat format ["Cruise Control Activated at %1 km/h",ceil(player getVariable ["speed",speed (vehicle player)])];
