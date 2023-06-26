#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// Row 1
#define CM_GRV  GRAVE   // `
#define CM_N1   N1      // 1
#define CM_N2   N2      // 2
#define CM_N3   N3      // 3
#define CM_N4   N4      // 4
#define CM_N5   N5      // 5
#define CM_N6   N6      // 6
#define CM_N7   N7      // 7
#define CM_N8   N8      // 8
#define CM_N9   N9      // 9
#define CM_N0   N0      // 0
#define CM_MINS MINUS   // -
#define CM_EQL  EQUAL   // =

// Row 2
#define CM_Q    Q       // Q
#define CM_W    W       // W
#define CM_F    E       // F
#define CM_P    R       // P
#define CM_G    T       // G
#define CM_J    Y       // J
#define CM_L    U       // L
#define CM_U    I       // U
#define CM_Y    O       // Y
#define CM_SCLN P       // ;

#define CM_LBRC LBKT    // [
#define CM_RBRC RBKT    // ]
#define CM_BSLS BSLH    // (backslash)

// Row 3
#define CM_A    A       // A
#define CM_R    S       // R
#define CM_S    D       // S
#define CM_T    F       // T
#define CM_D    G       // D
#define CM_H    H       // H
#define CM_N    J       // N
#define CM_E    K       // E
#define CM_I    L       // I
#define CM_O    SEMI    // O
#define CM_QUOT SQT     // '

// Row 4
#define CM_Z    Z       // Z
#define CM_X    X       // X
#define CM_C    C       // C
#define CM_V    V       // V
#define CM_B    B       // B
#define CM_K    N       // K
#define CM_M    M       // M
#define CM_COMM COMMA   // ,
#define CM_DOT  DOT     // .
#define CM_SLSH SLASH   // /

//Row 1
#define CM_TILD S(CM_GRV)  // ~
#define CM_EXLM S(CM_N1)   // !
#define CM_AT   S(CM_N2)   // @
#define CM_HASH S(CM_N3)   // #
#define CM_DLR  S(CM_N4)   // $
#define CM_PERC S(CM_N5)   // %
#define CM_CIRC S(CM_N6)   // ^
#define CM_AMPR S(CM_N7)   // &
#define CM_ASTR S(CM_N8)   // *
#define CM_LPRN S(CM_N9)   // (
#define CM_RPRN S(CM_N0)   // )
#define CM_UNDS S(CM_MINS) // _
#define CM_PLUS S(CM_EQL)  // +
#define CM_COLN LS(CM_SCLN) // :
#define CM_LCBR S(CM_LBRC) // {
#define CM_RCBR S(CM_RBRC) // }
#define CM_PIPE S(CM_BSLS) // |
#define CM_DQUO S(CM_QUOT) // "
#define CM_LABK S(CM_COMM) // <
#define CM_RABK S(CM_DOT)  // >
#define CM_QUES S(CM_SLSH) // ?

