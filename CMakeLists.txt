cmake_minimum_required(VERSION 3.12)
project(5GSimulator)

# Add the path to Google Test source files
add_subdirectory(libs/googletest)

# Include directories for your source and test files
include_directories(src)
include_directories(tests)

# Add your source files
add_executable(5GSimulator src/nr_encoder.cpp)

# Add your test files
add_executable(5GSimulatorTests tests/nr_encoder_test.cpp)

# Link your project with Google Test
target_link_libraries(5GSimulatorTests gtest gtest_main)
