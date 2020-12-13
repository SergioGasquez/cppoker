/**
 * @file main.cpp
 * @brief Class declaration for ClassTest class
 * 
 * Simple class test
 *  
 * @author Sergio Gasquez Arcos (sergio.gasquez@gmail.es)
 * @version 1.0 Initial release
 * @date 2020-12-13
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <spdlog/spdlog.h>
#include "ClassTest/ClassTest.h"

/**
 * @brief Main 
 * 
 * @return int 
 */
int main()
{
  uint8_t test = 4;
  ClassTest myclass(test);
  spdlog::info("Hello, {}!", "World");

  fmt::print("Hello, from {}\n", "{fmt}");
}
