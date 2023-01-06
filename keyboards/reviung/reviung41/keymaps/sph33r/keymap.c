#include QMK_KEYBOARD_H

// begin tapdance
#ifdef TAP_DANCE_ENABLE
enum {
    TD_CTL_CAP,
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Control, twice for Caps Lock
    [TD_CTL_CAP] = ACTION_TAP_DANCE_DOUBLE(KC_LCTRL, KC_CAPS),
};

#endif
// end tapdance

#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
};


 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT_reviung41(
    KC_TAB,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,              KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, 
    TD(TD_CTL_CAP), KC_A,  KC_S, KC_D, KC_F,  KC_G,         KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
    QK_GESC, KC_Z, KC_X, KC_C, KC_V, KC_B,                  KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_ENT), 
                                    KC_LGUI, MO(1), KC_SPC, MO(2), KC_LALT
),

[_LAYER1] = LAYOUT_reviung41(
    _______, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL, 
    _______,  KC_NO,  KC_NO,  KC_NO, KC_UNDS, KC_MINS,      KC_PIPE, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_NO, 
    _______,  KC_NO,  KC_NO,  KC_NO, KC_EQL,  KC_PLUS,      KC_BSLS, KC_LCBR, KC_RCBR, KC_NO, KC_NO, _______, 
                                    _______, _______, _______, MO(3), _______
),

[_LAYER2] = LAYOUT_reviung41(
    _______, KC_1, KC_2, KC_3, KC_4, KC_5,                  KC_6, KC_7, KC_8, KC_9, KC_0, _______, 
    _______, KC_NO, KC_NO, KC_NO, KC_HOME, KC_END,          KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, 
    _______, KC_NO, KC_CUT, KC_COPY, KC_PSTE, KC_PSCR,      KC_PGUP, KC_PGDN, _______, _______, _______, _______, 
                                    _______, MO(3), _______, _______, _______
    ),

[_LAYER3] = LAYOUT_reviung41(
    QK_BOOT, KC_NO, KC_WREF, KC_WBAK, KC_WFWD, KC_NO,       KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO, KC_NO, 
    KC_NO, RGB_SPI, RGB_SAI, RGB_HUI, RGB_VAI, RGB_TOG,     KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO, KC_NO, 
    KC_NO, RGB_SPD, RGB_SAD, RGB_HUD, RGB_VAD, RGB_MOD,     KC_BTN1, KC_BTN2, KC_NO, KC_NO, KC_NO, KC_NO, 
                                    _______, _______, KC_NO, _______, _______
    ) 

};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LAYER1, _LAYER2, _LAYER3);
}
