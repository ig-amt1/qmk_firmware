#include QMK_KEYBOARD_H


enum ferris_layers {
  _BASE,
  /*_COLK,*/
  _CONFIG,
  _NUM,
  _FUN,
  _MOUSE,
  _NAV,
  _SYM,
  _EXT,
  _BF,
   _VAVA,
   _VAVA2,
  _WEAP,
  _WEAP2,
  _ACT
};

enum custom_keycodes {
    CEDILHA = SAFE_RANGE,
    ASPAS,             
    AO,                 
    CAO,
    EAGD,   
    AAGD,  
    OAGD ,   
    IAGD,
    ACIRC,
    OCIRC,
    ECIRC,
    AVER,
    SS_ATIL,
    OTIL,
    SS_ACIRC,
    COE,
    
};


#define KC_RSPC LT(_SYM, KC_ENT)
#define KC_BSM1 LT(1, KC_BSPC)
#define KC_GUTA GUI_T(KC_TAB)
 #define KC_CLGV CTL_T(KC_GRV)
#define KC_BSPN LT(_NUM, KC_SPC)
#define KC_FESC LT(_EXT, KC_ESC)
#define KC_EESC LT(_FUN, KC_TAB )
#define KC_SESC LSFT_T(KC_ESC)
#define KC_STIL LSFT_T(KC_TILD)
#define KC_SSLS RSFT_T(KC_BSLS)
#define KC_WL C(G(KC_LEFT))
#define KC_WR C(G(KC_RIGHT))
#define KC_WD C(G(KC_D))
#define KC_ENBS LT(_EXT, KC_BSPC)
#define KC_ATAB LALT_T(KC_TAB)
#define KC_AGRV RALT(KC_GRV)
#define KC_TART RALT(KC_TILD)
#define KC_QQST RALT(KC_W)
#define KCQQST LSFT(KC_SLSH)
#define EAGD    RALT(KC_E)
#define AAGD    RALT(KC_A)
#define OAGD    RALT(KC_O)
#define IAGD    RALT(KC_I)
#define UAGD    RALT(KC_U)

#define ZACT   (KC_Z)

/*qwerty*/
#define HM_A (KC_A)
#define HM_S LALT_T(KC_S)
#define HM_D RSFT_T(KC_D)
#define HM_F LCTL_T(KC_F)
#define HM_G RALT_T(KC_G)
#define HMQ (KC_Q) 
#define HMW (KC_W)
#define HMR (KC_R)

#define HM_H LALT_T(KC_H)
#define HM_J RCTL_T(KC_J) 
#define HM_K RSFT_T(KC_K)
#define HM_L RALT_T(KC_L)
#define HMLN RGUI_T(KC_SCLN)

#define HM_E ( KC_E)
#define MT_T (KC_T)
/*colemak*/
#define CL_A LGUI_T(KC_A)
#define CL_R LALT_T(KC_R)
#define CL_S LSFT_T(KC_S)
#define CL_T LCTL_T(KC_T)
#define CL_D RALT_T(KC_D)

#define CL_N RCTL_T(KC_N) 
#define CL_E RSFT_T(KC_E)
#define CL_I RALT_T(KC_I)
#define CL_H LALT_T(KC_H)
#define CL_O RGUI_T(KC_O)

#define CL_F ( KC_F) 
#define MT_G (KC_T)
/* GAME */
#define G_ESC (KC_ESC)
#define G_TAB (KC_TAB)
#define G_SFT (KC_LSFT)
#define G_CTL (KC_LCTL)
#define G_WEP LT(_WEAP,KC_SPC)
#define G_WP2 LT(_WEAP2, KC_ESC)
#define G_VA2 LT(_VAVA2, KC_ESC)


#define G_Q (KC_Q)
#define G_W (KC_W)
#define G_E (KC_E)
#define G_R (KC_R)
#define G_A (KC_A)
#define G_S (KC_S)
#define G_D (KC_D)
#define G_F (KC_F)
#define G_Z (KC_Z)
#define G_X (KC_X)
#define G_C (KC_C)
#define G_V (KC_V)

#define G_1 (KC_1)
#define G_2 (KC_2)
#define G_3 (KC_3)
#define G_4 (KC_4)
#define G_5 (KC_5)

#define GF1 (KC_F1)
#define GF2 (KC_F2)
#define GF3 (KC_F3)
#define GF4 (KC_F4)
#define GF5 (KC_F5)
#define GWM (KC_M)
#define GWT (KC_T)
#define CEDILHA RALT(KC_COMM)




 /* [_COLK] = LAYOUT(
    KC_Q,    KC_W,    CL_F,    KC_P,    MT_G,       KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,
    CL_A,    CL_R,    CL_S,    CL_T,    CL_D,       CL_H,    CL_N,    CL_E,    CL_I,     CL_O,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,       KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                           KC_FESC, KC_BSPN,            KC_RSPC, KC_ENBS
  ),*/
  



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT( /* QWERTY */
    HMQ,   HMW,    HM_E,    HMR,      MT_T,              KC_Y,    KC_U,   KC_I,    KC_O,      KC_P,
    HM_A,  HM_S,   HM_D,    HM_F,      HM_G,              HM_H,    HM_J,  HM_K,    HM_L,      KC_SCLN,
    ZACT, KC_X,    KC_C,    KC_V,      KC_B,              KC_N,    KC_M,  KC_COMM, KC_DOT, KC_NO,
                           KC_EESC, KC_BSPN,            KC_RSPC, KC_ENBS
  ),

  /* [_NUM] = LAYOUT(
    KC_LBRC, KC_LT,    KC_EQL,  KC_GT,   KC_RBRC,      KC_PSLS, KC_ASTR,  KC_MINS, KC_PLUS, KC_UNDS,  
    KC_LCBR, KC_LPRN,  KC_COLN, KC_RPRN, KC_RCBR,      KC_1,    KC_2,    KC_3,      KC_4,     KC_5,
    KC_QUOT, KC_DQUO, KC_CIRC, KC_QUES,   KC_GRV,      KC_6,    KC_7,    KC_8,      KC_9,     KC_0,
                         OSM(MOD_LSFT), TG(_NUM),			 KC_PENT, KC_SPC
  ), */

  [_NUM] = LAYOUT(

  KC_1,       KC_2,     KC_3,    KC_4,    KC_5,           KC_6,    KC_7,    KC_8,      KC_9,     KC_0,
  KC_PSLS, KC_ASTR,  KC_MINS, KC_PLUS, KC_UNDS,           KC_LBRC, KC_LT,    KC_EQL,  KC_GT,   KC_RBRC,
  KC_LCBR, KC_LPRN,  KC_COLN, KC_RPRN, KC_RCBR,           KC_QUOT, KC_DQUO, KC_CIRC, KC_QUES,   KC_NO,
                         OSM(MOD_LSFT), KC_TRNS,		    	OSM(MOD_LSFT), KC_PENT
  ),



  [_FUN] = LAYOUT( /* [> LOWER <] */

 // KC_F1, KC_F2, KC_F3,  KC_F4,  KC_F5,                                        KC_F6, KC_F7,  KC_F8,KC_F9,  KC_F10,  
 // OSM(MOD_LGUI),OSM(MOD_LALT), OSM(MOD_LSFT), OSM(MOD_LCTL),OSM(MOD_RALT),    KC_F11,  KC_F12,KC_MENU,  KC_MUTE, KC_BSPC,
 // KC_TAB,KC_VOLD,KC_VOLU, KC_TRNS, C(KC_A),                                 KC_F11,  KC_F12,  KC_MENU,  KC_MUTE,  RESET,   
  //                              KC_TRNS, QK_BOOT,        KC_MPRV,  KC_MNXT   
 

 KC_F1, KC_F2, KC_F3,  KC_F4,  KC_F5,                                        AVER, AAGD,   OAGD,   EAGD,    IAGD,  
 KC_F6, KC_F7,  KC_F8,KC_F9,  KC_F10,                                        CAO,  SS_ACIRC,  OCIRC,  ECIRC, UAGD ,
 KC_F11,  KC_F12,KC_MENU,  KC_MUTE, C(KC_A),                                 AO,   SS_ATIL,   OTIL, COE, KC_NO,   
                                KC_TRNS,KC_TRNS,        CEDILHA, KC_BSPC  

 ),


   
  [_SYM] = LAYOUT(
    KC_QUOT, KC_DQUO, KC_CIRC, KC_QUES, KC_GRV,   /**/ KC_TRNS,        EAGD,      CAO,      AO, CEDILHA,
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,  /**/ KC_LCBR, KC_LPRN,  KC_COLN, KC_RPRN, KC_RCBR,
    KC_BSLS, KC_TILD, KC_PIPE, KC_SCLN, KC_AMPR,  /**/ KC_SLSH, KC_ASTR,  KC_UNDS, KC_PLUS, KC_NO,
                              MO(_FUN),      CAO,     _______, _______

  ),

  [_EXT] = LAYOUT( /* COLEMAK */
    KC_ESC, KC_WL,    KC_WD,  KC_WR, KC_TRNS,                                  KC_VOLU  ,KC_VOLU, KC_UP,KC_VOLD,KC_CAPS,
    G(KC_LEFT),G(KC_DOWN),G(KC_UP), G(KC_RIGHT),KC_MUTE,                       KC_VOLD, KC_LEFT, KC_DOWN,KC_RIGHT,KC_DEL,
    KC_PSCR ,C(KC_Z), C(KC_X),KC_TRNS,   KC_TRNS,                             KC_ENT,KC_BSPC , CEDILHA,KC_PGUP,KC_NO,
                               KC_TRNS,   KC_TRNS,                             KC_ENT, MO(_FUN)
                    
  ),


[_ACT] = LAYOUT(
    KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,   /**/AVER, AAGD,   OAGD,   EAGD,    IAGD,
    KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,  /**/ CAO,  SS_ACIRC,  OCIRC,  ECIRC, UAGD ,
    KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,  /**/ AO,   SS_ATIL,   OTIL, COE, CEDILHA,
                             KC_TRNS,KC_TRNS,       KC_TRNS,KC_TRNS
),

/*
  [_NAV] = LAYOUT( 
    KC_ESC,  KC_WL,    KC_WD,  KC_WR,  KC_ATAB,         KC_BTN1,  KC_MS_U,  KC_BTN2, KC_BSPC,
    KC_TAB,  KC_WFWD,  KC_WSTP, KC_WREF,KC_LGUI,        KC_WH_D, KC_MS_L,  KC_MS_D,  KC_MS_R, XXXXXXX,
    KC_LCTL, KC_PSCR,  KC_COPY, KC_UNDO, KC_CUT,        KC_WBAK, KC_LEFT, KC_UP, KC_DOWN,    KC_RIGHT, 
                          OSM(MOD_LSFT), KC_DEL,        KC_LGUI, _______
  ),
  */

[_BF] = LAYOUT_split_3x5_2( /* [> game <] */
   G_TAB, G_Q, G_W, G_E, G_R,             KC_VOLU,KC_TRNS,KC_TRNS,KC_TRNS,TG(_BF),
   G_SFT, G_A, G_S, G_D, G_F,             KC_VOLD,KC_TRNS,KC_TRNS,KC_TRNS,KC_LGUI,
   G_CTL, G_Z, G_X, G_C, KC_B,             KC_ESC,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                  G_WP2,G_WEP,            _______, _______
  ),
[_WEAP] = LAYOUT_split_3x5_2( /* [> armas <] */
    G_1, G_2, G_3,G_4, G_5,      KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,TG(_BF),
    G_SFT,KC_I,GWT,GWM, KC_B,    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
    G_CTL,KC_M,G_F,KC_T,KC_G,    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
            _______, _______,    _______, _______
  ),
[_WEAP2] = LAYOUT_split_3x5_2( /* [> armas <] */
    GF1,   GF2, GF3, GF4,GF5,    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,TG(_BF),
    G_SFT,KC_I,GWT,GWM, KC_B,    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,TG(_VAVA),
    G_CTL,KC_M,G_F,KC_T,KC_G,    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
           KC_TRNS, KC_TRNS,     KC_TRNS,KC_TRNS
  ), 

[_MOUSE] = LAYOUT_split_3x5_2( /* [> armas <] */
    TG(_MOUSE), KC_MYCM, KC_CALC,   KC_WL,     KC_WR,           KC_WH_U, KC_BTN1,  KC_MS_U,  KC_BTN2, KC_BSPC,
    TG(_NAV),   TG(_NUM),TG(_BF), KC_WD,   KC_BRIU,             KC_WH_D, KC_MS_L,  KC_MS_D,  KC_MS_R, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, KC_BRID,           KC_WBAK, KC_WFWD,  KC_WSTP,  KC_WREF, XXXXXXX,
                                  DF(_BASE), _______,           _______, _______
  ),        

[_VAVA] = LAYOUT_split_3x5_2( /* [> game <] */
   G_TAB, G_Q, G_W, G_E, G_R,             KC_VOLU,KC_TRNS,KC_TRNS,KC_TRNS,TG(_VAVA),
   G_SFT, G_A, G_S, G_D, G_F,             KC_VOLD,KC_TRNS,KC_TRNS,KC_TRNS,KC_LGUI,
   G_CTL, G_Z, G_X, G_C, KC_B,             KC_CAPS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                  G_VA2,KC_SPC,            _______, _______
  ),

[_VAVA2] = LAYOUT_split_3x5_2( /* [> armas <] */
    GF1,   GWT, GWM,G_4, KC_G,    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,TG(_BF),
    G_SFT,KC_I,GWT,GWM, KC_G,    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,TG(_VAVA),
    G_CTL,KC_M,G_F,KC_T,KC_G,    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
           KC_TRNS, KC_TRNS,     KC_TRNS,KC_TRNS
  ), 
};



#ifdef COMBO_ENABLE
enum combos {
COMBO_1,
COMBO_2,
COMBO_3,
COMBO_4,
COMBO_5,
COMBO_6,
COMBO_7,
COMBO_8,
COMBO_9,
COMBO_0,
COMBO_TILD,
COMBO_QQST,
COMBO_LCBR,
COMBO_RCBR,
COMBO_TAB,
COMBO_NUBS,
COMBO_CAPS,
COMBO_ENT,
COMBO_MINS,
COMBO_EQL,
COMBO_TIL,
COMBO_NUHS,
COMBO_ESC,
COMBO_GRV,
COMBO_BSPC,
COMBO_CLOSE,
COMBO_CLOSE1,
COMBO_RESET,
COMBO_FUN,
COMBO_MOUSE,
COMBO_BF,
COMBO_VAVA,
COMBO_LOCK,
COMBO_LGUI,
COMBO_RGUI,
};


const uint16_t PROGMEM combo_rgui[] = { KC_DOT, KC_SLSH, COMBO_END};
const uint16_t PROGMEM combo_lgui[] = { ZACT, KC_X, COMBO_END};
const uint16_t PROGMEM combo_lock[] = { KC_VOLU, KC_UP,KC_VOLD, COMBO_END};
const uint16_t PROGMEM combo_mouse[] = { KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo_bf[] = {HM_A, HM_F,KC_BSPN,COMBO_END};
const uint16_t PROGMEM combo_vava[] = {HM_A, HM_F,KC_EESC, COMBO_END};
const uint16_t PROGMEM combo_fun[] = { HMQ,HMW,HM_E,KC_R,KC_BSPN, COMBO_END};
const uint16_t PROGMEM combo_1[] = {KC_Q, HM_A, COMBO_END};
const uint16_t PROGMEM combo_2[] = {KC_W, HM_S, COMBO_END};
const uint16_t PROGMEM combo_3[] = {HM_E, HM_D, COMBO_END};
const uint16_t PROGMEM combo_4[] = {HMR, HM_F, COMBO_END};
const uint16_t PROGMEM combo_5[] = {MT_T, HM_G, COMBO_END};
const uint16_t PROGMEM combo_6[] = {KC_Y, HM_H, COMBO_END};
const uint16_t PROGMEM combo_7[] = {KC_U, HM_J, COMBO_END};
const uint16_t PROGMEM combo_8[] = {KC_I, HM_K, COMBO_END};
const uint16_t PROGMEM combo_9[] = {KC_O, HM_L, COMBO_END};
const uint16_t PROGMEM combo_0[] = {KC_P, HMLN, COMBO_END};
const uint16_t PROGMEM combo_reset[] = {KC_Q, HM_A, ZACT,COMBO_END};
const uint16_t PROGMEM combo_tab[] = {HMW,HM_E, COMBO_END};
const uint16_t PROGMEM combo_rcbr[] = {HMR, MT_T, COMBO_END};
const uint16_t PROGMEM combo_lcbr[] = {HM_F, HM_G, COMBO_END};
const uint16_t PROGMEM combo_qqst[] = {KC_M,  KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_nubs[] = {HM_A, KC_Z, COMBO_END};
const uint16_t PROGMEM combo_caps[] = { KC_X, KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo_ent[] = { KC_SLSH, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo_mins[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_eql[] = {KC_COMM, KC_DOT,  COMBO_END};
const uint16_t PROGMEM combo_til[] = {HM_H, HM_J, COMBO_END};
const uint16_t PROGMEM combo_nuhs[] = {HM_L, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_esc[] = {HM_S, HM_D, HM_F, COMBO_END};
const uint16_t PROGMEM combo_grv[] = {HM_S, KC_X, COMBO_END};
const uint16_t PROGMEM combo_bspc[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM combo_close[] = {HMQ,HMW,HM_E,HMR, COMBO_END};
const uint16_t PROGMEM combo_close1[] = {HMW,HM_E,HMR, COMBO_END};




combo_t key_combos[COMBO_COUNT] = {
    
    [COMBO_RGUI] = COMBO(combo_rgui, KC_RGUI),
    [COMBO_LGUI] = COMBO(combo_lgui, KC_LGUI),
    [COMBO_LOCK] = COMBO(combo_lock, G(KC_L)),
    [COMBO_FUN] = COMBO(combo_fun, MO(_FUN)),
    [COMBO_BF] = COMBO(combo_bf, TG(_BF)),
    [COMBO_VAVA] = COMBO(combo_vava, TG(_VAVA)),
    [COMBO_MOUSE] = COMBO(combo_mouse, MO(_MOUSE)),
    [COMBO_1] = COMBO(combo_1, KC_1),
    [COMBO_2] = COMBO(combo_2, KC_2),
    [COMBO_3] = COMBO(combo_3, KC_3),
    [COMBO_4] = COMBO(combo_4, KC_4),
    [COMBO_5] = COMBO(combo_5, KC_5),
    [COMBO_6] = COMBO(combo_6, KC_6),
    [COMBO_7] = COMBO(combo_7, KC_7),
    [COMBO_8] = COMBO(combo_8, KC_8),
    [COMBO_9] = COMBO(combo_9, KC_9),
    [COMBO_0] = COMBO(combo_0, KC_0),
    [COMBO_LCBR] = COMBO(combo_lcbr, KC_QUOT),
    [COMBO_RCBR] = COMBO(combo_rcbr,S(KC_GRV)),
    [COMBO_TAB] = COMBO(combo_tab, KC_TAB),
    [COMBO_NUBS] = COMBO(combo_nubs, KC_NUBS),
    [COMBO_CAPS] = COMBO(combo_caps, CAPSWRD),
    [COMBO_ENT] = COMBO(combo_ent, KC_ENT),
    [COMBO_MINS] = COMBO(combo_mins, KC_MINS),
    [COMBO_EQL] = COMBO(combo_eql, KC_EQL),
    [COMBO_TIL] = COMBO(combo_til, KC_CIRC),
    [COMBO_NUHS] = COMBO(combo_nuhs, KC_NUHS),
    [COMBO_ESC] = COMBO(combo_esc, KC_ESC),
    [COMBO_GRV] = COMBO(combo_grv, S(KC_GRV)),
    [COMBO_BSPC] = COMBO(combo_bspc, KC_BSPC),
    [COMBO_CLOSE] = COMBO(combo_close, A(KC_F4)),
    [COMBO_CLOSE1] = COMBO(combo_close1, C(KC_W)),
    [COMBO_QQST] = COMBO(combo_qqst, KCQQST),
    [COMBO_RESET] = COMBO(combo_reset, RESET),
};
#endif


bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    

    switch (keycode) {
        case SS_ACIRC:
            if (record->event.pressed) {
                SEND_STRING("^a");
            }
            break;
        //    return false;

        case OCIRC:
            if (record->event.pressed) {
                SEND_STRING("^o");
            }
           break;
         //  return false;

        case ECIRC:
            if (record->event.pressed) {
                SEND_STRING("^e");
            }
            break;
          //  return false;

        case SS_ATIL:
            if (record->event.pressed) {
                SEND_STRING("~a");
            }
           break;
         //   return false;   

        case OTIL:
            if (record->event.pressed) {
                SEND_STRING("~o");
            }
           break;
         //  return false; 
        
        case CAO:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT(",")"~ao");
            }
           break;
         // return false;

        case AO:
            if (record->event.pressed) {
                SEND_STRING("~ao");
            }
           break;
          // return false; 

        case COE:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT(",")"~oe");
            }
            break;
          // return false;  
            

          case AVER:
            if (record->event.pressed) {
                SEND_STRING("`a");
            }
           break;
           //return false;        
    }

    return true;
}
