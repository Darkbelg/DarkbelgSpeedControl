class DBSCPresetSpeeds
{
	idd = 3333;
	class ControlsBackground
	{
		class Background: RscText
		{
			idc = 33330;
			x =  4.5 * GUI_GRID_CENTER_W + GUI_GRID_CENTER_X;
			y =  16.5 * GUI_GRID_CENTER_H + GUI_GRID_CENTER_Y;
			w = 14.5 * GUI_GRID_CENTER_W;
			h = 7.5 * GUI_GRID_CENTER_H;
			colorBackground[] = {1,0,0,1};
		};
	};
	class Controls
	{
		class SetSpeedPreset1: RscButton
		{

			idc = 33331;
			text = "Reset";
			onButtonClick = "player setVariable ['speed',nil,false];closeDialog 1;";
			colorBackground[] = {0.95,0.95,0.95,1};
			colorFocused[] = {0.95,0.95,0.95,1};
			colorText[] = {0.05,0.05,0.05,1};
			colorBackgroundActive[] = {0.95,0.95,0.95,0.85};
			x = 5 * GUI_GRID_CENTER_W + GUI_GRID_CENTER_X;
			y = 17 * GUI_GRID_CENTER_H + GUI_GRID_CENTER_Y;
			w = 3.33333 * GUI_GRID_CENTER_W;
			h = 2.5 * GUI_GRID_CENTER_H;
		};
		class SetSpeedPreset2: RscButton
		{
			idc = 33332;
			text = "Preset 1";
			onButtonClick = "player setVariable ['speed',DBSC_speed_1,false];call DBSC_fnc_toggleModes;closeDialog 1;";
			colorBackground[] = {0.95,0.95,0.95,1};
			colorFocused[] = {0.95,0.95,0.95,1};
			colorText[] = {0.05,0.05,0.05,1};
			colorBackgroundActive[] = {0.95,0.95,0.95,0.85};
			x = 10 * GUI_GRID_CENTER_W + GUI_GRID_CENTER_X;
			y = 17 * GUI_GRID_CENTER_H + GUI_GRID_CENTER_Y;
			w = 3.33333 * GUI_GRID_CENTER_W;
			h = 2.5 * GUI_GRID_CENTER_H;
		};
		class SetSpeedPreset3: RscButton
		{
			idc = 33333;
			text = "Preset 2";
			onButtonClick = "player setVariable ['speed',DBSC_speed_2,false];call DBSC_fnc_toggleModes;closeDialog 1;";
			colorBackground[] = {0.95,0.95,0.95,1};
			colorFocused[] = {0.95,0.95,0.95,1};
			colorText[] = {0.05,0.05,0.05,1};
			colorBackgroundActive[] = {0.95,0.95,0.95,0.85};
			x = 15 * GUI_GRID_CENTER_W + GUI_GRID_CENTER_X;
			y = 17 * GUI_GRID_CENTER_H + GUI_GRID_CENTER_Y;
			w = 3.33333 * GUI_GRID_CENTER_W;
			h = 2.5 * GUI_GRID_CENTER_H;
		};
		class SetSpeedPreset4: RscButton
		{
			idc = 33334;
			text = "Preset 3";
			onButtonClick = "player setVariable ['speed',DBSC_speed_3,false];call DBSC_fnc_toggleModes;closeDialog 1;";
			colorBackground[] = {0.95,0.95,0.95,1};
			colorFocused[] = {0.95,0.95,0.95,1};
			colorText[] = {0.05,0.05,0.05,1};
			colorBackgroundActive[] = {0.95,0.95,0.95,0.85};
			x = 5 * GUI_GRID_CENTER_W + GUI_GRID_CENTER_X;
			y = 21 * GUI_GRID_CENTER_H + GUI_GRID_CENTER_Y;
			w = 3.33333 * GUI_GRID_CENTER_W;
			h = 2.5 * GUI_GRID_CENTER_H;
		};
		class SetSpeedPreset5: RscButton
		{
			idc = 33335;
			text = "Preset 4";
			onButtonClick = "player setVariable ['speed',DBSC_speed_4,false];call DBSC_fnc_toggleModes;closeDialog 1;";
			colorBackground[] = {0.95,0.95,0.95,1};
			colorFocused[] = {0.95,0.95,0.95,1};
			colorText[] = {0.05,0.05,0.05,1};
			colorBackgroundActive[] = {0.95,0.95,0.95,0.85};
			x = 10 * GUI_GRID_CENTER_W + GUI_GRID_CENTER_X;
			y = 21 * GUI_GRID_CENTER_H + GUI_GRID_CENTER_Y;
			w = 3.33333 * GUI_GRID_CENTER_W;
			h = 2.5 * GUI_GRID_CENTER_H;
		};
		class SetSpeedPreset6: RscButton
		{
			idc = 33336;
			text = "Preset 5";
			onButtonClick = "player setVariable ['speed',DBSC_speed_5,false];call DBSC_fnc_toggleModes;closeDialog 1;";
			colorBackground[] = {0.95,0.95,0.95,1};
			colorFocused[] = {0.95,0.95,0.95,1};
			colorText[] = {0.05,0.05,0.05,1};
			colorBackgroundActive[] = {0.95,0.95,0.95,0.85};
			x = 15 * GUI_GRID_CENTER_W + GUI_GRID_CENTER_X;
			y = 21 * GUI_GRID_CENTER_H + GUI_GRID_CENTER_Y;
			w = 3.33333 * GUI_GRID_CENTER_W;
			h = 2.5 * GUI_GRID_CENTER_H;
		};
	};
};
