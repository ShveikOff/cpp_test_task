#pragma once
#include "candle.h"

class Tests {
public:
    // тесты body_contains()
    static bool test_body_contains_inside();
    static bool test_body_contains_border();
    static bool test_body_contains_outside();

    // тесты contains()
    static bool test_contains_inside();
    static bool test_contains_border();
    static bool test_contains_outside();

    // тесты full_size()
    static bool test_full_size_normal();
    static bool test_full_size_zero();
    static bool test_full_size_inverted();
};