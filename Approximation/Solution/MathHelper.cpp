#include "MathHelper.h"
#include <cmath>
#include <limits>

using namespace std;
using namespace approximation;


bool MathHelper::are_equal(const double lha, const double rha, const double precision)
{
    return std::abs(lha - rha) <= precision;
}

bool MathHelper::are_equal(const double lha, const double rha)
{
    return MathHelper::are_equal(lha, rha, numeric_limits<double>::epsilon());
}