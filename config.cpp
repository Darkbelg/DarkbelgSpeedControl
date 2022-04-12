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
		};

		class Actions {
			file = "src\Functions\Actions";
			class addCruiseControl{};
			class addSpeedLimiter{};
		};
	};
};

class CfgUserActions
{
	class DBSC_CruiseControlAction // This class name is used for internal representation and also for the inputAction command.
	{
		displayName = "Cruise Control Toggle";
		tooltip = "Toggles cruise control on or off.";
		onActivate = "call DBSC_fnc_cruiseControl";
	};

	class DBSC_SpeedLimiterAction // This class name is used for internal representation and also for the inputAction command.
	{
		displayName = "Speed Control Toggle";
		tooltip = "Toggles speed limiter on or off.";
		onActivate = "call DBSC_fnc_speedLimiter";
	};
};

class UserActionGroups
{
	class DarkbelgSpeedControlSection // Unique classname of your category.
	{
		name = "Darkbelg Speed Control"; // Display name of your category.
		isAddon = 1;
		group[] = {"DBSC_CruiseControlAction","DBSC_SpeedLimiterAction"}; // List of all actions inside this category.
	};
};
