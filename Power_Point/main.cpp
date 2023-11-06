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
    auto cmd_builder = registry.findCommand(parser_result.first);
    auto cmd = cmd_builder->buildCommand(parser_result.second);
    try {
        std::cout << cmd->execute() << std::endl;
    }
    catch(std::runtime_error& exp) {
        std::cout << exp.what() << std::endl;
    }
    return 0;
}