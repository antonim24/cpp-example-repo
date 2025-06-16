#
# Root CMakeLists.txt for the project
#
cmake_minimum_required(3.19)

project(
    CppExampleRepository
    VERSION 0.1.0
    DESCRIPTION "An example repository for C++ projects."
    LANGUAGES CXX)

# Basic options for building as well as their defaults
option(BUILD_TESTING "Build the tests for this project." ON)


# The location of source code can be found here
add_subdirectory(src)

# Only run the following pieces if testing is enabled
if(BUILD_TESTING)
    # Include GoogleTest. This will be the testing framework
    include(GoogleTest)

    # Enable testing for the project.
    enable_testing()

    # Add the tests directory
    add_subdirectory(tests)
endif()
