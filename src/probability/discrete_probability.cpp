#include "probability/discrete_probability.h"

double probability::bernoulli(int n, double p, int k)
{
    return (binomial(n, k) * pow(p, k) * pow((1 - p), (n - k)));
}

double probability::poisson(double l, int k)
{
    return (pow(l, k) * exp(-l) / factorial(k));
}