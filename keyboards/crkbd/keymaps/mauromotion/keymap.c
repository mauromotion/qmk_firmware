/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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
	[0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_ESC,     KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                           KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT,    KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                           KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        LCTL_T(KC_TAB), LALT_T(KC_Z), KC_X, KC_C, KC_V, KC_B,                       KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_NUBS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                      KC_LGUI, LT(1,KC_TAB), KC_SPC,    KC_ENT,   MO(2),   TG(4)
                                      //`--------------------------'  `--------------------------'
    ),

	[1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
    LGUI(KC_TAB), LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), KC_BTN1, KC_BTN2,         KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_VOLD, KC_VOLU,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    LSFT_T(KC_DEL), LGUI(KC_4), LGUI(KC_5), LGUI(KC_6), LGUI(KC_F), KC_WH_U,    KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_WH_L, KC_WH_R,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_LCTL, LGUI(KC_7), LGUI(KC_8), LGUI(KC_9), LGUI(KC_0), KC_WH_D,           KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_MUTE, KC_MPLY,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         KC_LGUI, _______, LGUI(KC_SPC),LGUI(KC_ENT),MO(3),KC_LALT
                                      //`--------------------------'  `--------------------------'
    ),

	[2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_ESC,   KC_1,   KC_2,   KC_3,    KC_DLR,  KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,  KC_4,   KC_5,   KC_6,    XXXXXXX,  XXXXXXX,                     KC_BSLS, KC_MINS, KC_EQL,  XXXXXXX, XXXXXXX, KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    LCTL_T(KC_TAB), KC_7, KC_8, KC_9,    XXXXXXX,  XXXXXXX,                     XXXXXXX, KC_LCBR, KC_LBRC, KC_RBRC, KC_RCBR, KC_NUBS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_0,   MO(3),    KC_SPC,    KC_ENT,  _______, KC_LALT
                                      //`--------------------------'  `--------------------------'
    ),

	[3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_CAPS, KC_NUM,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______, KC_SPC,     KC_ENT,  _______, KC_LALT
                                      //`--------------------------'  `--------------------------'
    ),

	[4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,                         KC_6,   KC_7,     KC_8,     KC_9,   KC_0,    KC_X,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_TAB,  KC_Q,   KC_W,     KC_E,    KC_R,   KC_T,                         KC_F1,  KC_PGUP,  KC_PGDN,  KC_L,   KC_SCLN, KC_PIPE,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,  KC_A,   KC_S,     KC_D,    KC_F,   KC_G,                         KC_N,   KC_M,     KC_COMM,  KC_DOT, KC_SLSH, KC_F12,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCTL,   KC_C,  KC_SPC,    KC_PENT,  KC_UP,  _______
                                      //`--------------------------'  `--------------------------'
    )
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
