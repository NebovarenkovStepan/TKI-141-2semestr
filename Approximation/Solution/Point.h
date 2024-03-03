#include <sstream>
#include <ostream>
#include "MathHelper.h"

using namespace std;

/**
* @brief Объявляем свое имя.
*/
namespace approximation
{
	/**
	* @brief Создаем структуру - точка.
	*/
	struct Point : public MathHelper
	{
		double x, y;

		/**
		* @brief Создаем конструктор структуры.
		* @param x - координата по x.
		* @param y - координата по y.
		*/
		Point(const double& x, const double& y) : x{ x }, y{ y } {};

		/**
		* @brief Переопределяем оператор сравнения.
		* @param lha - первая точка.
		* @param rha - вторая точка.
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
