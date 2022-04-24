if (isDedicated) exitWith {};

call DBSC_fnc_eventSeatSwitchedMan;
call DBSC_fnc_eventGetInMan;
call DBSC_fnc_eventGetOutMan;

if ((assignedVehicleRole player)#0 == 'driver' && [vehicle player] call DBSC_fnc_isCorrectVehicle) then {
	call DBSC_fnc_addCruiseControl;
	call DBSC_fnc_addSpeedLimiter;
	call DBSC_fnc_addPresets;
};
