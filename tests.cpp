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

// Тесты body_size()
bool Tests::test_body_size_normal() {
    Candle candle(100, 120, 80, 110);
    return candle.body_size() == 10;
}

bool Tests::test_body_size_zero() {
    Candle candle(100, 120, 80, 100);
    return candle.body_size() == 0;
}

bool Tests::test_body_size_negative() {
    Candle candle(110, 120, 80, 100);
    return candle.body_size() == 10;
}

// Тесты is_red()
bool Tests::test_is_red_true() {
    Candle candle(110, 120, 80, 100);
    return candle.is_red();
}

bool Tests::test_is_red_false() {
    Candle candle(100, 120, 80, 100);
    return !candle.is_red();
}

bool Tests::test_is_red_equal() {
    Candle candle(100, 120, 80, 100);
    return !candle.is_red();
}

// Тесты is_green()
bool Tests::test_is_green_true() {
    Candle candle(100, 120, 80, 110);
    return candle.is_green();
}

bool Tests::test_is_green_false() {
    Candle candle(110, 120, 80, 100);
    return !candle.is_green();
}

bool Tests::test_is_green_equal() {
    Candle candle(100, 120, 80, 100);
    return !candle.is_green();
}