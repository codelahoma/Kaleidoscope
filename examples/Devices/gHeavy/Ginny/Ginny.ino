/* -*- mode: c++ -*-
 * Ginny -- A very basic Kaleidoscope example for the gHeavy Ginny keyboard
 * Copyright (C) 2020  Keyboard.io, Inc
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTabILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include "Kaleidoscope.h"

enum {
  _TEST
};

/* *INDENT-OFF* */
KEYMAPS(
  [_TEST] = KEYMAP_STACKED(
    Key_Q, Key_W, Key_E, Key_R, Key_T, Key_Y,
    Key_A, Key_S, Key_D, Key_F, Key_G, Key_H,
    Key_Z, Key_X, Key_C,

    Key_U, Key_I, Key_O, Key_P, Key_1, Key_2,
    Key_J, Key_K, Key_L, Key_3, Key_4, Key_5,
    Key_V, Key_B, Key_N
  )
);
/* *INDENT-ON* */

void setup() {
  Kaleidoscope.setup();
}

void loop() {
  Kaleidoscope.loop();
}