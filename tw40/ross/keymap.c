/* Copyright 2020 KnoblesseOblige
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

/*
 * Ross' Training Wheels 40
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* 0: Default layer
┌───────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬───────┐
│ Esc   │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │ Del   │
├───────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴───────┤
│ Tab    │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  ;  │  '  │ Enter      │
├────────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴────────────┤
│ Shift    │  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /  │ Shift          │
├──────┬───┴──┬──┴───┬─┴────┬┴─────┴─────┼─────┴┬────┴────┬┴────┬┴────┬┴────┬─────┬─────┤
│ Ctrl │ GUI  │ Alt  │Lyr 3 │ Backspace  │Space │ Lyr 4   │Left │ Up  │Down │Right│Lyr 1│
└──────┴──────┴──────┴──────┴────────────┴──────┴─────────┴─────┴─────┴─────┴─────┴─────┘
*/
[0] = LAYOUT_all(
    KC_ESC,  KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,  KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
    KC_TAB,  KC_A,    KC_S,    KC_D,   KC_F,   KC_G,  KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,  KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, MO(3), LSFT_T(KC_BSPC),  LCTL_T(KC_SPC),  MO(4), KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT, TG(1)
),

/* 1: Gaming layer
┌───────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬───────┐
│ Esc   │  1  │ Up  │  2  │  3  │  T  │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │ Del   │
├───────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴───────┤
│ Tab    │Left │Down │Right│  4  │  G  │  H  │  J  │  K  │  L  │  ;  │  '  │ Enter      │
├────────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴────────────┤
│ Shift    │  5  │  6  │  7  │  8  │  9  │  N  │  M  │  ,  │  .  │  /  │ Shift          │
├──────┬───┴──┬──┴───┬─┴────┬┴─────┴─────┼─────┴┬────┴────┬┴────┬┴────┬┴────┬─────┬─────┤
│ Ctrl │ GUI  │ Alt  │Space │ Backspace  │Space │ Lyr 1   │Left │ Up  │Down │Right│Lyr 0│
└──────┴──────┴──────┴──────┴────────────┴──────┴─────────┴─────┴─────┴─────┴─────┴─────┘
*/
[1] = LAYOUT_all(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC,       KC_TRNS,      KC_TRNS,       MO(2),     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

/* 2: Game Numbers/Navigation
┌───────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬───────┐
│ `     │  1  │ Up  │  2  │  3  │  T  │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │ Del   │
├───────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴───────┤
│ Tab    │Left │Down │Right│  4  │  G  │  H  │  J  │  K  │  L  │  ;  │  '  │ Enter      │
├────────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴────────────┤
│ Shift    │  5  │  6  │  7  │  8  │  9  │  N  │  M  │  ,  │  .  │  /  │ Shift          │
├──────┬───┴──┬──┴───┬─┴────┬┴─────┴─────┼─────┴┬────┴────┬┴────┬┴────┬┴────┬─────┬─────┤
│ Ctrl │ GUI  │ Alt  │Space │ Backspace  │Space │ Lyr 1   │Left │ Up  │Down │Right│Lyr 0│
└──────┴──────┴──────┴──────┴────────────┴──────┴─────────┴─────┴─────┴─────┴─────┴─────┘
*/
[2] = LAYOUT_all(
    KC_GRV,  KC_1,    KC_UP,   KC_2,    KC_3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_4, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
    KC_TRNS, KC_5,    KC_6,    KC_7,    KC_8, KC_9,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

/* 3: Mouse/Numbers/Media
┌───────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬───────┐
│ RESET │Ms 4 │Ms 2 │Ms Up│Ms 1 │MsWhU│PrScn│PgUp │Home │ Up  │ End │ Ins │█████│ Bksp  │
├───────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴───────┤
│Ms 3    │Ms 5 │MsLft│MsDwn│MsRgh│MsWhD│ScLck│PgDn │Left │Down │Right│ Del │Play        │
├────────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴────────────┤
│██████████│MsWhL│MsAc0│MsAc1│MsAc2│MsWhR│Pause│█████│█████│█████│█████│Mute            │
├──────┬───┴──┬──┴───┬─┴────┬┴─────┴─────┼─────┴┬────┴────┬┴────┬┴────┬┴────┬─────┬─────┤
│NLock │██████│██████│██████│ Backspace  │Space │█████████│Prev │VolUp│VolDn│Next │Stop │
└──────┴──────┴──────┴──────┴────────────┴──────┴─────────┴─────┴─────┴─────┴─────┴─────┘
*/
[3] = LAYOUT_all(
    RESET,   KC_BTN4, KC_BTN2, KC_MS_U, KC_BTN1, KC_WH_U, KC_PSCR, KC_PGUP, KC_HOME, KC_UP,   KC_END,   KC_INS, KC_NO,   KC_BSPC,
    KC_BTN3, KC_BTN5, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_SLCK, KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_DEL,          KC_MPLY,
    KC_NO,   KC_WH_L, KC_ACL0, KC_ACL1, KC_ACL2, KC_WH_R, KC_PAUS, KC_NO,   KC_NO, KC_NO,   KC_NO,              KC_MUTE, KC_MUTE,
    KC_NLCK, KC_NO,   KC_NO,   KC_NO,   KC_TRNS,     KC_TRNS,      KC_NO,          KC_MPRV, KC_VOLU, KC_VOLD,   KC_MNXT, KC_MSTP
),

/* 4: Function/Numbers/Symbols
┌───────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬───────┐
│ `     │ F1  │ F2  │ F3  │ F4  │ F5  │ F6  │ F7  │ F8  │ F9  │ F10 │ F11 │ F12 │ Bksp  │
├───────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴───────┤
│ Caps   │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  -  │ =          │
├────────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴────────────┤
│ (        │  !  │  @  │  #  │  $  │  %  │  ^  │  &  │  *  │  _  │  +  │ )              │
├──────┬───┴──┬──┴───┬─┴────┬┴─────┴─────┼─────┴┬────┴────┬┴────┬┴────┬┴────┬─────┬─────┤
│ Ctrl │ GUI  │ Alt  │██████│ Backspace  │Space │█████████│Left │ Up  │Down │Right│█████│
└──────┴──────┴──────┴──────┴────────────┴──────┴─────────┴─────┴─────┴─────┴─────┴─────┘
*/
[4] = LAYOUT_all(
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_BSPC,
    KC_CAPS, KC_1,    KC_2,    KC_3,    KC_4,   KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,          KC_EQL,
    KC_LPRN, KC_EXLM, KC_AT,   KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_UNDS, KC_PLUS,          KC_RPRN, KC_RPRN,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_TRNS,     KC_TRNS,     KC_NO,            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO
)
};
