/* Copyright 2018 Jack Humbert
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
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────────┬─────┬─────┬─────┬─────┐
│ Esc │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │ Bkspace │  7  │  8  │  9  │  *  │
├─────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────────┼─────┼─────┼─────┼─────┤
│ Tab  │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  '  │ Enter  │  4  │  5  │  6  │  -  │
├──────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴──┬─────┼─────┼─────┼─────┼─────┤
│ Shift  │  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  ?   │ Up  │  1  │  2  │  3  │  +  │
├──────┬─┴────┬┴─────┼─────┴─────┴─────┴─────┴─────┼─────┴┬────┴┬─────┼─────┼─────┼─────┼─────┼─────┤
│ Ctrl │ GUI  │ Alt  │             Space           │ Ctrl │ GUI │Left │Down │Right│  0  │  .  │Enter│
└──────┴──────┴──────┴─────────────────────────────┴──────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
*/
[0] = LAYOUT(
    KC_ESC,  KC_Q,    KC_W,        KC_E,        KC_R,        KC_T, KC_Y, KC_U,        KC_I,        KC_O,        KC_P,    KC_BSPC, KC_BSPC, KC_P7, KC_P8, KC_P9,   KC_PAST,
    KC_TAB,  KC_A,    LT(3, KC_S), LT(2, KC_D), LT(1, KC_F), KC_G, KC_H, LT(1, KC_J), LT(2, KC_K), LT(3, KC_L), KC_QUOT, KC_ENT,           KC_P4, KC_P5, KC_P6,   KC_PMNS,
    KC_LSFT, KC_Z,    KC_X,        KC_C,        KC_V,        KC_B, KC_N, KC_M,        KC_COMM,     KC_DOT,      KC_SLSH, KC_UP,            KC_P1, KC_P2, KC_P3,   KC_PPLS,
    KC_LCTL, KC_LGUI, KC_LALT,     RCTL_T(KC_SPC), RCTL_T(KC_SPC), RCTL_T(KC_SPC),    KC_RCTL,     KC_RGUI,     KC_LEFT, KC_DOWN, KC_RGHT,        KC_P0, KC_PDOT, KC_PENT
),

/* 1: Numbers/Navigation Layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────────┬─────┬─────┬─────┬─────┐
│  `  │  [  │  9  │  8  │  7  │  ]  │PgUp │Home │ Up  │ End │ Ins │ Delete  │Home │ Up  │PgUp │  /  │
├─────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────────┼─────┼─────┼─────┼─────┤
│NumLok│  ;  │  6  │  5  │  4  │  =  │PgDn │Left │Down │Right│  '  │   '    │Left │█████│Right│█████│
├──────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴──┬─────┼─────┼─────┼─────┼─────┤
│ Shift  │  -  │  3  │  2  │  1  │  \  │█████│█████│█████│█████│██████│ Up  │ End │ Dn  │PgDn │█████│
├──────┬─┴────┬┴─────┼─────┴─────┴─────┴─────┴─────┼─────┴┬────┴┬─────┼─────┼─────┼─────┼─────┼─────┤
│ Alt  │  .   │  0   │             Space           │██████│█████│Left │Down │Right│ Ins │ Del │█████│
└──────┴──────┴──────┴─────────────────────────────┴──────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
*/
[1] = LAYOUT(
    KC_GRV,  KC_LBRC, KC_P9, KC_P8,   KC_P7,   KC_RBRC, KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_INS,  KC_DEL, KC_DEL,   KC_HOME, KC_UP,   KC_PGUP, KC_SLSH,
    KC_NUM,  KC_SCLN, KC_P6, KC_P5,   KC_P4,   KC_EQL,  KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_QUOT,          KC_LEFT, KC_NO,   KC_RGHT, KC_NO,
    KC_TRNS, KC_MINS, KC_P3, KC_P2,   KC_P1,   KC_BSLS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,          KC_END,  KC_DOWN, KC_PGDN, KC_NO,
    KC_LALT, KC_PDOT, KC_P0,          KC_TRNS, KC_TRNS, KC_TRNS,          KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS,          KC_INS,  KC_DEL,  KC_NO
),

/* 2: Symbols/Mouse Layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────────┬─────┬─────┬─────┬─────┐
│  ~  │  {  │  (  │  *  │  &  │  }  │MsWhU│Ms 1 │Ms Up│Ms 2 │Ms 4 │  Ms 3   │  7  │  8  │  9  │  *  │
├─────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────────┼─────┼─────┼─────┼─────┤
│CapLok│  :  │  ^  │  %  │  $  │  +  │MsWhD│MsLft│MsDwn│MsRgh│Ms 5 │████████│  4  │  5  │  6  │  -  │
├──────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴──┬─────┼─────┼─────┼─────┼─────┤
│ Shift  │  _  │  #  │  @  │  !  │  |  │MsWhL│MsAc0│MsAc1│MsAc2│MsWhR │ Up  │  1  │  2  │  3  │  +  │
├──────┬─┴────┬┴─────┼─────┴─────┴─────┴─────┴─────┼─────┴┬────┴┬─────┼─────┼─────┼─────┼─────┼─────┤
│ Crtl │  (   │  )   │             Space           │██████│█████│Left │Down │Right│  0  │  .  │Enter│
└──────┴──────┴──────┴─────────────────────────────┴──────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
*/
[2] = LAYOUT(
    KC_TILD, KC_LCBR, KC_LPRN, KC_ASTR, KC_AMPR, KC_RCBR, KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, KC_BTN4, KC_BTN3, KC_BTN3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_CAPS, KC_COLN, KC_CIRC, KC_PERC, KC_DLR,  KC_PPLS, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN5, KC_NO,            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_UNDS, KC_HASH, KC_AT,   KC_EXLM, KC_PIPE, KC_WH_L, KC_ACL0, KC_ACL1, KC_ACL2, KC_WH_R, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_LPRN, KC_RPRN,          KC_TRNS, KC_TRNS, KC_TRNS,          KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
),

/* 3: Function/Media Layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────────┬─────┬─────┬─────┬─────┐
│RESET│ F10 │ F9  │ F8  │ F7  │PrScn│█████│█████│VolUp│█████│█████│█████████│  7  │  8  │  9  │  *  │
├─────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────────┼─────┼─────┼─────┼─────┤
│██████│ F11 │ F6  │ F5  │ F4  │ScLck│█████│Prev │VolDn│Next │█████│████████│  4  │  5  │  6  │  -  │
├──────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴──┬─────┼─────┼─────┼─────┼─────┤
│ Shift  │ F12 │ F3  │ F2  │ F1  │Pause│█████│Play │Stop │Mute │██████│ Up  │  1  │  2  │  3  │  +  │
├──────┬─┴────┬┴─────┼─────┴─────┴─────┴─────┴─────┼─────┴┬────┴┬─────┼─────┼─────┼─────┼─────┼─────┤
│██████│██████│██████│             Space           │██████│█████│Left │Down │Right│  0  │  .  │Enter│
└──────┴──────┴──────┴─────────────────────────────┴──────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
*/
[3] = LAYOUT(
    KC_BOOT, KC_F10, KC_F9, KC_F8, KC_F7, KC_PSCR, KC_NO, KC_NO,   KC_VOLU, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_NO,   KC_F11, KC_F6, KC_F5, KC_F4, KC_SCRL, KC_NO, KC_MPRV, KC_VOLD, KC_MNXT, KC_NO,   KC_NO,            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_F12, KC_F3, KC_F2, KC_F1, KC_PAUS, KC_NO, KC_MPLY, KC_MSTP, KC_MUTE, KC_NO,   KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_NO,   KC_NO,  KC_NO        KC_TRNS, KC_TRNS, KC_TRNS,       KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
)
