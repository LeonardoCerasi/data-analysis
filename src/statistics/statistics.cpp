#include "statistics/statistics.h"

double statistics::aritmetic_mean(std::vector<double> values)
{
    double mean = 0;

    for (int i = 0; i < values.size(); i++)
    {
        mean += values[i];
    }

    return (mean / values.size());
}

double statistics::aritmetic_mean(std::vector<double> values, std::vector<double> frequencies)
{
    if (values.size() != frequencies.size())
    {
        throw std::invalid_argument("The number of classes doesn't match the number of frequencies");
    }
    
    double mean = 0;

    double total_freq = 0;

    for (int i = 0; i < values.size(); i++)
    {
        mean += values[i] * frequencies[i];

        total_freq += frequencies[i];
    }

    return (mean / total_freq);
}

double statistics::weighted_mean(std::vector<double> measures, std::vector<double> deviations)
{
    if (measures.size() != deviations.size())
    {
        throw std::invalid_argument("The number of measures doesn't match the number of deviations");
    }

    double mean = 0;

    double total_weight = 0;

    for (int i = 0; i < measures.size(); i++)
    {
        mean += measures[i] * deviations[i];

        total_weight += deviations[i];
    }

    return (mean / total_weight);
}

double statistics::variance(std::vector<double> values)
{
    double mean = statistics::aritmetic_mean(values);

    double squared_deviation = 0;

    for (int i = 0; i < values.size(); i++)
    {
        squared_deviation += pow((values[i] - mean), 2);
    }

    return (squared_deviation / (values.size() - 1));
}

double statistics::variance(std::vector<double> values, std::vector<double> frequencies)
{
    if (values.size() != frequencies.size())
    {
        throw std::invalid_argument("The number of classes doesn't match the number of frequencies");
    }

    double mean = statistics::aritmetic_mean(values);

    double squared_deviation = 0;

    double total_freq = 0;

    for (int i = 0; i < values.size(); i++)
    {
        squared_deviation += pow((values[i] - mean), 2);

        total_freq += frequencies[i];
    }

    return (squared_deviation / (total_freq - 1));
}

double statistics::weighted_variance(std::vector<double> deviations)
{
    double total_dev = 0;

    for (int i = 0; i < deviations.size(); i++)
    {
        total_dev += pow(deviations[i], -2);
    }

    return (1 / total_dev);
}

double statistics::deviation(std::vector<double> values)
{
    return sqrt(statistics::variance(values));
}

double statistics::deviation(std::vector<double> values, std::vector<double> frequencies)
{
    return sqrt(statistics::deviation(values, frequencies));
}

double statistics::weighted_deviation(std::vector<double> deviations)
{
    return sqrt(statistics::weighted_variance(deviations));
}
