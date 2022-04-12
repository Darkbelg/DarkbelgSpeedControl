speedLimiterActionId = player addAction [
	"Speed Limiter",
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		call  DBSC_fnc_speedLimiter;
	},
    nil,
    1.5,
    false
	];
player setVariable ["speedLimiterActionId",speedLimiterActionId];
