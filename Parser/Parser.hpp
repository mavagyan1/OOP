#ifndef __PARSER_HPP__
#define __PARSER_HPP__

#include "CommandRegistry.hpp"
#include "Command.hpp"
#include <string>
#include <sstream> //std::stringstream
#include <memory> //std::unique_ptr


class Parser {
private:
    using CommandPtr = std::unique_ptr<Command>;

public:
    CommandPtr parse(std::stringstream);

private:
    CommandRegistry _registry;
};

#endif //__PARSER_HPP__