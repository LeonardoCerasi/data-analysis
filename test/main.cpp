#include <iostream>
#include <vector>

#include "statistics/statistics.h"
#include "probability/discrete_probability.h"
#include "probability/continuous_probability.h"

int main()
{
    std::vector<double> values = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Mean: " << statistics::aritmetic_mean(values) << std::endl;

    std::cout << "Variance: " << statistics::variance(values) << std::endl;

    std::cout << "Standard deviation: " << statistics::deviation(values) << std::endl;

    std::cout << "\n" << probability::bernoulli(10, 0.5, 5) << std::endl;

    std::cout << "\n" << probability::poisson(5, 5) << std::endl;

    std::cout << "\n" << probability::normal(10, 0.5, 5) << std::endl;

    return 0;
}