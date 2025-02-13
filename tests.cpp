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

// Тесты для contains()
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