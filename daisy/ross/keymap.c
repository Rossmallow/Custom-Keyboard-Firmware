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
│ Tab   │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │ Enter   │
├───────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───────┤
│ Shift   │  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /    │
└─────┬───┴─┬───┴─┬───┴─────┴─────┴─────┴─────┴─────┴────┬┴─────┼───────┘
      │Ctrl │ Alt │                Space                 │Lyr 1 │
      └─────┴─────┴──────────────────────────────────────┴──────┘
*/
[0] = LAYOUT(
    KC_ESC,  KC_Q,    KC_W,        KC_E,        KC_R,        KC_T, KC_Y, KC_U,        KC_I,        KC_O,        KC_P, KC_BSPC,
    KC_TAB,  KC_A,    LT(5, KC_S), LT(4, KC_D), LT(3, KC_F), KC_G, KC_H, LT(3, KC_J), LT(4, KC_K), LT(5, KC_L),       KC_ENT,
    KC_LSFT, KC_Z,    KC_X,        KC_C,        KC_V,        KC_B, KC_N, KC_M,        KC_COMM,     KC_DOT,            KC_SLSH,
    _______, KC_LCTL, KC_LALT,             RCTL_T(KC_SPC),     RCTL_T(KC_SPC),        _______,     LT(1, KC_RGUI),    _______
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
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(2, KC_BSPC),
    KC_TRNS, KC_TRNS, KC_S,    KC_D,    KC_F,    KC_TRNS, KC_TRNS, KC_J,    KC_K,    KC_L,             KC_ENT,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
    _______, KC_TRNS, KC_TRNS,            KC_SPC,     KC_SPC,               _______, TG(1),            _______
),

/* 2: Game Numbers/Navigation
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│  `  │  1  │ Up  │  2  │  3  │  T  │  Y  │  U  │  I  │  O  │  P  │ Del │
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
    _______, KC_TRNS, KC_TRNS,            KC_TRNS,     KC_TRNS,             _______, TG(1),            _______
),

/* 3: Numbers/Navigation
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│  `  │  [  │  9  │  8  │  7  │  ]  │PgUp │Home │ Up  │ End │ Ins │ Del │
├─────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─────┤
│NumLock│  ;  │  6  │  5  │  4  │  =  │PgDn │Left │Down │Right│    '    │
├───────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───────┤
│█████████│  -  │  3  │  2  │  1  │  \  │█████│█████│█████│█████│███████│
└─────┬───┴─┬───┴─┬───┴─────┴─────┴─────┴─────┴─────┴────┬┴─────┼───────┘
      │  .  │  0  │                Space                 │ Alt  │
      └─────┴─────┴──────────────────────────────────────┴──────┘
*/
[3] = LAYOUT(
    KC_GRV,  KC_LBRC, KC_P9, KC_P8, KC_P7, KC_RBRC, KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_INS, KC_DEL,
    KC_NLCK, KC_SCLN, KC_P6, KC_P5, KC_P4, KC_EQL,  KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT,         KC_QUOT,
    KC_NO,   KC_MINS, KC_P3, KC_P2, KC_P1, KC_BSLS, KC_NO,   KC_NO,   KC_NO,   KC_NO,           KC_NO,
    _______, KC_PDOT, KC_P0,          KC_TRNS,     KC_TRNS,            _______,        KC_LALT, _______
),

/* 4: Symbols/Mouse
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│  ~  │  {  │  (  │  *  │  &  │  }  │MsWhU│Ms 1 │Ms Up│Ms 2 │Ms 4 │Ms 3 │
├─────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─────┤
│ Caps  │  :  │  ^  │  %  │  $  │  +  │MsWhD│MsLft│MsDwn│MsRgh│ Ms 5    │
├───────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───────┤
│█████████│  _  │  #  │  @  │  !  │  |  │MsWhL│MsAc0│MsAc1│MsAc2│MsWhR  │
└─────┬───┴─┬───┴─┬───┴─────┴─────┴─────┴─────┴─────┴────┬┴─────┼───────┘
      │  (  │  )  │                Space                 │██████│
      └─────┴─────┴──────────────────────────────────────┴──────┘
*/
[4] = LAYOUT(
    KC_TILD, KC_LCBR, KC_LPRN, KC_ASTR, KC_AMPR, KC_RBRC, KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, KC_BTN4, KC_BTN3,
    KC_CAPS, KC_COLN, KC_CIRC, KC_PERC, KC_DLR,  KC_EQL,  KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R,          KC_BTN5,
    KC_NO,   KC_UNDS, KC_HASH, KC_AT,   KC_EXLM, KC_BSLS, KC_WH_L, KC_ACL0, KC_ACL1, KC_ACL2,          KC_WH_R,
    _______, KC_LPRN, KC_RPRN,              KC_TRNS,     KC_TRNS,           _______, KC_NO,            _______
),

/* 5: Function/Media
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│RESET│ F10 │ F9  │ F8  │ F7  │PrScn│RgbUp│RgbPv│VolUp│RgbNx│ClrUp│RgbTg│
├─────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─────┤
│███████│ F11 │ F6  │ F5  │ F4  │ScLck│RgbDn│Prev │VolDn│Next │ ClrDn   │
├───────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───────┤
│█████████│ F12 │ F3  │ F2  │ F1  │Pause│█████│Play │Stop │Mute │███████│
└─────┬───┴─┬───┴─┬───┴─────┴─────┴─────┴─────┴─────┴────┬┴─────┼───────┘
      │█████│█████│                Space                 │██████│
      └─────┴─────┴──────────────────────────────────────┴──────┘
*/
[5] = LAYOUT(
    RESET,   KC_F10, KC_F9, KC_F8, KC_F7, KC_PSCR, RGB_VAI, RGB_RMOD, KC_VOLU, RGB_MOD, RGB_HUI, RGB_TOG,
    KC_NO,   KC_F11, KC_F6, KC_F5, KC_F4, KC_SLCK, RGB_VAD, KC_MPRV,  KC_VOLD, KC_MNXT,          RGB_HUD,
    KC_NO,   KC_F12, KC_F3, KC_F2, KC_F1, KC_PAUS, KC_NO,   KC_MPLY,  KC_MSTP, KC_MUTE,          KC_NO,
    _______, KC_NO,  KC_NO,          KC_TRNS,     KC_TRNS,            _______, KC_NO,            _______
)
};
