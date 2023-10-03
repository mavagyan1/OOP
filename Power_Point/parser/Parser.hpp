#ifndef __PARSER_HPP__
#define __PARSER_HPP__

#include "../commandRegistry/CommandRegistry.hpp"
#include "../commands/Command.hpp"
#include <string>
#include <sstream> //std::stringstream
#include <utility> //std::pair


class Parser {
private:
    using Argument = std::pair<std::string,std::string>;
    using ParseResult = std::pair<std::string,std::vector<Argument>>;

public:
    ParseResult parse(std::stringstream);
};

#endif //__PARSER_HPP__