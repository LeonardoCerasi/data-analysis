#include <iostream>
#include <vector>

#include "statistics.h"

int main()
{
    std::vector<double> values = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Mean: " << statistics::aritmetic_mean(values) << std::endl;

    std::cout << "Variance: " << statistics::variance(values) << std::endl;

    std::cout << "Standard deviation: " << statistics::deviation(values) << std::endl;

    return 0;
}