//
// Created by heeve on 22.09.20.
//

#include <iostream>
#include "../headers/parsers.h"

void parse_input(const char* inp,  std::vector<std::string> &args) {
    std::string input(inp);
    input = input.substr(0, input.find('#'));
    size_t initialPos = 0;
    size_t pos = input.find(' ');
    std::string to_put;
    while (pos != std::string::npos) {
        to_put = input.substr(initialPos, pos - initialPos);
        if(to_put.find_first_not_of(' ') != std::string::npos)
            args.push_back(to_put);
        initialPos = pos + 1;

        pos = input.find(' ', initialPos);
    }
    to_put = input.substr(initialPos, std::min(pos, input.size()) - initialPos + 1);

    if(to_put.find_first_not_of(' ') != std::string::npos)
        args.push_back(to_put);

}