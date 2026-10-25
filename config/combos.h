#include "40.h"
#include "keys_fr.h"
#include "layers.h"

#pragma once

/ {
  combos
  {
    compatible = "zmk,combos";

    #define COMBO(NAME, BINDINGS, KEYPOS, TIMEOUT, LAYERS) \
    combo_##NAME                                         \
    {                                                    \
      timeout-ms = <TIMEOUT>;                            \
      bindings = <BINDINGS>;                             \
      key-positions = <KEYPOS>;                          \
      layers = <LAYERS>;                                 \
    };

    // Thumb cluster
    COMBO(combo_space, &space_under, LH0 LH1, 1000, STD_LAYERS)
    COMBO(combo_enter, &kp ENTER, RH0 RH1, 1000, ALL_LAYERS)
    COMBO(combo_fun, &mo L_FUN, RH2 RH3, 1000, ALL_LAYERS)
    COMBO(combo_management, &mo L_MGT, LH3 RH3, 40, ALL_LAYERS)

    // Common keys
    COMBO(combo_left_parenthesis, &kp FR_LEFT_PARENTHESIS, RM1 RM2, 30, STD_LAYERS)
    COMBO(combo_right_parenthesis, &kp FR_RIGHT_PARENTHESIS, RM2 RM3, 30, STD_LAYERS)
    COMBO(combo_left_bracket, &kp FR_LEFT_BRACKET, RB1 RB2, 30, STD_LAYERS)
    COMBO(combo_right_bracket, &kp FR_RIGHT_BRACKET, RB2 RB3, 30, STD_LAYERS)
    COMBO(combo_left_brace, &kp FR_LEFT_BRACE, RT1 RT2, 30, STD_LAYERS)
    COMBO(combo_right_brace, &kp FR_RIGHT_BRACE, RT2 RT3, 30, STD_LAYERS)

    COMBO(combo_minus, &kp FR_MINUS, RM1 RT1, 40, STD_LAYERS)
    COMBO(combo_under, &kp FR_UNDER, RM1 RB1, 40, STD_LAYERS)

    COMBO(combo_double_quotes, &kp FR_DOUBLE_QUOTES, RT3 RT4, 50, STD_LAYERS)

    // FR specific stuff
    COMBO(combo_e_acute, &kp FR_E_ACUTE, RM2 RT2, 40, STD_LAYERS)
    COMBO(combo_e_grave, &kp FR_E_GRAVE, RM2 RB2, 40, STD_LAYERS)
    COMBO(combo_a_grave, &kp FR_A_GRAVE, LM4 LB4, 40, STD_LAYERS)
    COMBO(combo_u_grave, &kp FR_U_GRAVE, RT2 RM3, 40, STD_LAYERS)
    COMBO(combo_c_cedilla, &kp FR_C_CEDILLA, LM2 LB2, 40, STD_LAYERS)

    COMBO(combo_game_1, &kp LALT, LH2 LH3, 40, L_GAM)
  };
};