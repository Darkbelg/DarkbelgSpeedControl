if (DBSC_on_off_actions) then {
	presetsActionId = player addAction [
		"Set Speed",
		{
			params ["_target", "_caller", "_actionId", "_arguments"];

			_dialog = createDialog "DBSCPresetSpeeds";
			ctrlSetText [33332, DBSC_speed_1];
			ctrlSetText [33333, DBSC_speed_2];
			ctrlSetText [33334, DBSC_speed_3];
			ctrlSetText [33335, DBSC_speed_4];
			ctrlSetText [33336, DBSC_speed_5];
		},
		nil,
		1.5,
		false
	];
	player setVariable ["presetsActionId", presetsActionId];
};