#include "consoleOutput.hpp"
#include <iostream>

void ConsoleOutput::print(std::string_view str) {
    std::cout << str << std::endl;
}