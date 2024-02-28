#include "Ball.h"

using namespace std;
namespace figure
{
	Ball::Ball(const double& x, const double& y, const double& z, const double& r) : center{ x, y, z }
	{
		if (r < 0)
		{
			throw logic_error("Radius cannot be negative");
		}
		radius = r;
	}

	double Ball::get_square() const
	{
		return 4 * M_PI * pow(radius, 2);
	}
	double Ball::get_volume() const
	{
		return 4.0 / 3.0 * M_PI * pow(radius, 3);
	}
}