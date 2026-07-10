/* Copyright 2021 Danny Nguyen <danny@keeb.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
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
└─────┬───┴─┬───┴──┬──┴─────┴─────┴─────┴─────┴─────┴─────┼─────┼───────┘
      │Ctrl │ Alt  │                Space                 │ GUI │
      └─────┴──────┴──────────────────────────────────────┴─────┘
*/
[0] = LAYOUT(
    KC_ESC,  KC_Q,    KC_W,        KC_E,        KC_R,        KC_T, KC_Y, KC_U,        KC_I,        KC_O,        KC_P, KC_BSPC,
    KC_TAB,  KC_A,    LT(3, KC_S), LT(2, KC_D), LT(1, KC_F), KC_G, KC_H, LT(1, KC_J), LT(2, KC_K), LT(3, KC_L),       KC_ENT,
    KC_LSFT, KC_Z,    KC_X,        KC_C,        KC_V,        KC_B, KC_N, KC_M,        KC_COMM,     KC_DOT,            KC_SLSH,
    _______, KC_LCTL, KC_LALT, _______, RCTL_T(KC_SPC), RCTL_T(KC_SPC), _______,      _______,     KC_RGUI,           _______
),


/* 1: Numbers/Navigation
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│  `  │  [  │  9  │  8  │  7  │  ]  │PgUp │Home │ Up  │ End │ Ins │ Del │
├─────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─────┤
│NumLock│  ;  │  6  │  5  │  4  │  =  │PgDn │Left │Down │Right│    '    │
├───────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───────┤
│ Shift   │  -  │  3  │  2  │  1  │  \  │█████│█████│█████│█████│███████│
└─────┬───┴─┬───┴──┬──┴─────┴─────┴─────┴─────┴─────┴─────┼─────┼───────┘
      │  .  │  0   │                Space                 │ Alt │
      └─────┴──────┴──────────────────────────────────────┴─────┘
*/
[1] = LAYOUT(
    KC_GRV,  KC_LBRC, KC_P9, KC_P8, KC_P7, KC_RBRC, KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_INS,  KC_DEL,
    KC_NUM,  KC_SCLN, KC_P6, KC_P5, KC_P4, KC_EQL,  KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT,          KC_QUOT,
    KC_TRNS, KC_MINS, KC_P3, KC_P2, KC_P1, KC_BSLS, KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,
    _______, KC_PDOT, KC_P0, _______,  KC_TRNS,     KC_TRNS,  _______,   _______,       KC_LALT, _______
),

/* 2: Symbols/Mouse
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│  ~  │  {  │  (  │  *  │  &  │  }  │MsWhU│Ms 1 │Ms Up│Ms 2 │Ms 4 │Ms 3 │
├─────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─────┤
│ Caps  │  :  │  ^  │  %  │  $  │  +  │MsWhD│MsLft│MsDwn│MsRgh│ Ms 5    │
├───────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───────┤
│█████████│  _  │  #  │  @  │  !  │  |  │MsWhL│MsAc0│MsAc1│MsAc2│MsWhR  │
└─────┬───┴─┬───┴──┬──┴─────┴─────┴─────┴─────┴─────┴─────┼─────┼───────┘
      │  (  │  )   │                Space                 │█████│
      └─────┴──────┴──────────────────────────────────────┴─────┘
*/
[2] = LAYOUT(
    KC_TILD, KC_LCBR, KC_LPRN, KC_ASTR, KC_AMPR, KC_RCBR, MS_WHLU, MS_BTN1, MS_UP,   MS_BTN2, MS_BTN4, MS_BTN3,
    KC_CAPS, KC_COLN, KC_CIRC, KC_PERC, KC_DLR,  KC_PLUS, MS_WHLD, MS_LEFT, MS_DOWN, MS_RGHT,          MS_BTN5,
    KC_NO,   KC_UNDS, KC_HASH, KC_AT,   KC_EXLM, KC_PIPE, MS_WHLL, MS_ACL0, MS_ACL1, MS_ACL2,          MS_WHLR,
    _______, KC_LPRN, KC_RPRN, _______,  KC_TRNS,     KC_TRNS,  _______,    _______,   KC_NO,            _______
),

/* 3: Function/Media
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│RESET│ F10 │ F9  │ F8  │ F7  │PrScn│RgbUp│RgbPv│VolUp│RgbNx│ClrUp│RgbTg│
├─────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─────┤
│███████│ F11 │ F6  │ F5  │ F4  │ScLck│RgbDn│Prev │VolDn│Next │ ClrDn   │
├───────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───────┤
│█████████│ F12 │ F3  │ F2  │ F1  │Pause│█████│Play │Stop │Mute │███████│
└─────┬───┴─┬───┴──┬──┴─────┴─────┴─────┴─────┴─────┴─────┼─────┼───────┘
      │█████│██████│                Space                 │█████│
      └─────┴──────┴──────────────────────────────────────┴─────┘
*/
[3] = LAYOUT(
    RESET,   KC_F10, KC_F9, KC_F8, KC_F7, KC_PSCR, UG_VALU, UG_PREV, KC_VOLU, UG_NEXT, UG_HUEU, UG_TOGG,
    KC_NO,   KC_F11, KC_F6, KC_F5, KC_F4, KC_SCRL, UG_VALD, KC_MPRV, KC_VOLD, KC_MNXT,          UG_HUED,
    KC_NO,   KC_F12, KC_F3, KC_F2, KC_F1, KC_PAUS, KC_NO,   KC_MPLY, KC_MSTP, KC_MUTE,          KC_NO,
    _______, KC_NO,  KC_NO, _______,  KC_TRNS,   KC_TRNS,  _______,  _______, KC_NO,            _______
)
};
