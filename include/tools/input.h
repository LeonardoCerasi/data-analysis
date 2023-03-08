#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath>
#include <vector>

namespace input
{
    int lines(const char *path);

    std::vector<std::vector<double>> read_data(const char *path, char type);
}