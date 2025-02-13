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

// Тесты contains()
bool Tests::test_contains_inside() {
    Candle candle(100, 120, 80, 110);
    return candle.contains(115);
}

bool Tests::test_contains_border() {
    Candle candle(100, 120, 80, 110);
    return candle.contains(80);
}

bool Tests::test_contains_outside() {
    Candle candle(100, 120, 80, 110);
    return !candle.contains(130);
}

// Тесты full_size()
bool Tests::test_full_size_normal() {
    Candle candle(100, 120, 80, 110);
    return candle.full_size() == 40;
}

bool Tests::test_full_size_zero() {
    Candle candle(100, 100, 100, 100);
    return candle.full_size() == 0;
}

bool Tests::test_full_size_inverted() {
    Candle candle(100, 120, 80, 110);
    return !candle.full_size() == -40;
}

