["DBSC_on_off_debug_info", "CHECKBOX", ["Show debug systemchat", "Show the systemchat info of CC or SL turning on or off."], "Darkbelg Speed Control", false] call CBA_fnc_addSetting;
["DBSC_on_off_actions", "CHECKBOX", ["Show actions in the action list", "Show the actions for CC,SL or set speed."], "Darkbelg Speed Control", true] call CBA_fnc_addSetting;
["DBSC_speed_1", "EDITBOX", ["Set preset speed 1", "Set preset speed in km/h."], "Darkbelg Speed Control", "35"] call CBA_fnc_addSetting;
["DBSC_speed_2", "EDITBOX", ["Set preset speed 2", "Set preset speed in km/h."], "Darkbelg Speed Control", "55"] call CBA_fnc_addSetting;
["DBSC_speed_3", "EDITBOX", ["Set preset speed 3", "Set preset speed in km/h."], "Darkbelg Speed Control", "75"] call CBA_fnc_addSetting;
["DBSC_speed_4", "EDITBOX", ["Set preset speed 4", "Set preset speed in km/h."], "Darkbelg Speed Control", "95"] call CBA_fnc_addSetting;
["DBSC_speed_5", "EDITBOX", ["Set preset speed 5", "Set preset speed in km/h."], "Darkbelg Speed Control", "125"] call CBA_fnc_addSetting;
["DBSC_audio_feedback", "CHECKBOX", ["Set audio feedback", "Set if you want to hear the cruise control or speed limiter be activated or deactivated."], "Darkbelg Speed Control", true] call CBA_fnc_addSetting;
