#include <vector>
#include <functional>
#include <iostream>

#include "tests.h"

//массив всех тестов, который мы заполняем в функции initTests
static std::vector<std::function<bool()>> tests;

void initTests()
{
  // тесты body_contains()
  tests.push_back(Tests::test_body_contains_inside);
  tests.push_back(Tests::test_body_contains_border);
  tests.push_back(Tests::test_body_contains_outside);

  // тесты contains()
  tests.push_back(Tests::test_contains_inside);
  tests.push_back(Tests::test_contains_border);
  tests.push_back(Tests::test_contains_outside);

  // тесты full_size()
  tests.push_back(Tests::test_full_size_normal);
  tests.push_back(Tests::test_full_size_zero);
  tests.push_back(Tests::test_full_size_inverted);

  // тесты body_size()
  tests.push_back(Tests::test_body_size_normal);
  tests.push_back(Tests::test_body_size_zero);
  tests.push_back(Tests::test_body_size_inverted);

  // тесты is_red()
  tests.push_back(Tests::test_is_red_true);
  tests.push_back(Tests::test_is_red_false);
  tests.push_back(Tests::test_is_red_equal);

    // тесты is_green()
  tests.push_back(Tests::test_is_green_true);
  tests.push_back(Tests::test_is_green_false);
  tests.push_back(Tests::test_is_green_equal);
}

int launchTests()
{
  int total = 0;
  int passed = 0;

  for (const auto& test : tests)
  {
    std::cout << "test #" << (total + 1);
    if (test())
    {
      passed += 1;
      std::cout << " passed\n";
    }
    else
    {
      std::cout << " failed\n";
    }
    total += 1;
  }

  std::cout << "\ntests " << passed << "/" << total << " passed!" << std::endl;

  //0 = success
  return total - passed;
}

int main()
{
  initTests();
  return launchTests();
}
