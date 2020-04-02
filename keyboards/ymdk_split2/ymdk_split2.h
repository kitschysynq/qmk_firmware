/*
Copyright 2017 Luiz Ribeiro <luizribeiro@gmail.com>

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

#pragma once

#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
    #include <avr/io.h>
    #include <avr/interrupt.h>
#endif
#endif

#define LAYOUT_ortho_6x8( \
    L06,  L16,  L26,  L36,  R06,  R16,  R26,  R36,  \
    L05,  L15,  L25,  L35,  R05,  R15,  R25,  R35,  \
    L04,  L14,  L24,  L34,  R04,  R14,  R24,  R34,  \
    L03,  L13,  L23,  L33,  R03,  R13,  R23,  R33,  \
    L02,  L12,  L22,  L32,  R02,  R12,  R22,  R32,  \
    L01,  L11,  L21,  L31,  R01,  R11,  R21,  R31   \
) \
{ \
  { L06, L05, L04, L03, L02, L01 }, \
  { L16, L15, L14, L13, L12, L11 }, \
  { L26, L25, L24, L23, L22, L21 }, \
  { L36, L35, L34, L33, L32, L31 }, \
  { R06, R05, R04, R03, R02, R01 }, \
  { R16, R15, R14, R13, R12, R11 }, \
  { R26, R25, R24, R23, R22, R21 }, \
  { R36, R35, R34, R33, R32, R31 }  \
}

#define LAYOUT( \
    L01, L02, L03, L04, L05, L06, R01, R02, R03, R04, R05, R06, \
    L11, L12, L13, L14, L15, L16, R11, R12, R13, R14, R15, R16, \
    L21, L22, L23, L24, L25, L26, R21, R22, R23, R24, R25, R26, \
    L31, L32, L33, L34, L35, L36, R31, R32, R33, R34, R35, R36 \
) LAYOUT_ortho_6x8( \
    L06,  L16,  L26,  L36,  R06,  R16,  R26,  R36,  \
    L05,  L15,  L25,  L35,  R05,  R15,  R25,  R35,  \
    L04,  L14,  L24,  L34,  R04,  R14,  R24,  R34,  \
    L03,  L13,  L23,  L33,  R03,  R13,  R23,  R33,  \
    L02,  L12,  L22,  L32,  R02,  R12,  R22,  R32,  \
    L01,  L11,  L21,  L31,  R01,  R11,  R21,  R31   \
)

#define LAYOUT_ortho_4x12 LAYOUT
