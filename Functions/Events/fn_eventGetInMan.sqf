player addEventHandler ["GetInMan", {
	params ["_unit", "_role", "_vehicle", "_turret"];

	if (!([vehicle player] call DBSC_fnc_isCorrectVehicle)) exitWith {
		// systemChat "Not a CarX,TankX or ShipX vehicle.";  
	};

	if (!(_role == "driver")) exitWith {
		// systemChat "not a driver";
	};

	if (  (player getVariable "cruiseControlActionId") >= 0) exitWith {
		// systemChat "Nothing to add we already have actions";
	};

	call DBSC_fnc_addCruiseControl;
	call DBSC_fnc_addSpeedLimiter;
	call DBSC_fnc_addPresets;
}];
