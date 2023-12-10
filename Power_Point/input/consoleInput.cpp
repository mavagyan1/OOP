#include "consoleInput.hpp"
#include <iostream>
#include <sstream>

std::stringstream  ConsoleInput::read() { 

    std::string input;
    getline(std::cin, input);
    return std::stringstream{input};
}
