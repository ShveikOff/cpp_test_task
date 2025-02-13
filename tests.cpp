#include "tests.h"
#include <iostream>

// Тесты body_contains()
bool Tests::test_body_contains_inside() {
    Candle candle(100, 120, 80, 110);
    return candle.body_contains(105);
}

bool Tests::test_body_contains_border() {
    Candle candle(100, 120, 80, 110);
    return candle.body_contains(100);
}

bool Tests::test_body_contains_outside() {
    Candle candle(100, 120, 80, 110);
    return !candle.body_contains(95);
}