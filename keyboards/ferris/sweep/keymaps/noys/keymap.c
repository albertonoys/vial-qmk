#include QMK_KEYBOARD_H

#include "layout.h"

#define XXX KC_NO

/* indirection for layout.h macros to be processed first */
#define LAYOUT_mask(...) LAYOUT_mask_(__VA_ARGS__)

/* just pass the arguments */
#define LAYOUT_mask_(...) LAYOUT(__VA_ARGS__)

enum layer_number {
  _HOME = 0,
  _SYM,
  _FUN,
};

/* see layout.h for details */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_HOME] = LAYOUT_mask(_BASE_LAYOUT),
  [_SYM] = LAYOUT_mask(_SYM_LAYOUT),
  [_FUN] = LAYOUT_mask(_FUN_LAYOUT),
};
