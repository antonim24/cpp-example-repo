#
# Library CMakeLists.txt
#
# This is where library source code lives and therefore this file will set up the library
#

# Add a shared library called core
add_library(core SHARED core.cpp)

# Add the include path for this library
target_include_directories(core PUBLIC ${CMAKE_SOURCE_DIR}/include)
