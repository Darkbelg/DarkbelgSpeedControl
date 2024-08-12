class CfgPatches
{
	class DarkbelgSpeedControl
	{
		name = "Darkbelgs speed control";
		author = "Darkbelg";

		requiredVersion = 2.06;
        requiredAddons[] = {"A3_Data_F_AoW_Loadorder", "A3_Data_F_Mod_Loadorder", "cba_common", "cba_events","cba_settings"};
		units[] = {};
		weapons[] = {};

	};
};

class CfgSounds
{
    class DBSC_cruise_control_activated
    {
        name = "cruise_control_activated";
        sound[] = {"darkbelg_speed_control\src\media\cruise_control_activated.ogg", 1, 1, 1};
		titles[] = {};
    };

	class DBSC_cruise_control_deactivated
    {
        name = "cruise_control_deactivated";
        sound[] = {"darkbelg_speed_control\src\media\cruise_control_deactivated.ogg", 1, 1, 1};
		titles[] = {};
    };

	class DBSC_speed_limiter_activated
    {
        name = "speed_limiter_activated";
        sound[] = {"darkbelg_speed_control\src\media\speed_limiter_activated.ogg", 1, 1, 1};
		titles[] = {};
    };

	class DBSC_speed_limiter_deactivated
    {
        name = "speed_limiter_deactivated";
        sound[] = {"darkbelg_speed_control\src\media\speed_limiter_deactivated.ogg", 1, 1, 1};
		titles[] = {};
    };
};

class CfgFunctions
{
	class DarkbelgsSpeedControl
	{
		tag= "DBSC";
		class Functions
		{
            file = "darkbelg_speed_control\src\Functions";
			class resetSpeedActionId{};
			class cruiseControl{};
			class speedLimiter{};
		};

		class Events {
			file = "darkbelg_speed_control\src\Functions\Events";
			class addEventHandlers {
				postInit = 1;
			};
			class eventSeatSwitchedMan{};
			class eventGetInMan{};
			class eventGetOutMan{};
		};

		class Helpers {
			file = "darkbelg_speed_control\src\Functions\Helpers";
			class isCorrectVehicle{};
			class toggleModes{};
		};

		class Actions {
			file = "darkbelg_speed_control\src\Functions\Actions";
			class addCruiseControl{};
			class addSpeedLimiter{};
			class addPresets{};
		};

		class Icons {
			file = "darkbelg_speed_control\src\Functions\Icons";
			class speedLimiterActivatedIcon {};
			class speedLimiterDeactivatedIcon {};
			class cruiseControlActivatedIcon {};
			class cruiseControlDeactivatedIcon {};
		}

		class Settings {
			file = "darkbelg_speed_control\src\Functions\Settings";
			class addSettings {
				preInit = 1;
			};
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
		modifierBlocking=0;
	};

	class DBSC_SpeedLimiterAction
	{
		displayName = "Speed Control Toggle";
		tooltip = "Toggles speed limiter on or off.";
		onActivate = "if (isNull objectParent player || is3DEN) exitWith {}; if ((assignedVehicleRole player)#0 != 'driver') exitWith {}; call DBSC_fnc_speedLimiter";
		modifierBlocking=0;
	};

	class DBSC_ResetSpeedAction
	{
		displayName = "Reset Speed";
		tooltip = "Resets the speed limiter";
		onActivate = "if (isNull objectParent player || is3DEN) exitWith {}; if ((assignedVehicleRole player)#0 != 'driver') exitWith {}; player setVariable ['speed',nil,false];";
		modifierBlocking=0;
	};

	class DBSC_PresetAction
	{
		displayName = "Show presets";
		tooltip = "Shows screen with the preset speeds.";
		onActivate = "if (isNull objectParent player || is3DEN) exitWith {}; if ((assignedVehicleRole player)#0 != 'driver') exitWith {}; createDialog 'DBSCPresetSpeeds';";
		modifierBlocking=0;
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
