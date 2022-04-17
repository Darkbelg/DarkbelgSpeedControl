presetsActionId = player addAction [
    "Set Speed",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        createDialog "DBSCPresetSpeeds";
    },
    nil,
    1.5,
    false
    ];
player setVariable ["presetsActionId",presetsActionId];
