//
// Created by heeve on 22.09.20.
//
#include <iostream>

int main(int argc, char *argv[]) {
    std::cout << "Arguments: " << argc << std::endl;
    for (int i = 0; i < argc; ++i)
        std::cout << "Argument " << i << ": " << argv[i] << std::endl;

    char *pPath;
    pPath = getenv("TEST");
    if (pPath != NULL)
        printf("The test: %s\n", pPath);
    return 0;
}
