//#include "controller/CommandController.hpp"
#include "parser/Parser.hpp"
#include "commandBuilders/AddCommandBuilder.hpp"
#include "commandRegistry/CommandRegistry.hpp"
#include <sstream>
#include <string>
#include <iostream>


int main() {
  
    /*
    * Testing some functionality
    */
    std::stringstream str_stream{"add -name Table"};
    Parser parser;
    CommandRegistry registry;
    auto parser_result = parser.parse(std::move(str_stream));
    auto cmd_bulder = registry.findCommand(parser_result.first);
    auto cmd = cmd_bulder->buildCommand(parser_result.second);
    std::cout << cmd->execute() <<std::endl;
    return 0;
}