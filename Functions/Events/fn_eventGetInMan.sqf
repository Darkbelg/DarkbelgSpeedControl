player addEventHandler ["GetInMan", {
	params ["_unit", "_role", "_vehicle", "_turret"];

	[_vehicle] call DBSC_fnc_isCorrectVehicle;

	if (!(_role == "driver")) exitWith {
		// systemChat "not a driver";
	};
	
	if (  (player getVariable "cruiseControlActionId") >= 0) exitWith {
		// systemChat "remove action";
		player removeAction (player getVariable "cruiseControlActionId");
		player removeAction (player getVariable "speedLimiterActionId");
	};

	call DBSC_fnc_addCruiseControl;
	call DBSC_fnc_addSpeedLimiter;
}];
