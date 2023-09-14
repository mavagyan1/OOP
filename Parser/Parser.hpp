#ifndef __PARSER_HPP__
#define __PARSER_HPP__

#include <string>
#include <sstream> //std::stringstream
#include <utility> //std::pair


using ParsingResult = std::pair<std::string,std::stringstream&>;

class Parser {
    public:
    ParsingResult parse(std::stringstream&);
};

#endif //__PARSER_HPP__