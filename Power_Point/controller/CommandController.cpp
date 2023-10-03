// #include "CommandController.hpp"
// #include <iostream>
// #include <string>
// #include <utility>

// void CommandController::run() {
//     while(true) {
//         try
//         {
//             auto input = _input.read();
//             auto parsed_cmd = _parser.parse(std::move(input));
//             auto& cmd = _command_builder.findCommand(parsed_cmd.first);
//             if(!cmd)
//                 break;
//             auto result = cmd->execute(std::move(parsed_cmd.second));
//             _output.print(result);

//         }
//         catch(std::runtime_error error)
//         {
//             _output.print(error.what());
//            //std::cout << error.what() << std::endl;
//         }
        
//     }
// }