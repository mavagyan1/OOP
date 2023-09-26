#include "CommandController.hpp"
#include <sstream>
#include <string>
#include <iostream>

int main() {
  
    std::stringstream str_stream{"add -name Table"};
    Parser parser;
    auto cmd_ptr = parser.parse(std::move(str_stream));

    return 0;
}