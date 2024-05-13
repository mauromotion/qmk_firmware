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

// Home Row Mods aliases //

// Left-hand home row mods
#define GUI_A LGUI_T(KC_A)
#define ALT_R LALT_T(KC_R)
#define CTL_S LCTL_T(KC_S)
#define SFT_TEE LSFT_T(KC_T)

// Right-hand home row mods
#define SFT_N RSFT_T(KC_N)
#define CTL_E RCTL_T(KC_E)
#define ALT_I LALT_T(KC_I)
#define GUI_O RGUI_T(KC_O)
#define SFT_MINS RSFT_T(KC_MINS)
#define CTL_EQL RCTL_T(KC_EQL)

// i3wm aliases
#define WS_1 LGUI(KC_1)
#define WS_2 LGUI(KC_2)
#define WS_3 LGUI(KC_3)
#define WS_4 LGUI(KC_4)
#define WS_5 LGUI(KC_5)
#define WS_6 LGUI(KC_6)
#define WS_7 LGUI(KC_7)
#define WS_8 LGUI(KC_8)
#define I3_LCK LGUI(KC_9)
#define I3_PWR LGUI(KC_0)
#define WS_TAB LGUI(KC_TAB)
#define I3_ROFI LGUI(KC_SPC)
#define I3_TERM LGUI(KC_ENT)

// General aliases
#define CTL_TAB LCTL_T(KC_TAB)
#define SFT_DEL LSFT_T(KC_DEL)
#define ALT_DEL LALT_T(KC_DEL)
#define GUI_ESC LGUI_T(KC_ESC)
#define LW_TAB LT(1,KC_TAB)
#define SYM_ENT LT(4,KC_ENT)
#define RA_BSPC LT(2,KC_BSPC)
#define PIPE RSFT(KC_NUBS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_split_3x6_3( // Default Colemak-DH
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     KC_ESC,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                         KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_LSFT, GUI_A,   ALT_R,   CTL_S,   SFT_TEE, KC_G,                         KC_M,    SFT_N,   CTL_E,   ALT_I,   GUI_O,   KC_SCLN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     CTL_TAB, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                         KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_QUOT, TT(05),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         GUI_ESC, LW_TAB,  KC_SPC,     SYM_ENT, RA_BSPC, ALT_DEL
                                      //`--------------------------'  `--------------------------'
    ),

	[1] = LAYOUT_split_3x6_3( // Lower (Navigation)
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     WS_TAB,  XXXXXXX, WS_1,    WS_2,    WS_3,    KC_BTN2,                      _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     SFT_DEL, KC_DEL,  WS_4,    WS_5,    WS_6,    KC_WH_U,                      _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_LCTL, KC_BTN1, WS_7,    WS_8,    I3_LCK,  KC_WH_D,                      _______, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______, _______, I3_ROFI,    KC_SLSH, MO(3),   ALT_DEL
                                      //`--------------------------'  `--------------------------'
    ),

	[2] = LAYOUT_split_3x6_3( // Raise (Numbers)
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     _______, KC_LBRC, KC_1,    KC_2,    KC_3,    KC_RBRC,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_LSFT, KC_0,    KC_4,    KC_5,    KC_6,    KC_PLUS,                      _______, SFT_MINS, CTL_EQL, KC_LALT, KC_RGUI, KC_AT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_LCTL, KC_PIPE,  KC_7,    KC_8,    KC_9,    KC_NUBS,                     _______, KC_UNDS,  KC_PLUS, _______, KC_QUES, CW_TOGG,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         GUI_ESC, MO(3),   UK_UNDS,    KC_ENT,  _______, KC_LALT
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

	[4] = LAYOUT_split_3x6_3( // Symbols
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     _______, KC_LCBR, KC_EXLM, KC_AT,   UK_PND,  KC_RCBR,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     _______, KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_EQL,                       KC_LT,   KC_LPRN, KC_LCBR, KC_LBRC, _______, KC_AT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     _______, UK_GRV,  KC_AMPR, KC_ASTR, UK_HASH, PIPE,                         KC_GT,   KC_RPRN, KC_RCBR, KC_RBRC, _______, KC_NUBS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         KC_LPRN, KC_RPRN, KC_MINS,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
    ),

	[5] = LAYOUT_split_3x6_3( // Gaming (FPS based on DayZ)
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_F12,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_F1,   KC_PGDN, KC_PGUP, KC_L,    KC_SCLN, KC_PIPE,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         KC_LALT, KC_C,    KC_SPC,     KC_PENT, KC_X,    KC_UP
                                      //`--------------------------'  `--------------------------'
    ),

};

// Macros //

enum custom_keycodes {
  COPY_MACRO = SAFE_RANGE,
  CUT_MACRO = SAFE_RANGE + 1,
  PST_MACRO = SAFE_RANGE + 2
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case COPY_MACRO:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL("c"));
      }
      break;
    case CUT_MACRO:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL("x"));
      }
      break;
    case PST_MACRO:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL("v"));
      }
      break;
  }
  return true;
};

// Combos //
const uint16_t PROGMEM esc_combo[] = {SFT_N, CTL_E, COMBO_END};
const uint16_t PROGMEM del_combo[] = {CTL_S, SFT_TEE, COMBO_END};
const uint16_t PROGMEM cw_combo[] = {KC_D, KC_H, COMBO_END};
const uint16_t PROGMEM col_combo[] = {KC_H, KC_COMM, COMBO_END};
const uint16_t PROGMEM copy_combo[] = {KC_Z, KC_C, COMBO_END};
const uint16_t PROGMEM cut_combo[] = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM paste_combo[] = {KC_Z, KC_D, COMBO_END};

combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(del_combo, KC_DEL),
    COMBO(cw_combo, CW_TOGG),
    COMBO(col_combo, KC_COLN),
    COMBO(copy_combo, COPY_MACRO),
    COMBO(cut_combo, CUT_MACRO),
    COMBO(paste_combo, PST_MACRO),
};
// End of Combos //

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
