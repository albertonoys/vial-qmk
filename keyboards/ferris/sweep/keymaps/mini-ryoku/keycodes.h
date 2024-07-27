#pragma once

/* Base Layer */

// Shift / Alt / GUI / Ctrl
#define MT_Z LSFT_T(KC_Z)
#define MT_X LALT_T(KC_X)
#define MT_C LGUI_T(KC_C)
#define MT_D LCTL_T(KC_D)
#define MT_V KC_V

// Ctrl / GUI / Alt / Shift
#define MT_H RCTL_T(KC_H)
#define MT_COMM RGUI_T(KC_COMM)
#define MT_DOT LALT_T(KC_DOT)
#define MT_SLSH RSFT_T(KC_SLSH)

#define LT_TAB LT(_FUN, KC_TAB)
#define LT_BSPC LT(_FUN, KC_BSPC)
// #define LT_BSPC LT(_SYM, KC_BSPC)

/* Sym Layer */
#define MT_GRV LSFT_T(KC_GRV)
#define MT_2 LALT_T(KC_2)
#define MT_3 LGUI_T(KC_3)
#define MT_4 LCTL_T(KC_4)

/* Fun Layer */
#define MT_F1 LALT_T(KC_F1)
#define MT_F2 LGUI_T(KC_F2)
#define MT_F3 LCTL_T(KC_F3)

#define MT_MPRV RCTL_T(KC_MPRV)
#define MT_MPLY RGUI_T(KC_MPLY)
#define MT_MNXT RALT_T(KC_MNXT)
#define MT_MUTE RSFT_T(KC_MUTE)

/* Layers */
#define OSL_SYM OSL(_SYM)
#define TO_HOME TO(_HOME)

/* Thumb keys */
#define L_SEC KC_ENT
#define L_MAIN LT_BSPC
#define R_MAIN KC_SPC
