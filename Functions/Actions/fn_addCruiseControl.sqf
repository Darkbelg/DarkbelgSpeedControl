cruiseControlActionId = player addAction [
    "Cruise Control",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        call  DBSC_fnc_cruiseControl;
    },
    nil,
    1.5,
    false
    ];
player setVariable ["cruiseControlActionId",cruiseControlActionId];
