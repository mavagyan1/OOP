#include "Parser.hpp"
#include <stdexcept>

auto Parser::parse(std::istringstream inputStream) -> ParseResult {
    ParseResult res;
    std::string key;
    std::string value;

    if (!(inputStream >> res.first))
        throw std::runtime_error("Faild to read the command");


    while (inputStream >> key) {
        if (!(inputStream >> value)) 
            throw std::runtime_error("Missing argument value");
        res.second.push_back(std::make_pair(key, value));
    }

    return res;
}