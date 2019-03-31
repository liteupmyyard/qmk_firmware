/* Copyright 2018 jrfhoutx
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef MO116B_H
#define MO116B_H

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array
#define LAYOUT_M0116( \
                                              K006,                                                                              \
    K100,  K101,  K102,  K103,  K104,  K105,  K106, K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115,  K116,  K117,  \
    K200,  K201,  K202,  K203,  K204,  K205,  K206, K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  K215,  K216,  K217,  \
    K300,  K301,  K302,  K303,  K304,  K305,  K306, K307,  K308,  K309,  K310,  K311,                K314,  K315,  K316,  K317,  \
    K400,         K402,  K403,  K404,  K405,  K406, K407,  K408,  K409,  K410,  K411,  K412,         K414,  K415,  K416,  K417,  \
    K500,  K501,  K502,  K503,                K506,               K509,  K510,  K511,  K512,  K513,  K514,         K516          \
) { \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K006, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { K100,  K101,  K102,  K103,  K104,  K105,  K106, K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115,  K116,  K117  }, \
    { K200,  K201,  K202,  K203,  K204,  K205,  K206, K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  K215,  K216,  K217  }, \
    { K300,  K301,  K302,  K303,  K304,  K305,  K306, K307,  K308,  K309,  K310,  K311,  KC_NO, KC_NO, K314,  K315,  K316,  K317  }, \
    { K400,  KC_NO, K402,  K403,  K404,  K405,  K406, K407,  K408,  K409,  K410,  K411,  K412,  KC_NO, K414,  K415,  K416,  K417  }, \
    { K500,  K501,  K502,  K503,  KC_NO, KC_NO, K506, KC_NO, KC_NO, K509,  K510,  K511,  K512,  K513,  K514,  KC_NO, K516,  KC_NO }, \
}

#define LAYOUT_M0118( \
                                               K006,                                                                              \
     K100,  K101,  K102,  K103,  K104,  K105,  K106, K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115,  K116,  K117,  \
     K200,  K201,  K202,  K203,  K204,  K205,  K206, K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  K215,  K216,  K217,  \
     K300,  K301,  K302,  K303,  K304,  K305,  K306, K307,  K308,  K309,  K310,  K311,  K312,         K314,  K315,  K316,  K317,  \
     K400,  K401,  K402,  K403,  K404,  K405,  K406, K407,  K408,  K409,  K410,  K411,  K412,  K413,  K414,  K415,  K416,  K417,  \
     K500,  K501,  K502,                       K506,                      K510,  K511,  K512,  K513,  K514,         K516          \
) { \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K006, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { K100,  K101,  K102,  K103,  K104,  K105,  K106, K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115,  K116,  K117  }, \
    { K200,  K201,  K202,  K203,  K204,  K205,  K206, K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  K215,  K216,  K217  }, \
    { K300,  K301,  K302,  K303,  K304,  K305,  K306, K307,  K308,  K309,  K310,  K311,  K312,  KC_NO, K314,  K315,  K316,  K317  }, \
    { K400,  K401,  K402,  K403,  K404,  K405,  K406, K407,  K408,  K409,  K410,  K411,  K412,  K413,  K414,  K415,  K416,  K417  }, \
    { K500,  K501,  K502,  KC_NO, KC_NO, KC_NO, K506, KC_NO, KC_NO, KC_NO, K510,  K511,  K512,  K513,  K514,  KC_NO, K516,  KC_NO }, \
}

#endif
