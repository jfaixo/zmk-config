#pragma once

/* French letters */

// ZMK_UNICODE_PAIR(fr_ae,             N0, N0, E, N6,   N0, N0, C, N6)  // æ/Æ
// ZMK_UNICODE_PAIR(fr_oe,             N0, N1, N5, N3,  N0, N1, N5, N2) // œ/Œ
// ZMK_UNICODE_PAIR(fr_a_grave,        N0, N0, E, N0,   N0, N0, C, N0)  // à/À
// ZMK_UNICODE_PAIR(fr_a_circumflex,   N0, N0, E, N2,   N0, N0, C, N2)  // â/Â
// ZMK_UNICODE_PAIR(fr_c_cedilla,      N0, N0, E, N7,   N0, N0, C, N7)  // ç/Ç
// ZMK_UNICODE_PAIR(fr_e_grave,        N0, N0, E, N8,   N0, N0, C, N8)  // è/È
// ZMK_UNICODE_PAIR(fr_e_acute,        N0, N0, E, N9,   N0, N0, C, N9)  // é/É
// ZMK_UNICODE_PAIR(fr_e_circumflex,   N0, N0, E, A,    N0, N0, C, A)   // ê/Ê
// ZMK_UNICODE_PAIR(fr_e_diaeresis,    N0, N0, E, B,    N0, N0, C, B)   // ë/Ë
// ZMK_UNICODE_PAIR(fr_i_circumflex,   N0, N0, E, E,    N0, N0, C, E)   // î/Î
// ZMK_UNICODE_PAIR(fr_i_diaeresis,    N0, N0, E, F,    N0, N0, C, F)   // ï/Ï
// ZMK_UNICODE_PAIR(fr_o_circumflex,   N0, N0, F, N4,   N0, N0, D, N4)  // ô/Ô
// ZMK_UNICODE_PAIR(fr_u_grave,        N0, N0, F, N9,   N0, N0, D, N9)  // ù/Ù
// ZMK_UNICODE_PAIR(fr_u_circumflex,   N0, N0, F, B,    N0, N0, D, B)   // û/Û
// ZMK_UNICODE_PAIR(fr_u_diaeresis,    N0, N0, F, C,    N0, N0, D, C)   // ü/Ü
// ZMK_UNICODE_PAIR(fr_y_diaeresis,    N0, N0, F, F,    N0, N1, N7, N8) // ÿ/Ÿ

#define CUSTOM_KEY(NAME, LOWER, UPPER)                                                             \
    / {                                                                                            \
        behaviors {                                                                                \
          NAME: NAME {                                                                               \
            compatible = "zmk,behavior-mod-morph";                                             \
            #binding-cells = <0>;                                                              \
            bindings = <&kp LOWER>, <&kp UPPER>;                                               \
            mods = <(MOD_LSFT | MOD_RSFT)>;                                                    \
          };                                                                                     \
        };                                                                                         \
    };

#define CUSTOM_AUTOSHIFT(NAME, LOWER, UPPER)                                                       \
    CUSTOM_KEY(custom_key_##NAME, LOWER, UPPER)                                                    \
    / {                                                                                            \
        behaviors {                                                                                \
          auto_shift_##NAME: auto_shift_##NAME {                                                \
              compatible = "zmk,behavior-hold-tap";                                              \
              #binding-cells = <2>;                                                              \
              tapping-term-ms = <200>;                                                           \
              quick-tap-ms = <0>;                                                                \
              hold-trigger-key-positions = <>;                                                   \
              flavor = "tap-preferred";                                                          \
              bindings = <&kp>, <&custom_key_##NAME>;                                      \
          };                                                                                     \
        }; \
    };
