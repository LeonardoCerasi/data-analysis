#include "tools/math.h"

int factorial(int n)
{
    if (n < 0)
    {
        throw std::invalid_argument("Factorial argument must be positive integer");
    }

    int k = 1;

    for (int i = n; i > 1; i--)
    {
        k *= i;
    }

    return k;
}

int binomial(int n, int k)
{
    return (factorial(n) / (factorial(k) * factorial(n - k)));
}