#include "consoleInput.hpp"
#include <iostream>

std::stringstream  ConsoleInput::read() { 

    std::string input;
    getline(std::cin, input);
    return std::stringstream{input};
}
