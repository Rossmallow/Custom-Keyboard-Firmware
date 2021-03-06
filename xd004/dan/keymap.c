#include QMK_KEYBOARD_H

enum custom_keycodes {
    ZOOM_DC = SAFE_RANGE,
    DTP_GAME,
    TO_BED,
    MAC_DUF,
    HWSNBN_GIF
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* 0: Media Layer
    ┌─────┬─────┬─────┬─────┐
    │VolUp│VolDn│Mute │Play │
    └─────┴─────┴─────┴─────┘
    */
    [0] = LAYOUT_all(LT(1, KC_VOLU), LT(2, KC_VOLD), LT(3, KC_MUTE), LT(4, KC_MPLY)),

    /* 1: Browser Layer
    ┌─────┬─────┬─────┬─────┐
    │█████│Back │Forw │Refr │
    └─────┴─────┴─────┴─────┘
    */
    [1] = LAYOUT_all(KC_NO, KC_WBAK, KC_WFWD, KC_WREF),

    /* 2: Zoom Layer
    ┌─────┬─────┬─────┬─────┐
    │Mute │█████│Share│Leave│
    └─────┴─────┴─────┴─────┘
    */
    [2] = LAYOUT_all(A(KC_A), KC_NO, A(KC_S), ZOOM_DC),

    /* 3: Discord Layer 1
    ┌─────┬─────┬─────┬─────┐
    │Mute │Deaf │█████│@DTP │
    └─────┴─────┴─────┴─────┘
    */
    [3] = LAYOUT_all(RCS(KC_M), RCS(KC_D), KC_NO, DTP_GAME),

    /* 4: Discord Layer 2
    ┌─────┬─────┬─────┬─────┐
    │Sleep│:mac:│V_GIF│█████│
    └─────┴─────┴─────┴─────┘
    */
    [4] = LAYOUT_all(TO_BED, MAC_DUF, HWSNBN_GIF, KC_NO)

};

// Loop
void matrix_scan_user(void){
    // Empty
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case ZOOM_DC:
        if (record->event.pressed) {
            // when keycode ZOOM_DC is pressed
            SEND_STRING(SS_LALT("q")SS_TAP(X_ENT));
        } else {
            // when keycode ZOOM_DC is released
        }
        break;

    case DTP_GAME:
        if (record->event.pressed) {
            // when keycode DTP_GAME is pressed
            SEND_STRING("@DTP"SS_TAP(X_TAB)" Game?"SS_TAP(X_ENT));
        } else {
            // when keycode DTP_GAME is released
        }
        break;

    case TO_BED:
        if (record->event.pressed) {
            // when keycode AT_ROSS is pressed
            SEND_STRING("I can't. I'm going to bed."SS_TAP(X_ENT));
        } else {
            // when keycode AT_ROSS is released
        }
        break;

    case MAC_DUF:
        if (record->event.pressed) {
            // when keycode MAC_DUF is pressed
            SEND_STRING(":macduf:"SS_TAP(X_ENT));
        } else {
            // when keycode MAC_DUF is released
        }
        break;

    case HWSNBN_GIF:
        if (record->event.pressed) {
            // when keycode HWSNBN_GIF is pressed
            SEND_STRING("https://3.bp.blogspot.com/-GNnfZth4qSo/UaEp81mcg8I/AAAAAAAAyWw/kO4Pv_EAQ1U/s1600/harry-potter-dancing-gifs-7.gif"SS_TAP(X_ENT));
        } else {
            // when keycode HWSNBN_GIF is released
        }
        break;
    }
    return true;
};
