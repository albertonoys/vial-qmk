#pragma once

#define VIAL_KEYBOARD_UID {0x47, 0x97, 0x7E, 0x32, 0xC9, 0xAC, 0x13, 0xF3}

#define VIAL_UNLOCK_COMBO_ROWS { 2, 3, 0, 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1, 0, 2, 4 }

/* Select hand configuration */
// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS

/* Combo Settings */
#define COMBO_TERM 25
#define COMBO_ONLY_FROM_LAYER 0
#define COMBO_SHOULD_TRIGGER

/* Tap Hold Settings */
// #define TAPPING_FORCE_HOLD
#define PERMISSIVE_HOLD
#define QUICK_TAP_TERM 100
#define TAPPING_TERM 150

/* Mouse settings (Defaults converted for 144Hz) */
#define MOUSEKEY_INTERVAL 6
#define MOUSEKEY_MOVE_DELTA 5
#define MOUSEKEY_MAX_SPEED 3
#define MOUSEKEY_TIME_TO_MAX 77
