#include "probability/discrete_probability.h"

double bernoulli(int n, double p, int k)
{
    return (binomial(n, k) * pow(p, k) * pow((1 - p), (n - k)));
}