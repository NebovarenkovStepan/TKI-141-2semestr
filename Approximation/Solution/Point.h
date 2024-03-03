#pragma once
#include <sstream>
#include <ostream>
#include "MathHelper.h"

using namespace std;

/**
* @brief ќбъ€вл€ем свое им€.
*/
namespace approximation
{
	/**
	* @brief —оздаем структуру - точка.
	*/
	struct Point : public MathHelper
	{
		double x, y;

		/**
		* @brief —оздаем конструктор структуры.
		* @param x - координата по x.
		* @param y - координата по y.
		*/
		Point(const double& x, const double& y) : x{ x }, y{ y } {};

		/**
		* @brief ѕереопредел€ем оператор сравнени€.
		* @param lha - перва€ точка.
		* @param rha - втора€ точка.
		*/
		friend bool operator<=>(const Point& lha, const Point& rha)
		{
			if (less<double>()(lha.x, rha.x) and (not(are_equal(lha.y, rha.y))))
			{
				return true;
			}
			return false;
		}
	};
}
