player addEventHandler ["GetOutMan", {
	params ["_unit", "_role", "_vehicle", "_turret"];

	if (  (player getVariable "cruiseControlActionId") < 0) exitWith {
		// systemChat "Nothing to remove";
	};

	call DBSC_fnc_resetSpeedActionId;
}];
