#ifndef __PARSER_HPP__
#define __PARSER_HPP__

#include "../commandRegistry/CommandRegistry.hpp"
#include "../commands/Command.hpp"
#include <string>
#include <istream>
#include <utility> //std::pair


class Parser {
private:
    using Argument = std::pair<std::string,std::string>;
   
public:
    using ParseResult = std::pair<std::string,std::vector<Argument>>;
    ParseResult parse(std::istream&);
};

#endif //__PARSER_HPP__