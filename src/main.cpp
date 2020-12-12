#include <spdlog/spdlog.h>

int main()
{
  //Use the default logger (stdout, multi-threaded, colored)
  std::vector<int> test = { 2, 2, 2, 2 };
  int arr[] = { 2, 2, 2, 2, 2 };
  for (int i = 0; i <= 3; i++)
  {
    fmt::print("{}\n", int(85));
  }
  spdlog::info("Hello, {}!", "World");

  fmt::print("Hello, from {}\n", "{fmt}");
}
