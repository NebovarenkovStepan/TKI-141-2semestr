#include <iostream>
#include "..\Figure\Point.h"
#include "..\Figure\Ball.h"


using namespace std;
using namespace figure;

/**
 * @brief Функция  создающая точку.
 * @return Возвращает точку.
 */
Point get_point();

/**
 * @brief Главная функция.
 * @return Возвращает 0 если все завершилось корректно.
 */
int main()
{
	Point center = get_point();
	cout << "Enter the radius of the ball: ";
	double radius;
	cin >> radius;
	double x = center.get_x();
	double y = center.get_y();
	double z = center.get_z();
	try
	{
		Ball(x, y, z, radius);
	}
	catch (std::logic_error& ex)
	{
		cerr << ex.what() << endl;
	}
	Ball ball = Ball(x, y, z, radius);
	cout << "Square: " << ball.get_square() << endl;
	cout << "Volume: " << ball.get_volume() << endl;
	cout << "------" << endl;
	cout << center.ToString() << endl;
	return 0;
}

Point get_point()
{
	cout << "Enter the x coord: ";
	double x;
	cin >> x;
	cout << "Enter the y coord: ";
	double y;
	cin >> y;
	cout << "Enter the z coord: ";
	double z;
	cin >> z;
	return Point(x, y, z);
}
