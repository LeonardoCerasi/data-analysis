#include <iostream>
#include <vector>

#include "statistics/statistics.h"
#include "probability/discrete_probability.h"
#include "probability/continuous_probability.h"
#include "tools/input.h"

int main()
{
    std::vector<std::vector<double>> data = input::read_data("test/data.in", 'd');
    std::vector<double> values;
    for (int i = 0; i < data.size(); i++)
    {
        values.push_back(data[i][0]);
    }
    std::vector<double> deviations;
    for (int i = 0; i < data.size(); i++)
    {
        deviations.push_back(data[i][1]);
    }

    double m = statistics::weighted_mean(values, deviations);
    double v = statistics::weighted_variance(deviations);
    double s = statistics::weighted_deviation(deviations);

    std::cout << "Mean: " << m << std::endl;
    std::cout << "Variance: " << v << std::endl;
    std::cout << "Standard deviation: " << s << std::endl;

    std::cout << "\n" << probability::bernoulli(10, 0.5, 5) << std::endl;

    std::cout << "\n" << probability::poisson(5, 5) << std::endl;

    std::cout << "\n" << probability::normal(m, s, 4.5) << std::endl;

    std::cout << "\n" << probability::gauss(m, s, 4.5) << std::endl;

    std::cout << "\n" << probability::gauss(m, s, 3, 6) << std::endl;

    std::cout << "\n" << probability::gauss(m, s, 7, 13) << std::endl;

    return 0;
}