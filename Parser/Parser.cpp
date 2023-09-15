#include "Parser.hpp"
#include <stdexcept>

ParsingResult Parser::parse(std::stringstream inputStream) {
    std::stringstream args;
    std::string command;
    std::string token;
    
    inputStream >> command;
    inputStream >> token;
    if(token == "-args") {
        while(inputStream >> token)
            args << token << " ";
    } else if(token == "-arg1") {
        inputStream >> token;
        args << token << " ";
        inputStream >> token;
        if(token != "-arg2")
            throw std::runtime_error("incorrect command");
        inputStream >> token;
        args << token << " ";
    } else if(token == "-arg") {
        inputStream >> token;
        args << token << " ";
    } else
        throw std::runtime_error("incorrect command");

    return std::pair<std::string,std::stringstream>(command, std::move(args));
}