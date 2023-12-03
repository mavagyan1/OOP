//#include "controller/CommandController.hpp"
#include "parser/Parser.hpp"
#include "commandRegistry/CommandRegistry.hpp"
#include "commandBuilders/AddCommandBuilder.hpp"
#include <sstream>
#include <string>
#include <iostream>


int main() {
  
    /*
    * Testing some functionality
    */
    std::istringstream str_stream("add -name rectangle");
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