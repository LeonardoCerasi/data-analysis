#include <vector>
#include <cmath>
#include <stdexcept>

namespace statistics
{
    double aritmetic_mean(std::vector<double> values);

    double aritmetic_mean(std::vector<double> values, std::vector<double> frequencies);

    double weighted_mean(std::vector<double> measures, std::vector<double> deviations);

    double variance(std::vector<double> values);

    double variance(std::vector<double> values, std::vector<double> frequencies);

    double weighted_variance(std::vector<double> deviations);

    double deviation(std::vector<double> values);

    double deviation(std::vector<double> values, std::vector<double> frequencies);

    double weighted_deviation(std::vector<double> deviations);

}