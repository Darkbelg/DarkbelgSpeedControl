speedLimiterActionId = player addAction [
"Speed Limiter",
{
	params ["_target", "_caller", "_actionId", "_arguments"];

	getCruiseControl vehicle player params ["_speedLimit", "_cruiseControlActive"];

	if (_speedLimit > 0 && _cruiseControlActive == false ) then {
		(vehicle player) setCruiseControl [0,false];
		systemChat "Speed Limiter Deactivated";
	} else {
		(vehicle player) setCruiseControl [speed (vehicle player),false];
		systemChat "Speed Limiter Activated";
	}
}];
player setVariable ["speedLimiterActionId",speedLimiterActionId];
