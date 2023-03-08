#include "probability/continuous_probability.h"

double probability::normal(double m, double s, double x)
{
    return (std::exp(-std::pow((x - m), 2) / std::pow(s, 2)) / (std::sqrt(2 * M_PI) * s));
}

double probability::gauss(double m, double s, double x)
{
    return (std::erf(std::abs(x - m) / (s * std::sqrt(2))) / 2);
}

double probability::gauss(double m, double s, double x, double y)
{
    if ((x - m) * (y - m) < 0)
    {
        return (std::abs(probability::gauss(m, s, x) + probability::gauss(m, s, y)));
    }
    else
    {
        return (std::abs(probability::gauss(m, s, x) - probability::gauss(m, s, y)));
    }
}