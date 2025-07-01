/**
 * @file core.cpp
 *
 * @brief Implementation for items in the core library.
 *
 * @copyright Copyright (c) 2025
 *
 */

#include "example-repo/core.hpp"
#include <string>
#include <iostream>


namespace example_repo {

void ConsoleLogger::LogInfo(const std::string& kMessage){
    std::cout << kMessage << std::endl;
}

void ConsoleLogger::LogError(const std::string& kMessage){
    std::cerr << kMessage << std::endl;
}

}
