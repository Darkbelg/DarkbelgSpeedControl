cruiseControlActionId = player addAction [
    "Cruise Control",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        getCruiseControl vehicle player params ["_speedLimit", "_cruiseControlActive"];

        if (_speedLimit > 0 && _cruiseControlActive == true && (speed vehicle player) <= (_speedLimit*1.3) ) then {
            (vehicle player) setCruiseControl [0,false];
            systemChat "Cruise Control Deactivated";
        } else {
            if (speed (vehicle player) <= 0) exitWith {
                systemChat "Not enough speed";
            };
            (vehicle player) setCruiseControl [speed (vehicle player),true];
            systemChat "Cruise Control Activated";
        };


    }];
player setVariable ["cruiseControlActionId",cruiseControlActionId];
