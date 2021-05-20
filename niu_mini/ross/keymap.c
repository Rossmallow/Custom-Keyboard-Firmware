#include QMK_KEYBOARD_H

/*
 * Ross' Planck Layout
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* 0: Default layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ Esc │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │ Del │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│ Tab │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  '  │ Ent │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│Shift│  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /  │Shift│
├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
│Ctrl │ Alt │ GUI │ Del │Bksp │    Esc    │Space│ Ent │ Tab │ GUI │Lyr 1│
└─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
*/
[0] = LAYOUT_planck_mit(
        KC_ESC,  KC_Q,    KC_W,        KC_E,           KC_R,            KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,    KC_DEL,
        KC_TAB,  KC_A,    LT(5, KC_S), LT(4, KC_D),    LT(3, KC_F),     KC_G,           KC_H,           LT(3, KC_J),    LT(4, KC_K),    LT(5, KC_L),    KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,        KC_C,           KC_V,            KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LALT, KC_LGUI,     LALT_T(KC_DEL), LSFT_T(KC_BSPC), LCTL_T(KC_ESC), LCTL_T(KC_ESC), RCTL_T(KC_SPC), RGUI_T(KC_ENT), RALT_T(KC_TAB), KC_RGUI, TG(1)
),

/* 1: Game
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ Esc │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │ Del │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│ Tab |  A  |  S  |  D  |  F  |  G  │  H  │  J  │  K  │  L  │  '  │ Ent │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│Shift│  Z  │  X  │  C  │  V  │  B  │  N  |  M  |  ,  |  .  |  /  │Shift│
├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
│Ctrl │ Alt │█████│Lyr 2│Bksp │   Space   │Space│ Ent │ Tab │ Gui │Lyr 0│
└─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
*/
[1] = LAYOUT_planck_mit(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_S,    KC_D,        KC_F,    KC_TRNS, KC_TRNS, KC_J,    KC_K,    KC_L,    KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_NO,   LT(2,KC_NO), KC_TRNS, KC_SPC,  KC_SPC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

/* 2: Game Numbers/Navigation
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ Esc │  1  │ Up  │  2  │  3  │  T  │  Y  │  U  │  I  │  O  │  P  │ Del │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│ Tab |Left |Down |Right|  4  |  G  │  H  │  J  │  K  │  L  │  '  │ Ent │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│Shift│  5  │  6  │  7  │  8  │  9  │  N  |  M  |  ,  |  .  |  /  │Shift│
├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
│Ctrl │ Alt │█████│Lyr 2│Bksp │   Space   │Space│ Ent │ Tab │ Gui │Lyr 0│
└─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
 */
[2] = LAYOUT_planck_mit(
        KC_TRNS, KC_1,    KC_UP,   KC_2,    KC_3,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_4,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO
),

/* 3: Numbers/Navigation
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│RESET│  [  │  9  │  8  │  7  │  ]  │PgUp │Home │ Up  │ End │ Ins │Bksp │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│NLock│  ;  │  6  │  5  │  4  │  =  │PgDn │Left │Down │Right│ Del │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│█████│  `  │  3  │  2  │  1  │  \  │█████│█████│█████│█████│█████│█████│
├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
│█████│█████│█████│  .  │  0  │     -     │Space│ Ent │ Tab │█████│█████│
└─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
*/
[3] = LAYOUT_planck_mit(
        RESET,   KC_LBRC, KC_P9, KC_P8,   KC_P7, KC_RBRC, KC_PGUP, KC_HOME, KC_UP,   KC_END,   KC_INS, KC_BSPC,
        KC_NLCK, KC_SCLN, KC_P6, KC_P5,   KC_P4, KC_EQL,  KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_DEL, KC_NO,
        KC_NO,   KC_GRV,  KC_P3, KC_P2,   KC_P1, KC_BSLS, KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,
        KC_NO,   KC_NO,   KC_NO, KC_PDOT, KC_P0, KC_MINS, KC_MINS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_NO,  KC_NO
),

/* 4: Symbols/Mouse
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│█████│  {  │  (  │  *  │  &  │  }  │MsWhU│Ms 1 │Ms Up│Ms 2 │Ms 4 │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│Caps │  :  │  ^  │  %  │  $  │  +  │MsWhD│MsLft│MsDwn│MsRgh│Ms 5 │Ms 3 │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│█████│  ~  │  #  │  @  │  !  │  |  │█████│MsWhL│MsAc0│MsAc1│MsAc2│MsWhR│
├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
│█████│█████│█████│  (  │  )  │     _     │Space│ Ent │ Tab │█████│█████│
└─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
*/
[4] = LAYOUT_planck_mit(
        KC_NO,   KC_LCBR, KC_LPRN, KC_ASTR, KC_AMPR, KC_RCBR, KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, KC_BTN4, KC_NO,
        KC_CAPS, KC_COLN, KC_CIRC, KC_PERC, KC_DLR,  KC_PLUS, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN5, KC_BTN3,
        KC_NO,   KC_TILD, KC_HASH, KC_AT,   KC_EXLM, KC_PIPE, KC_NO,   KC_WH_L, KC_ACL0, KC_ACL1, KC_ACL2, KC_WH_R,
        KC_NO,   KC_NO,   KC_NO,   KC_LPRN, KC_RPRN, KC_UNDS, KC_UNDS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_NO
),

/* 5: Function/Media
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│█████│ F10 │ F9  │ F8  │ F7  │PrScn│RgbUp│RgbPv│VolUp│RgbNx│█████│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│█████│ F11 │ F6  │ F5  │ F4  │ScLck│RgbDn│Prev │VolDn│Next │█████│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│█████│ F12 │ F3  │ F2  │ F1  │Pause│█████│█████│█████│█████│█████│█████│
├─────┼─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────┼─────┤
│█████│█████│█████│█████│█████│███████████│Play │Stop │Mute │█████│RgbTg│
└─────┴─────┴─────┴─────┴─────┴───────────┴─────┴─────┴─────┴─────┴─────┘
*/
[5] = LAYOUT_planck_mit(
        KC_NO, KC_F10, KC_F9, KC_F8, KC_F7, KC_PSCR, RGB_VAI, RGB_RMOD, KC_VOLU, RGB_MOD, KC_NO, KC_NO,
        KC_NO, KC_F11, KC_F6, KC_F5, KC_F4, KC_SLCK, RGB_VAD, KC_MPRV,  KC_VOLD, KC_MNXT, KC_NO, KC_NO,
        KC_NO, KC_F12, KC_F3, KC_F2, KC_F1, KC_PAUS, KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO, KC_NO,
        KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_MPLY,  KC_MSTP, KC_MUTE, KC_NO, RGB_TOG
)
};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

void led_set_user(uint8_t usb_led) {

    if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_COMPOSE)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_KANA)) {

    } else {

    }

}
