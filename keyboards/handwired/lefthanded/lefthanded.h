#ifndef LEFTHANDED_H
#define LEFTHANDED_H

#include "quantum.h"

#define KEYMAP( \
    K04, K03, K02, K01, K00, \
    K09, K08, K07, K06, K05, \
    K14, K13, K12, K11, K10, \
    K19, K18, K17, K16, K15, \
         K23, K22, K21, K20  \
    ) { \
  {  K00,  K01,  K02,  K03,    K04,    K05,  K06,    K07,    K08,    K09},  \
  {  K10,  K11,  K12,  K13,    K14,    K15,  K16,    K17,    K18,    K19},  \
  {  K20,  K21,  K22,  K23,    KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO}  \
}

#endif