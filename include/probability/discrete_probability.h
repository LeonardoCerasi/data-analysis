#pragma once

#include <cmath>

#include "tools/math.h"

namespace probability
{
    double bernoulli(int n, double p, int k);

    double poisson(double l, int k);
}