#include <iostream>

class Logger {
public:
    static void log(const std::string& message) {
        std::cout << message << std::endl;
    }
};