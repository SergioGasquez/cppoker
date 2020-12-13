
add_library(classtest STATIC ClassTest.cpp ClassTest.h)
# target_include_directories(classtest PUBLIC ClassTest)
# # target_compile_features(classtest PUBLIC cxx_std_11)

# target_link_libraries(classtest CONAN_PKG::spdlog)
target_link_libraries(
  classtest
  PRIVATE project_options
          project_warnings
          CONAN_PKG::fmt
          CONAN_PKG::spdlog)