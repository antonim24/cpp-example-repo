/**
 * @file core.hpp
 *
 * @brief Core library for example-repo
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <string>

namespace example_repo {

/**
 * Console Logging Class.
 *
 * This class logs all messages to the console instead of a file.
 *
 * @class ConsoleLogger core.hpp "example-repo/core.hpp"
 */
class ConsoleLogger {
public:

    /**
     * Log an information message.
     *
     * Log an informational message to the console. This output goes to the STDOUT file descriptor.
     *
     * @param kMessage The message to log.
     */
    void LogInfo(const std::string& kMessage);

    /**
     * Log an error message.
     *
     * Log an error message to the console. This output goes to the STDERR file descriptor.
     *
     * @param kMessage The message to log.
     */
    void LogError(const std::string& kMessage);

};

}
