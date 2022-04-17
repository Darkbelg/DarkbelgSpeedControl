class DBSCPresetSpeeds
{
	idd = 1234;
	class ControlsBackground
	{
		class Background: RscText
		{
			idc = -1;
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
			idc = -1;
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
			idc = -1;
			text = "35";
			onButtonClick = "player setVariable ['speed',35,false];call DBSC_fnc_toggleModes;closeDialog 1;";
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
			idc = -1;
			text = "55";
			onButtonClick = "player setVariable ['speed',55,false];call DBSC_fnc_toggleModes;closeDialog 1;";
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
			idc = -1;
			text = "75";
			onButtonClick = "player setVariable ['speed',75,false];call DBSC_fnc_toggleModes;closeDialog 1;";
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
			idc = -1;
			text = "95";
			onButtonClick = "player setVariable ['speed',95,false];call DBSC_fnc_toggleModes;closeDialog 1;";
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
			idc = -1;
			text = "125";
			onButtonClick = "player setVariable ['speed',125,false];call DBSC_fnc_toggleModes;closeDialog 1;";
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
