#include "Parser.hpp"
#include <stdexcept>

//    using ParseResult = std::pair<std::string,std::vector<Argument>>;


auto Parser::parse(std::stringstream inputStream) -> ParseResult {
    ParseResult res;
    std::string key;
    std::string value;

    inputStream >> res.first;

    while (inputStream >> key && inputStream >> value) {
        res.second.push_back(std::make_pair(key,value));
        //add exeption handler
    }
    
    return res;
}