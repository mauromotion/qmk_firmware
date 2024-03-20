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
#include <keymap_uk.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3( // Default
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_LSFT, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G,     KC_H, RSFT_T(KC_J), RCTL_T(KC_K), LALT_T(KC_L), RGUI_T(KC_SCLN), KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     LCTL_T(KC_TAB), KC_Z, KC_X, KC_C, KC_V, KC_B,                              KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, TT(04),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         LGUI_T(KC_ESC), LT(1,KC_TAB), KC_SPC,    LT(5,KC_ENT),   LT(2,KC_BSPC),   LALT_T(KC_DEL)
                                      //`--------------------------'  `--------------------------'
    ),

	[1] = LAYOUT_split_3x6_3( // Lower (Navigation)
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
    LGUI(KC_TAB), XXXXXXX, LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), KC_BTN2,         KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_VOLD, KC_VOLU,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    LSFT_T(KC_DEL), LGUI(KC_0), LGUI(KC_4), LGUI(KC_5), LGUI(KC_6), KC_WH_U,    KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_WH_L, KC_WH_R,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    LCTL_T(KC_TAB), KC_BTN1, LGUI(KC_7), LGUI(KC_8), LGUI(KC_9), KC_WH_D,       KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_MUTE, KC_MPLY,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______, _______, LGUI(KC_SPC),LGUI(KC_ENT),MO(3),LALT_T(KC_DEL)
                                      //`--------------------------'  `--------------------------'
    ),

	[2] = LAYOUT_split_3x6_3( // Raise (Numbers & Symbols)
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_PIPE, KC_LBRC,  KC_1,  KC_2,    KC_3,    KC_RBRC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_0,    KC_4,   KC_5,    KC_6,    KC_EQL,                       KC_BSLS, RSFT_T(KC_MINS), RCTL_T(KC_EQL), LALT_T(KC_PLUS), RGUI_T(KC_GRV), KC_AT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, CW_TOGG, KC_7,   KC_8,    KC_9,    KC_NUBS,                      KC_PIPE, KC_UNDS, KC_COMM, KC_DOT,  XXXXXXX, KC_NUBS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          LGUI_T(KC_ESC),   MO(3),    KC_SPC,    KC_ENT,  _______, KC_LALT
                                      //`--------------------------'  `--------------------------'
    ),

	[3] = LAYOUT_split_3x6_3( // Adjust (Functions & Settings)
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     XXXXXXX, XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F10,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX, XXXXXXX, KC_F4,   KC_F5,   KC_F6,   KC_F11,                       KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX, KC_RCTL, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX, XXXXXXX, KC_F7,   KC_F8,   KC_F9,   KC_F12,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_NUM,  KC_CAPS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______, KC_SPC,     KC_ENT,  _______, KC_LALT
                                      //`--------------------------'  `--------------------------'
    ),

	[4] = LAYOUT_split_3x6_3( // Gaming (FPS based on DayZ)
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,                          KC_6,   KC_7,     KC_8,     KC_9,   KC_0,    KC_F12,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,                          KC_F1,  KC_PGDN,  KC_PGUP,  KC_L,   KC_SCLN, KC_PIPE,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,                          KC_N,   KC_M,     KC_COMM,  KC_DOT, KC_SLSH, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCTL,   KC_C,  KC_SPC,    KC_PENT,  KC_X,  KC_UP
                                      //`--------------------------'  `--------------------------'
    ),

	[5] = LAYOUT_split_3x6_3( // Symbols
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, KC_GRV,  KC_EXLM, KC_AT,  UK_PND,  KC_EQL,                        _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_LBRC,                      _______, KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI, KC_AT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_PIPE, KC_AMPR, KC_ASTR, UK_HASH, KC_NUBS,                      _______, _______, _______, _______, _______, KC_NUBS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         KC_LPRN, KC_RPRN, KC_MINS,    _______,  _______, _______
                                      //`--------------------------'  `--------------------------'
    ),

};

// Combos //
const uint16_t PROGMEM jk_combo[] = {RSFT_T(KC_J), RCTL_T(KC_K), COMBO_END};
const uint16_t PROGMEM rt_combo[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM fg_combo[] = {LSFT_T(KC_F), KC_G, COMBO_END};
const uint16_t PROGMEM vb_combo[] = {KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM yu_combo[] = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM hj_combo[] = {KC_H, RSFT_T(KC_J), COMBO_END};
const uint16_t PROGMEM nm_combo[] = {KC_N, KC_M, COMBO_END};

combo_t key_combos[] = {
    COMBO(jk_combo, KC_ESC),
    COMBO(rt_combo, KC_LPRN),
    COMBO(fg_combo, KC_LBRC),
    COMBO(vb_combo, KC_LCBR),
    COMBO(yu_combo, KC_RPRN),
    COMBO(hj_combo, KC_RBRC),
    COMBO(nm_combo, KC_RCBR)
};
// End of Combos //

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
