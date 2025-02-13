#include "tests.h"
#include <iostream>

// Тесты body_contains()
bool Tests::test_body_contains_inside() {
    Candle candle(100, 120, 80, 110);
    return candle.body_contains(105); // ожидается true, цена внутри тела
}

bool Tests::test_body_contains_border() {
    Candle candle(100, 120, 80, 110);
    return candle.body_contains(100); // ожидается true, цена в границе тела 
}

bool Tests::test_body_contains_outside() {
    Candle candle(100, 120, 80, 110);
    return !candle.body_contains(95); // ожидается false, цена вне тела
}

// Тесты contains()
bool Tests::test_contains_inside() {
    Candle candle(100, 120, 80, 110);
    return candle.contains(115); // ожидается true, цена внутри свечи
}

bool Tests::test_contains_border() {
    Candle candle(100, 120, 80, 110);
    return candle.contains(80); // ожидается true, цена внутри границы свечи
}

bool Tests::test_contains_outside() {
    Candle candle(100, 120, 80, 110);
    return !candle.contains(130); // ожидается false, цена вне свечи
}

// Тесты full_size()
bool Tests::test_full_size_normal() {
    Candle candle(100, 120, 80, 110);
    return candle.full_size() == 40; // ожидается true 120-80 = 40
}

bool Tests::test_full_size_zero() {
    Candle candle(100, 100, 100, 100);
    return candle.full_size() == 0; // ожидается true 100-100 = 0
}

bool Tests::test_full_size_inverted() {
    Candle candle(100, 80, 120, 110); 
    return candle.full_size() == 40; // ожидается true abs(80-120) = 40
}

// Тесты body_size()
bool Tests::test_body_size_normal() {
    Candle candle(100, 120, 80, 110);
    return candle.body_size() == 10; // ожидается true 110 - 100 = 10
}

bool Tests::test_body_size_zero() {
    Candle candle(100, 120, 80, 100);
    return candle.body_size() == 0; // ожидается true 100 - 100 = 0
}

bool Tests::test_body_size_inverted() {
    Candle candle(110, 120, 80, 100);
    return candle.body_size() == 10; // ожидается true abs(100 - 110) = 10
}

// Тесты is_red()
bool Tests::test_is_red_true() {
    Candle candle(110, 120, 80, 100);
    return candle.is_red(); // ожидается true 110 > 100
}

bool Tests::test_is_red_false() {
    Candle candle(100, 120, 80, 110);
    return !candle.is_red(); // ожидается false 100 < 110 
}

bool Tests::test_is_red_equal() {
    Candle candle(100, 120, 80, 100);
    return !candle.is_red(); // ожидается false 100 = 100
}

// Тесты is_green()
bool Tests::test_is_green_true() {
    Candle candle(100, 120, 80, 110);
    return candle.is_green(); // ожидается true 100 < 100
}

bool Tests::test_is_green_false() {
    Candle candle(110, 120, 80, 100);
    return !candle.is_green(); // ожидается false 110 > 100
}

bool Tests::test_is_green_equal() {
    Candle candle(100, 120, 80, 100);
    return !candle.is_green(); // ожидается false 100 = 100
}