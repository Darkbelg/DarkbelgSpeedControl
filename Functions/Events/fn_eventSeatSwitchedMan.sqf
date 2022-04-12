player addEventHandler ["SeatSwitchedMan", {
	params ["_unit1", "_unit2", "_vehicle"];
	// hint format ["%1",assignedVehicleRole player];

	if (!([vehicle player] call DBSC_fnc_isCorrectVehicle)) exitWith {
		//systemChat "Not a CarX,TankX or ShipX vehicle.";  
	};

	if (!((assignedVehicleRole player)#0 == "driver")) exitWith {
		// systemChat "not a driver";

		if ( (player getVariable "cruiseControlActionId") >= 0) exitWith {
			// systemChat "remove action";
			call DBSC_fnc_resetSpeedActionId;
		};
	};

	call DBSC_fnc_addCruiseControl;
	call DBSC_fnc_addSpeedLimiter;
}];
