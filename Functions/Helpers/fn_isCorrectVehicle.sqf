params ["_vehicle"];
if (toLower(getText ( configFile >> "CfgVehicles" >> typeOf _vehicle >> "simulation")) in ["carx","tankx","shipx"] ) exitWith {
	true;
};

false;
