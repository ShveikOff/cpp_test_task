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

    // тесты body_size()
    static bool test_body_size_normal();
    static bool test_body_size_zero();
    static bool test_body_size_negative();

    // тесты is_red()
    static bool test_is_red_true();
    static bool test_is_red_false();
    static bool test_is_red_equal();

    // тесты is_green()
    static bool test_is_green_true();
    static bool test_is_green_false();
    static bool test_is_green_equal();
};