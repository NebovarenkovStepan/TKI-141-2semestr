#include <iostream>
#include <vector>
#include "../Solution/Point.h"
#include "../Solution/MathHelper.h"


using namespace std;
using namespace approximation;

/**
 * @brief Функция, создающая точку.
 * @param n - номер точки.
 * @return Возвращает точку.
 */
Point get_point(int n);

/**
 * @brief Функция, сравнивающая текущую и предыдущую точки.
 * @param point - текущая точка.
 * @param prev_point - предыдущая точка.
 */
void compare(const Point point, const Point prev_point);

int main()
{
	int n = 0;
	cout << "Enter amount of points(>3): ";
	cin >> n;
	try
	{
		if (n < 3)
		{
			throw logic_error("Amount of points can not be less then 3.");
		}
		Point prev_point = get_point(1);
		vector<Point> points(n, prev_point);
		points[0] = prev_point;
		Point point = get_point(2);
		points[1] = point;
		compare(point, prev_point);
		for (int i = 2; i < n; i++)
		{
			prev_point = point;
			Point point = get_point(i + 1);
			points[i] = point;
			compare(point, prev_point);
		}
	}
	catch (logic_error& ex)
	{
		cerr << ex.what() << endl;
	}

	return 0;
}

void compare(const Point point, const Point prev_point)
{
	if (not(operator<=>(prev_point, point)))
	{
		throw logic_error("Previous point can not be further then current or have equal abcissa or ordinate.");
	}
}

Point get_point(int n)
{
	cout << "Enter the x" << n << " coord: ";
	double x;
	cin >> x;
	cout << "Enter the y" << n << " coord: ";
	double y;
	cin >> y;
	return Point(x, y);
}