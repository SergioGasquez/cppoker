#include "ClassTest.h"
#include <spdlog/spdlog.h>
ClassTest::ClassTest(uint8_t t_sadad)
{
  spdlog::info("ClassTest instantiated\n");
  myNum = t_sadad;
}
