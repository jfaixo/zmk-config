#include "36.h"
#include "keys_fr.h"
#include "layers.h"

#pragma once

/ {
  macros {
    gui_pre: gui_pre {
      compatible = "zmk,behavior-macro-one-param";
      #binding-cells = <1>;
      wait-ms = <0>;
      tap-ms = <0>;
      bindings
        = <&macro_press &kp LGUI>
        , <&macro_param_1to1>
        , <&macro_tap &kp MACRO_PLACEHOLDER>
        , <&macro_release &kp LGUI>
        ;
    };
  };
};