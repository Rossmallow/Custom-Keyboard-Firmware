/* Copyright 2020
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* 0: Default Layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ Esc │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │Bksp │
├─────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─────┤
│ Tab   │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │    '    │
├───────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───────┤
│ Shift   │  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /    │
└─────┬───┴─┬───┴─┬───┴─────┴─────┴─────┴─────┴─────┴────┬┴─────┼───────┘
      │Ctrl │ Alt │                Space                 │Lyr 1 │        
      └─────┴─────┴──────────────────────────────────────┴──────┘         
*/
[0] = LAYOUT(
    KC_ESC,  KC_Q,    KC_W,        KC_E,        KC_R,        KC_T, KC_Y, KC_U,        KC_I,        KC_O,        KC_P, KC_BSPC,
    KC_TAB,  KC_A,    LT(5, KC_S), LT(4, KC_D), LT(3, KC_F), KC_G, KC_H, LT(3, KC_J), LT(4, KC_K), LT(5, KC_L),       KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,        KC_C,        KC_V,        KC_B, KC_N, KC_M,        KC_COMM,     KC_DOT,            KC_SLSH,
    _______, KC_LCTL, KC_LALT,             RCTL_T(KC_SPC),     RCTL_T(KC_SPC),                     LT(1, KC_RGUI),    _______
),

/* 1: Game Layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ Esc │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │Bksp │
├─────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─────┤
│ Tab   │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │ Enter   │
├───────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───────┤
│ Shift   │  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /    │
└─────┬───┴─┬───┴─┬───┴─────┴─────┴─────┴─────┴─────┴────┬┴─────┼───────┘
      │Ctrl │ Alt │                Space                 │Lyr 1 │        
      └─────┴─────┴──────────────────────────────────────┴──────┘         
*/
[1] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL,
    KC_TRNS, KC_TRNS, KC_S,    KC_D,    KC_F,    KC_TRNS, KC_TRNS, KC_J,    KC_K,    KC_L,             KC_ENT,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
    _______, KC_TRNS, KC_TRNS,            KC_SPC,     KC_SPC,                        TG(1),            _______
),

/* 2: Game Numbers/Navigation
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│  `  │  1  │ Up  │  2  │  3  │  T  │  Y  │  U  │  I  │  O  │  P  │Bksp │
├─────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─────┤
│ Tab   │Left │Down │Right│  4  │  G  │  H  │  J  │  K  │  L  │    '    │
├───────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───────┤
│ Shift   │  5  │  6  │  7  │  8  │  9  │  N  │  M  │  ,  │  .  │  /    │
└─────┬───┴─┬───┴─┬───┴─────┴─────┴─────┴─────┴─────┴────┬┴─────┼───────┘
      │Ctrl │ Alt │                Space                 │██████│        
      └─────┴─────┴──────────────────────────────────────┴──────┘         
*/
[2] = LAYOUT(
    KC_GRV,  KC_1,    KC_UP,   KC_2,    KC_3,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL,
    KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_4,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_QUOT,
    KC_TRNS, KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
    _______, KC_TRNS, KC_TRNS,            KC_TRNS,     KC_TRNS,                      TG(1),            _______
),

/* 3: Numbers/Navigation
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│  `  │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │ Up  │  O  │  P  │Bksp │
├─────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─────┤
│ Tab   │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │    '    │
├───────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───────┤
│ Shift   │  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /    │
└─────┬───┴─┬───┴─┬───┴─────┴─────┴─────┴─────┴─────┴────┬┴─────┼───────┘
      │Ctrl │ Alt │                Space                 │Lyr 1 │        
      └─────┴─────┴──────────────────────────────────────┴──────┘         
*/
[3] = LAYOUT(
    KC_GRV,  KC_Q,    KC_W,        KC_E,        KC_R,        KC_T, KC_Y, KC_U,        KC_I,        KC_O,        KC_P, KC_BSPC,
    KC_TAB,  KC_A,    LT(5, KC_S), LT(4, KC_D), LT(3, KC_F), KC_G, KC_H, LT(3, KC_J), LT(4, KC_K), LT(5, KC_L),       KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,        KC_C,        KC_V,        KC_B, KC_N, KC_M,        KC_COMM,     KC_DOT,            KC_SLSH,
    _______, KC_LCTL, KC_LALT,             RCTL_T(KC_SPC),     RCTL_T(KC_SPC),                     LT(1, KC_RGUI),    _______
),
};
