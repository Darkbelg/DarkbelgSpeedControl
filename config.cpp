class CfgPatches
{
	class DarkbelgSpeedControl
	{
		// Meta information for editor
		name = "Darkbelgs speed control";
		author = "Darkbelg";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = 2.06;
	};
};

class CfgFunctions
{
	class DarkbelgsSpeedControl
	{
		tag= "DBSC"
		class Functions
		{
            file = "src\Functions";
			class resetSpeedActionId{};
			class cruiseControl{};
			class speedLimiter{};
		};

		class Events {
			file = "src\Functions\Events";
			class addEventHandlers {
				postInit = 1;
			};
			class eventSeatSwitchedMan{};
			class eventGetInMan{};
			class eventGetOutMan{};
		};

		class Helpers {
			file = "src\Functions\Helpers";
			class isCorrectVehicle{};
			class toggleModes{};
		};

		class Actions {
			file = "src\Functions\Actions";
			class addCruiseControl{};
			class addSpeedLimiter{};
			class addPresets{};
		};
	};
};

class CfgUserActions
{
	class DBSC_CruiseControlAction
	{
		displayName = "Cruise Control Toggle";
		tooltip = "Toggles cruise control on or off.";
		onActivate = "if (isNull objectParent player || is3DEN) exitWith {}; if ((assignedVehicleRole player)#0 != 'driver') exitWith {}; call DBSC_fnc_cruiseControl";
	};

	class DBSC_SpeedLimiterAction
	{
		displayName = "Speed Control Toggle";
		tooltip = "Toggles speed limiter on or off.";
		onActivate = "if (isNull objectParent player || is3DEN) exitWith {}; if ((assignedVehicleRole player)#0 != 'driver') exitWith {}; call DBSC_fnc_speedLimiter";
	};

	class DBSC_ResetSpeedAction
	{
		displayName = "Reset Speed";
		tooltip = "Resets the speed limiter";
		onActivate = "if (isNull objectParent player || is3DEN) exitWith {}; if ((assignedVehicleRole player)#0 != 'driver') exitWith {}; player setVariable ['speed',nil,false];";
	};

	class DBSC_PresetAction
	{
		displayName = "Show presets";
		tooltip = "Shows screen with the preset speeds.";
		onActivate = "if (isNull objectParent player || is3DEN) exitWith {}; if ((assignedVehicleRole player)#0 != 'driver') exitWith {}; createDialog 'DBSCPresetSpeeds';";
	};
};

class UserActionGroups
{
	class DarkbelgSpeedControlSection // Unique classname of your category.
	{
		name = "Darkbelg Speed Control"; // Display name of your category.
		isAddon = 1;
		group[] = {"DBSC_CruiseControlAction","DBSC_SpeedLimiterAction","DBSC_ResetSpeedAction","DBSC_PresetAction"}; // List of all actions inside this category.
	};
};

#include "\a3\ui_f\hpp\defineCommonGrids.inc"
#include "UI\BaseControls.hpp"
#include "UI\DBSCPresetSpeeds.hpp"
