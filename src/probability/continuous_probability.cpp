#include "probability/continuous_probability.h"

double probability::normal(double m, double s, double x)
{
    return (exp(-pow((x - m), 2) / pow(s, 2)) / (sqrt(2 * M_PI) * s));
}