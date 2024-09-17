/* Copyright 2023 Brian Low
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

enum sofle_layers {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT(
    QK_GESC,  KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                                 KC_6,     KC_7,     KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                                 KC_Y,     KC_U,     KC_I,    KC_O,    KC_P,    KC_BSLS,
    KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                                 KC_H,     KC_J,     KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,       KC_MUTE,    KC_MPLY,      KC_N,     KC_M,     KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
                      KC_LGUI, KC_LALT, KC_LBRC, MO(_LOWER), KC_LSFT,    KC_SPC, MO(_RAISE),  KC_RBRC,  KC_HOME, KC_END
),
[_LOWER] = LAYOUT(
    KC_TILD, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, KC_DEL,
    _______, _______, _______, _______, _______, _______,                   _______, _______, KC_INS,  _______, KC_PSCR, _______,
    _______, _______, _______, _______, KC_UNDS, KC_MINS,                   _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, KC_EQL,  KC_PLUS, _______,    _______, _______, _______, _______, _______, _______, _______,
                      _______, _______, _______, _______, _______,    _______, _______,  _______,  _______, _______
),
[_RAISE] = LAYOUT(
    KC_GRV,  _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, KC_DEL,
    _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
    _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,                       KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                      _______, _______, _______, _______, _______,    _______, _______,  _______,  _______, _______
),
[_ADJUST] = LAYOUT(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                      _______, _______, _______,  _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______,
                      _______, _______, _______, _______, _______,    _______, _______,  _______,  _______, _______
)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
};
#endif
