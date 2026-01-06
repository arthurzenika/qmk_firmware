#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _ERGOL,
  _LOWER,
  _RAISE,
  _ADJUST,
};

// Define the mod-tap keys for the home row
#define HOME_A LGUI_T(KC_A)  // A acts as GUI (Cmd/Win) when held
#define HOME_S LALT_T(KC_S)  // S acts as Alt when held
#define HOME_D LSFT_T(KC_D)  // D acts as Shift when held
#define HOME_F LCTL_T(KC_F)  // F acts as Ctrl when held

#define HOME_J RCTL_T(KC_J)  // J acts as Ctrl when held
#define HOME_K RSFT_T(KC_K)  // K acts as Shift when held
#define HOME_L RALT_T(KC_L)  // L acts as Alt when held
#define HOME_SCLN RGUI_T(KC_SCLN)  // ; acts as GUI (Cmd/Win) when held

#define HOME_BSPC LSFT_T(KC_BSPC) // BackSpc thumbs acts as Shift when held


// ergol homerow
//#define NA_SPC  LT(_NAV, KC_SPC)
#define SH_BSPC MT(MOD_LSFT, KC_BSPC)
//#define AL_ENT  LT(_ALT, KC_ENT)

#define LS_A LSFT_T(KC_A)
#define LG_S LGUI_T(KC_S)
#define LA_E LALT_T(KC_E)
#define LC_N LCTL_T(KC_N)
#define RC_R RCTL_T(KC_R)
#define RA_T RALT_T(KC_T)
#define RG_I RGUI_T(KC_I)
#define RS_U RSFT_T(KC_U)

enum my_keycodes {
  MY_ATRE = SAFE_RANGE,
  MY_STAR,
  MY_SWTC,
  MY_RST
};

#define EL_GRV  KC_GRV  // `
#define EL_1    KC_1    // 1
#define EL_2    KC_2    // 2
#define EL_3    KC_3    // 3
#define EL_4    KC_4    // 4
#define EL_5    KC_5    // 5
#define EL_6    KC_6    // 6
#define EL_7    KC_7    // 7
#define EL_8    KC_8    // 8
#define EL_9    KC_9    // 9
#define EL_0    KC_0    // 0
#define EL_SLSH KC_MINS // /
#define EL_EQL  KC_EQL  // =
#define EL_Q    KC_Q    // Q
#define EL_C    KC_W    // C
#define EL_O    KC_E    // O
#define EL_P    KC_R    // P
#define EL_W    KC_T    // W
#define EL_J    KC_Y    // J
#define EL_M    KC_U    // M
#define EL_D    KC_I    // D
#define EL_1DK  KC_O    // ★ (one dead key)
#define EL_Y    KC_P    // Y
#define EL_LBRC KC_LBRC // [
#define EL_RBRC KC_RBRC // ]
#define EL_A    KC_A    // A
#define EL_S    KC_S    // S
#define EL_E    KC_D    // E
#define EL_N    KC_F    // N
#define EL_F    KC_G    // F
#define EL_L    KC_H    // L
#define EL_R    KC_J    // R
#define EL_T    KC_K    // T
#define EL_I    KC_L    // I
#define EL_U    KC_SCLN // U
#define EL_QUOT KC_QUOT // '
#define EL_BSLS KC_BSLS // (backslash)
#define EL_LABK KC_NUBS // <
#define EL_Z    KC_Z    // Z
#define EL_X    KC_X    // X
#define EL_MINS KC_C    // -
#define EL_V    KC_V    // V
#define EL_B    KC_B    // B
#define EL_DOT  KC_N    // .
#define EL_H    KC_M    // H
#define EL_G    KC_COMM // G
#define EL_COMM KC_DOT  // ,
#define EL_K    KC_SLSH // K
#define EL_TILD S(EL_GRV)  // ~
#define EL_EURO S(EL_1)    // €
#define EL_LDAQ S(EL_2)    // «
#define EL_RDAQ S(EL_3)    // »
#define EL_DLR  S(EL_4)    // $
#define EL_PERC S(EL_5)    // %
#define EL_CIRC S(EL_6)    // ^
#define EL_AMPR S(EL_7)    // &
#define EL_ASTR S(EL_8)    // *
#define EL_HASH S(EL_9)    // #
#define EL_AT   S(EL_0)    // @
#define EL_UNDS S(EL_SLSH) // _
#define EL_PLUS S(EL_EQL)  // +
#define EL_EXLM S(EL_1DK)  // !
#define EL_LCBR S(EL_LBRC) // {
#define EL_RCBR S(EL_RBRC) // }
#define EL_DQUO S(EL_QUOT) // "
#define EL_PIPE S(EL_BSLS) // |
#define EL_RABK S(EL_LABK) // >
#define EL_QUES S(EL_MINS) // ?
#define EL_COLN S(EL_DOT)  // :
#define EL_SCLN S(EL_COMM) // ;
#define EL_NNBS S(KC_SPC)  // (narrow non-breaking space)
#define EL_SUB1 ALGR(EL_1)    // ₁
#define EL_SUB2 ALGR(EL_2)    // ₂
#define EL_SUB3 ALGR(EL_3)    // ₃
#define EL_SUB4 ALGR(EL_4)    // ₄
#define EL_SUB5 ALGR(EL_5)    // ₅
#define EL_SUB6 ALGR(EL_6)    // ₆
#define EL_SUB7 ALGR(EL_7)    // ₇
#define EL_SUB8 ALGR(EL_8)    // ₈
#define EL_SUB9 ALGR(EL_9)    // ₉
#define EL_SUB0 ALGR(EL_0)    // ₀
#define EL_LPRN ALGR(EL_S)    // (
#define EL_RPRN ALGR(EL_E)    // )
#define EL_SUP1 S(ALGR(EL_1))    // ¹
#define EL_SUP2 S(ALGR(EL_2))    // ²
#define EL_SUP3 S(ALGR(EL_3))    // ³
#define EL_SUP4 S(ALGR(EL_4))    // ⁴
#define EL_SUP5 S(ALGR(EL_5))    // ⁵
#define EL_SUP6 S(ALGR(EL_6))    // ⁶
#define EL_SUP7 S(ALGR(EL_7))    // ⁷
#define EL_SUP8 S(ALGR(EL_8))    // ⁸
#define EL_SUP9 S(ALGR(EL_9))    // ⁹
#define EL_SUP0 S(ALGR(EL_0))    // ⁰
#define EL_DCIR S(ALGR(EL_Q))    // ^ (dead)
#define EL_LEQL S(ALGR(EL_C))    // ≤
#define EL_GEQL S(ALGR(EL_O))    // ≥
#define EL_CURR S(ALGR(EL_P))    // ¤ (dead)
#define EL_PERM S(ALGR(EL_W))    // ‰
#define EL_RNGA S(ALGR(EL_J))    // ° (dead)
#define EL_MUL  S(ALGR(EL_D))    // ×
#define EL_ACUT S(ALGR(EL_1DK))  // ´ (dead)
#define EL_DGRV S(ALGR(EL_Y))    // ` (dead)
#define EL_CARN S(ALGR(EL_A))    // ˇ (dead)
#define EL_DOTA S(ALGR(EL_N))    // ˙ (dead)
#define EL_NEQL S(ALGR(EL_F))    // ≠
#define EL_DSLS S(ALGR(EL_L))    // / (dead)
#define EL_PLMN S(ALGR(EL_R))    // ±
#define EL_MACR S(ALGR(EL_T))    // ¯ (dead)
#define EL_DIV  S(ALGR(EL_I))    // ÷
#define EL_DACU S(ALGR(EL_U))    // ” (dead)
#define EL_DTIL S(ALGR(EL_Z))    // ~ (dead)
#define EL_DCMM S(ALGR(EL_X))    // , (dead)
#define EL_OGON S(ALGR(EL_MINS)) // ˛ (dead)
#define EL_NOT  S(ALGR(EL_H))    // ¬
#define EL_CEDL S(ALGR(EL_G))    // ¸ (dead)
#define EL_BREV S(ALGR(EL_K))    // ˘ (dead)
#define EL_NBSP S(ALGR(KC_SPC))  // (non-breaking space)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  | Enter|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LOWER|LShift| /BackSP /       \Space \  |Enter |RAISE | AltGR|
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_QWERTY] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  KC_LSFT,  HOME_A, HOME_S,  HOME_D,  HOME_F,  KC_G,                     KC_H,    HOME_J,  HOME_K,  HOME_L,  HOME_SCLN, KC_QUOT,
  KC_LCTL,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,  KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_ENT,
                        KC_LALT, MO(_LOWER), HOME_BSPC, HOME_BSPC, KC_SPC, KC_ENT, MO(_RAISE), KC_ALGR
),


  /* Ergol
    *
    * ,----------------------------------. ,----------------------------------.
    * |   Q  |   C  |   O  |   P  |   W  | |   J  |   M  |   D  | str  |   Y  |
    * |------+------+------+------+------| |------+------+------+------+------|
    * |   A  |   S  |   E  |   N  |   F  | |   L  |   R  |   T  |   I  |   U  |
    * |------+------+------+------+------| |------+------+------+------+------|
    * |   Z  |   X  |   -  |   V  |   B  | |   .  |   H  |   G  |   ,  |   K  |
    * `-------------+--------------------' `----------------------------------'
    *             ,--------------------.    ,--------------------.
    *             | LGUI | BSpc |Space |    |Space |Enter | RGUI |
    *             `--------------------'    `--------------------.
    */

  // Default config uses home row mods. So hold each of the keys on the home
  // row to use ctrl, gui, alt, or shift
  [_ERGOL] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  _______, KC_Q,    KC_C,    KC_O,    KC_P,    KC_W,                        KC_J,   KC_M,     KC_D,   MY_STAR,   KC_Y, _______,
  _______, LS_A, LG_S, LA_E, LC_N,    KC_F,                                 KC_L, RC_R,   RA_T,   RG_I,    RS_U, _______,
  _______, KC_Z, KC_X, KC_MINS, KC_V,    KC_B,  _______, _______,           KC_DOT, KC_H,   KC_G,   KC_COMM, KC_K, _______,
                  _______, MO(_LOWER),  SH_BSPC, HOME_BSPC, KC_SPC, KC_ENT, MO(_RAISE), _______
  ),



// KC_LGUI to readd
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | Tab  |  Home|  Up  |  End |PageUp|                    |  /   |  7   |  8   |   9  |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |CpsLock|Left | Down | Right|PgDown|                    |   -  |  4   |  5   |   6  |   0  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      | Vol- | Mute | Vol+ | Tab  |-------|    |-------|   ,  |  1   |  2   |   3  |   .  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      | LOWER|      | /       /       \      \  |      |RAISE |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_LOWER] = LAYOUT(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  _______,  KC_TAB,   KC_HOME, KC_UP,  KC_END,  KC_PGUP,                  KC_SLSH,   KC_7,   KC_8,   KC_9,  _______,  _______,
  _______, KC_CAPS, KC_LEFT,  KC_DOWN, KC_RGHT, KC_PGDN,                 KC_CIRC, KC_4, KC_5, KC_6, KC_0, _______,
  _______, _______, KC_KB_VOLUME_DOWN, KC_KB_MUTE, KC_KB_VOLUME_UP, KC_TAB, _______, _______, KC_COMM, KC_1, KC_2, KC_3, KC_DOT, _______,
                             _______, _______, _______, _______, _______,  _______, _______, _______
),
/* RAISE / ALTGR (in arsenik/kanata lingo)
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   ^  |   <  |   >  |   $  |   %  |                    |   @  |   &  |   *  |   '  |   `  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  {   |  (   |  )   |  }   |  =   |                    |   \  |   +  |   -  |  /   |   "  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  ~   |  [   |  ]   |  _   | #    |-------|    |-------|   |  |   !  |   ;  |   :  |   ?  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LOWER|     | /       /       \      \   |      |RAISE | RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

// QWERTY VERSION
// [_RAISE] = LAYOUT(
//   _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
//   _______, KC_CIRC,  KC_LT,   KC_GT, KC_DLR, KC_PERC,                        KC_AT,    KC_AMPR,    KC_ASTR,    KC_QUOT,    KC_GRV,    _______,
//   _______,  KC_LCBR, KC_LPRN, KC_RPRN, KC_RCBR,  KC_EQL,                     KC_BSLS, KC_PLUS, KC_MINS, KC_SLSH,   KC_DQUO, _______,
//   _______,   KC_TILD, KC_LBRC, KC_RBRC,  KC_UNDS, KC_HASH,   _______, _______,  KC_PIPE, KC_EXLM, KC_SCLN,  KC_COLN, KC_QUES, _______,
//                              _______, _______, _______,  _______, _______,  _______, _______, _______
// ),
// ERGOL VERSION
[_RAISE] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  _______, EL_CIRC,  EL_LABK,   EL_RABK, EL_DLR, EL_PERC,                        EL_AT,    EL_AMPR,    EL_ASTR,    EL_QUOT,    EL_GRV,    _______,
  _______,  EL_LCBR, EL_LPRN, EL_RPRN, EL_RCBR,  EL_EQL,                     EL_BSLS, EL_PLUS, EL_MINS, EL_SLSH,   EL_DQUO, _______,
  _______,   EL_TILD, EL_LBRC, EL_RBRC,  EL_UNDS, EL_HASH,   _______, _______,  EL_PIPE, EL_EXLM, EL_SCLN,  EL_COLN, EL_QUES, _______,
                             _______, _______, _______,  _______, _______,  _______, _______, _______
),


/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |DT_UP |DT_PRNT|     |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |DT_DOWN|     |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LOWER|      | /Space  /       \Enter \  |      |RAISE | RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
  [_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, DT_UP, DT_PRNT, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, UG_TOGG, UG_HUEU, UG_SATU, UG_VALU,
  XXXXXXX, XXXXXXX, DT_DOWN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, UG_NEXT, UG_HUED, UG_SATD, UG_VALD,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    // set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}

void keyboard_post_init_user(void) {
    if (is_keyboard_master()) {
#if defined(RGBLIGHT_ENABLE)
        rgblight_enable_noeeprom();
#endif
  }
}