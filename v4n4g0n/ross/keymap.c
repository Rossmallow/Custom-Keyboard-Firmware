#include "V4N4G0N20210804220949.h"
enum custom_keycodes {
  CAD = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* 0: Default Layer
    ┌─────┬─────┬─────┬─────┬─────┬─────┐
    │ CAD │LOCK │Play │Mute │VolDn│VolUp│
┌───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬─────┬─────┬─────┬─────┬─────────┐
│ Esc │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │ Bkspace │
├─────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───────┤
│ Tab   │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  '  │ Enter │
├───────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬─────┤
│ Shift   │  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /  │ Ly1 │
├─────┬───┴─┬───┴─┬───┴─────┴─────┴─────┴─────┴─────┴─────┼─────┼─────┼─────┤
│Ctrl │ GUI │ Alt │                Space                  │Left │Down │Right│
└─────┴─────┴─────┴───────────────────────────────────────┴─────┴─────┴─────┘
*/
[0] = LAYOUT(
    CAD,     LGUI(KC_L), KC_MPLY,     KC_MUTE,     KC_VOLD,     KC_VOLU,
    KC_ESC,  KC_Q,       KC_W,        KC_E,        KC_R,        KC_T,    KC_Y,   KC_U,        KC_I,        KC_O,        KC_P,    KC_BSPC,
    KC_TAB,  KC_A,       LT(4, KC_S), LT(3, KC_D), LT(2, KC_F), KC_G,    KC_H,   LT(2, KC_J), LT(3, KC_K), LT(4, KC_L), KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z,       KC_X,        KC_C,        KC_V,        KC_B,    KC_N,   KC_M,        KC_COMM,     KC_DOT,      KC_SLSH, TG(1),
    KC_LCTL, KC_LGUI,    KC_LALT,                KC_NO,  KC_NO,  RCTL_T(KC_SPC), KC_NO,                    KC_LEFT,     KC_DOWN, KC_RIGHT
),

/* 1: Gaming Layer
    ┌─────┬─────┬─────┬─────┬─────┬─────┐
    │  1  │  2  │  3  │  4  │  5  │  6  │
┌───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬─────┬─────┬─────┬─────┬─────────┐
│ Esc │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │ Bkspace │
├─────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───────┤
│ Tab   │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  '  │ Enter │
├───────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬─────┤
│ Shift   │  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │ Up  │ Ly0 │
├─────┬───┴─┬───┴─┬───┴─────┴─────┴─────┴─────┴─────┴─────┼─────┼─────┼─────┤
│Ctrl │ GUI │ Alt │                Space                  │Left │Down │Right│
└─────┴─────┴─────┴───────────────────────────────────────┴─────┴─────┴─────┘
*/
[1] = LAYOUT(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_S,    KC_D,    KC_F,    KC_TRNS, KC_TRNS, KC_J,    KC_K,    KC_L,    KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_SPC, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
),

/* 2: Numbers/Navigation Layer
    ┌─────┬─────┬─────┬─────┬─────┬─────┐
    │  1  │  2  │  3  │  4  │  5  │  6  │
┌───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬─────┬─────┬─────┬─────┬─────────┐
│  `  │  [  │  9  │  8  │  7  │  ]  │PgUp │Home │ Up  │ End │ Ins │ Delete  │
├─────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───────┤
│NumLock│  ;  │  6  │  5  │  4  │  =  │PgDn │Left │Down │Right│  '  │███████│
├───────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬─────┤
│ Shift   │  -  │  3  │  2  │  1  │  \  │█████│█████│█████│█████│ Up  │█████│
├─────┬───┴─┬───┴─┬───┴─────┴─────┴─────┴─────┴─────┴─────┼─────┼─────┼─────┤
│ Alt │  .  │  0  │                Space                  │Left │Down │Right│
└─────┴─────┴─────┴───────────────────────────────────────┴─────┴─────┴─────┘
*/
[2] = LAYOUT(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,
    KC_TILD, KC_LBRC, KC_P9,   KC_P8,   KC_P7,   KC_RBRC, KC_PGUP, KC_HOME, KC_UP,   KC_END,   KC_INS,  KC_DEL,
    KC_NLCK, KC_SCLN, KC_P6,   KC_P5,   KC_P4,   KC_EQL,  KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, KC_NO,
    KC_TRNS,   KC_MINS, KC_P3,   KC_P2,   KC_P1,   KC_BSLS, KC_NO,   KC_NO,  KC_NO,    KC_NO,    KC_UP,   KC_NO,
    KC_LALT, KC_PDOT, KC_P0,            KC_NO,   KC_NO,   KC_TRNS, KC_NO,            KC_TRNS,  KC_TRNS, KC_TRNS
),

/* 3: Symbols/Mouse Layer
    ┌─────┬─────┬─────┬─────┬─────┬─────┐
    │  7  │  8  │  9  │  0  │  (  │  )  │
┌───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬─────┬─────┬─────┬─────┬─────────┐
│  ~  │  {  │  (  │  *  │  &  │  }  │MsWhU│Ms 1 │Ms Up│Ms 2 │Ms 4 │  Ms 3   │
├─────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───────┤
│CapLock│  :  │  ^  │  %  │  $  │  +  │MsWhD│MsLft│MsDwn│MsRgh│Ms 5 │███████│
├───────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬─────┤
│ Shift   │  _  │  #  │  @  │  !  │  |  │MsWhL│MsAc0│MsAc1│MsAc2│MsWhR│█████│
├─────┬───┴─┬───┴─┬───┴─────┴─────┴─────┴─────┴─────┴─────┼─────┼─────┼─────┤
│Ctrl │  (  │  )  │                Space                  │█████│█████│█████│
└─────┴─────┴─────┴───────────────────────────────────────┴─────┴─────┴─────┘
*/
[3] = LAYOUT(
    KC_7,    KC_8,    KC_9,    KC_0,    KC_LPRN, KC_RPRN,
    KC_TILD, KC_LCBR, KC_LPRN, KC_ASTR, KC_AMPR, KC_RCBR, KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, KC_BTN4, KC_BTN3,
    KC_CAPS, KC_COLN, KC_CIRC, KC_PERC, KC_DLR,  KC_PPLS, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN5, KC_NO,
    KC_TRNS,   KC_UNDS, KC_HASH, KC_AT,   KC_EXLM, KC_PIPE, KC_WH_L, KC_ACL0, KC_ACL1, KC_ACL2, KC_WH_R, KC_NO,
    KC_TRNS, KC_LPRN, KC_RPRN,          KC_NO,   KC_NO,   KC_TRNS, KC_NO,            KC_NO,   KC_NO,   KC_NO
),

/* 4: Function/Media Layer
    ┌─────┬─────┬─────┬─────┬─────┬─────┐
    │█████│█████│█████│█████│█████│█████│
┌───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬─────┬─────┬─────┬─────┬─────────┐
│RESET│ F10 │ F9  │ F8  │ F7  │PrScn│RgbUp│RgbPv│VolUp│RgbNx│ClrUp│ RgbTg   │
├─────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───────┤
│███████│ F11 │ F6  │ F5  │ F4  │ScLck│RgbDn│Prev │VolDn│Next │ClrDn│███████│
├───────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬─────┤
│ Shift   │ F12 │ F3  │ F2  │ F1  │Pause│█████│Play │Stop │Mute │█████│█████│
├─────┬───┴─┬───┴─┬───┴─────┴─────┴─────┴─────┴─────┴─────┼─────┼─────┼─────┤
│█████│█████│█████│                Space                  │█████│█████│█████│
└─────┴─────┴─────┴───────────────────────────────────────┴─────┴─────┴─────┘
*/
[4] = LAYOUT(
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    RESET,   KC_F10,  KC_F9,   KC_F8,   KC_F7,   KC_PSCR, RGB_VAI, RGB_RMOD, KC_VOLU, RGB_MOD, RGB_HUI, RGB_TOG,
    KC_NO,   KC_F11,  KC_F6,   KC_F5,   KC_F4,   KC_SLCK, RGB_VAD, KC_MPRV,  KC_VOLD, KC_MNXT, RGB_HUD, KC_NO,
    KC_TRNS,   KC_F12,  KC_F3,   KC_F2,   KC_F1,   KC_PAUS, KC_NO,   KC_MPLY,  KC_MSTP, KC_MUTE, KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_TRNS, KC_NO,             KC_NO,   KC_NO,   KC_NO
)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
    case CAD:
        if (record->event.pressed) {
            // when keycode CAD is pressed
            SEND_STRING(SS_DOWN(X_LCTL)SS_DOWN(X_LALT)SS_DOWN(X_DEL)SS_UP(X_LCTL)SS_UP(X_LALT)SS_UP(X_DEL));
        } else {
            // when keycode CAD is released
        }
        break;
    }
  return true;
};


void process_indicator_update(layer_state_t state, uint8_t usb_led) {

  if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
  writePinHigh(B5);
} else {
  writePinLow(B5);
}

  if (state & (1<<1)) {
  writePinHigh(B4);
} else {
  writePinLow(B4);
}

};

void keyboard_post_init_user(void) {

  setPinOutput(B6);
  writePinHigh(B6);


  setPinOutput(B5);



  setPinOutput(B4);



  process_indicator_update(layer_state, host_keyboard_leds());
};

void led_set_user(uint8_t usb_led) {
  process_indicator_update(layer_state, host_keyboard_leds());
};

layer_state_t layer_state_set_user(layer_state_t state) {
  process_indicator_update(state, host_keyboard_leds());
  return state;
};
