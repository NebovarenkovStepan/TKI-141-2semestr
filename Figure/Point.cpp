#include "Point.h"


using namespace std;
namespace figure
{
	Point::Point(const double& x_coord, const double& y_coord, const double& z_coord)
	{
		set_coords(x_coord, y_coord, z_coord);
	}

	void Point::set_coords(const double x_coord, const double y_coord, const double z_coord)
	{
		x = x_coord;
		y = y_coord;
		z = z_coord;
	}

	string Point::ToString() const
	{
		stringstream buffer{};
		buffer << "X coord: " << this->x <<  "\n" <<
			"Y coord: " << this->y << "\n" <<
			"Z coord: " << this->z;

		return buffer.str();
	}

	const double Point::get_x()
	{
		return x;
	}

	const double Point::get_y()
	{
		return y;
	}

	const double Point::get_z()
	{
		return z;
	}
};