#include "probability/discrete_probability.h"

double probability::bernoulli(int n, double p, int k)
{
    return (binomial(n, k) * std::pow(p, k) * std::pow((1 - p), (n - k)));
}

double probability::poisson(double l, int k)
{
    return (std::pow(l, k) * std::exp(-l) / factorial(k));
}