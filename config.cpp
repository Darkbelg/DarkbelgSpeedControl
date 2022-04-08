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
	class DarkbelgSpeedControl
	{
		tag= "DBSC"
		class Functions
		{
            file = "Functions";
			class addEventHandlers {
				postInit = 1;
			};

			class eventSeatSwitchedMan{};
			class eventGetInMan{};
			class eventGetOutMan{};
			class isCorrectVehicle{};
			class addCruiseControl{};
			class addSpeedLimiter{};
			class resetSpeedActionId{};
		};
	};
};
