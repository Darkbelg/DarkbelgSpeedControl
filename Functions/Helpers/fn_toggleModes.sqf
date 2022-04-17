getCruiseControl vehicle player params ["_speedLimit", "_cruiseControlActive"];
if (speed (vehicle player) <= 0) exitWith {
	
};

if (_cruiseControlActive == true) exitWith {
	call  DBSC_fnc_cruiseControl;
};

if (_cruiseControlActive == false) exitWith {
	call  DBSC_fnc_speedLimiter;
};
