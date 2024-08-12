disableSerialization;

// Get the display
_display = findDisplay 46;

// Check if the picture control already exists
_picCtrl = _display displayCtrl -1;

// Create the picture control
_picCtrl = _display ctrlCreate ["RscPicture", -1];

// Set the picture control's texture
_picCtrl ctrlSetText "darkbelg_speed_control\src\Media\speed_limiter_activated.paa";

_offset = 0.2; // Adjust this value to move the icon up or down
_picCtrl ctrlSetPosition [
    safezoneX + (safeZoneW - 0.1) / 2,
    safezoneY + (safeZoneH - 0.11) / 2 + _offset,
    0.1,
    0.11
];

_picCtrl ctrlCommit 0;

[_picCtrl] spawn {
	params['_picCtrl'];

	sleep 2;
	ctrlDelete _picCtrl;
};
