#pragma once
#ifndef TWOBYTWO_H
#define TWOBYTWO_H

#include "quantum.h"

#define LAYOUT( \
    k00, k01, \
    k10, k11  \
) \
{ \
    { k00, k01 }, \
    { k10, k11 } \
}

#endif