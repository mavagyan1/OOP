#include "ExitCommand.hpp" 
#include "../Application.hpp"

std::string Exit::execute() {
    Application::getApplication().stop();
    return {};
}