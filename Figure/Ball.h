#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include"Point.h"

/**
* @brief ќбъ¤вл¤ем свое им¤.
*/
namespace figure
{

	/**
	* @brief —оздаем класс - шар.
	*/
	class Ball
	{

	/**
	* @brief ќбъ¤вл¤ем приватные значени¤.
	*/
	private:
		Point center;
		double radius;
	
	/**
	* @brief ќбъ¤вл¤ем публичные значени¤.
	*/
	public:

		/**
		* @brief ‘ункци¤, превер¤юща¤ существование шара и задающа¤ дл¤ него параметры.
		* @param x ¬ходной параметр - координата по x.
		* @param y ¬ходной параметр - координата по y.
		* @param z ¬ходной параметр - координата по z.
		* @param r ¬ходной параметр - радиус шара.
		*/
		Ball(const double& x, const double& y, const double& z, const double& r);

		/**
		* @brief ‘ункци¤ считающа¤ площадь шара.
		* @return ¬озвращает площадь шара.
		*/
		double get_square() const;

		/**
		* @brief ‘ункци¤ считающа¤ объем шара.
		* @return ¬озвращает объем шара.
		*/
		double get_volume() const;
	};

}

