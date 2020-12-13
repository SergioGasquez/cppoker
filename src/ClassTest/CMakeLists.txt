add_library(classtest STATIC ClassTest.cpp ClassTest.h)

target_link_libraries(
  classtest
  PRIVATE project_options
          project_warnings
          CONAN_PKG::fmt
          CONAN_PKG::spdlog)