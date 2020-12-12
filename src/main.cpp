#include <spdlog/spdlog.h>

int main()
{
  const int N = 5;

  //Use the default logger (stdout, multi-threaded, colored)
  // std::vector<int> test = { 2, 2, 2, 2 };
  int arr[] = { 2, 2, 2, 2, 2 };
  for (int i = 0; i <= N; i++)
  {
    fmt::print("{}\n", int(85));
  }

  std::vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  for (int i = 0; i < v.size(); ++i)
  {
    fmt::print("{}\n", v[i]);
  }
  spdlog::info("Hello, {}!", "World");

  fmt::print("Hello, from {}\n", "{fmt}");
}
