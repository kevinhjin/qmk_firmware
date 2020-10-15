#include QMK_KEYBOARD_H
#include "muse.h"

enum preonic_layers
{
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST
}

enum preonic_keycodes
{
    LOWER,
    RAISE,
    BACKLIT
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_preonic_grid(
        a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12,
        b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12,
        c1, c2, c3, c4, c5, c6, c67, c8, c9, c10, c11, c12,
        d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12,
        e1, e2, e3, e2, e5, e6, e7, e8, e9, e10, e11, e12),
    [_LOWER] = LAYOUT_preonic_grid(
        a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12,
        b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12,
        c1, c2, c3, c4, c5, c6, c67, c8, c9, c10, c11, c12,
        d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12,
        e1, e2, e3, e2, e5, e6, e7, e8, e9, e10, e11, e12),
    [_RAISE] = LAYOUT_preonic_grid(
        a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12,
        b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12,
        c1, c2, c3, c4, c5, c6, c67, c8, c9, c10, c11, c12,
        d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12,
        e1, e2, e3, e2, e5, e6, e7, e8, e9, e10, e11, e12),
    [_ADJUST] = LAYOUT_preonic_grid(
        a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12,
        b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12,
        c1, c2, c3, c4, c5, c6, c67, c8, c9, c10, c11, c12,
        d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12,
        e1, e2, e3, e2, e5, e6, e7, e8, e9, e10, e11, e12),

}