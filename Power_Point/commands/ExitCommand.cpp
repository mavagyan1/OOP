#include "ExitCommand.hpp" 
#include "../Application.hpp"

std::string Exit::execute() {
    std::exit;
    return {};
}