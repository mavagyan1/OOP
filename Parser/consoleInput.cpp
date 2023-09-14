#include "consoleInput.hpp"
#include <iostream>

std::stringstream  ConsoleInput::read() { 

    std::string input;
    getline(std::cin, input);
    return std::stringstream{input};

    // std::stringstream input_stream;
    // std::copy(
    //     std::istreambuf_iterator<char>(std::cin),
    //     std::istreambuf_iterator<char>{},
    //     std::ostreambuf_iterator<char>(input_stream)
    // );
    // return input_stream;
    
   
}
