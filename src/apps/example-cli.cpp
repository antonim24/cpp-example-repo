/**
 * @file example-cli.cpp
 *
 * @brief Example CLI application that uses the library.
 *
 * @copyright Copyright (c) 2025
 *
 */

#include "example-repo/core.hpp"


int main(){
    example_repo::ConsoleLogger logger;

    logger.LogInfo("This is an info message");
    logger.LogError("This is an error message");

    return 0;
}
