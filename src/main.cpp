#include <spdlog/spdlog.h>

int main()
{
  //Use the default logger (stdout, multi-threaded, colored)
  spdlog::info("Hello, {}!", "World");

  fmt::print("Hello, from {}\n", "{fmt}");
}
