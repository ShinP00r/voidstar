#pragma once

#include <string>
#include <vector>

struct Arguments {
    std::string algo;
    std::string scene;
    std::vector<std::string> input;
    std::string manager;
    size_t width;
    size_t height;
    bool fullscreen;
};

Arguments *parseArgs(int argc, char **argv);
