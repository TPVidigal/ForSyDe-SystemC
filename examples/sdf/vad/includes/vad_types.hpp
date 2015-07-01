/**********************************************************************
    * vad_types.hpp -- type definitions                               *
    *                                                                 *
    * Author:  Hosein Attarzadeh (shan2@kth.se)                       *
    *          adapted from KisTA: https://github.com/nandohca/kista  *
    *                                                                 *
    * Purpose: Definition of types used in the model                  *
    *                                                                 *
    * Usage:   The VAD example                                        *
    *                                                                 *
    * License: BSD3                                                   *
    *******************************************************************/

#ifndef VADTYPES_HPP
#define VADTYPES_HPP

#include <forsyde.hpp>
#include <array>

template<typename ...T>
using tuple_of_vectors = std::tuple<std::vector<T>...>;

typedef std::array<short,9> r_t;
typedef std::array<short,9> L_av_t;
typedef std::array<short,4> rc_t;
typedef std::tuple<std::array<short,9> , short> rav1_t;

#endif