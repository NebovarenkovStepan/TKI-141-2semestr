#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include"Point.h"

/**
* @brief Объявляем свое имя.
*/
namespace figure
{

	/**
	* @brief — создаем класс - шар.
	*/
	class Ball
	{

	/**
	* @brief Добавляем приватные значения.
	*/
	private:
		Point center;
		double radius;
	
	/**
	* @brief Доюавляем публичные значения.
	*/
	public:

		/**
		* @brief Функуция, преверяющая существование шара и задающая для него параметры.
		* @param x Входной параметр - координата по x.
		* @param y Входной параметр - координата по y.
		* @param z Входной параметр - координата по z.
		* @param r Входной параметр - радиус шара.
		*/
		Ball(const double& x, const double& y, const double& z, const double& r);

		/**
		* @brief Функция считающая площадь шара.
		* @return Возвращает площадь шара.
		*/
		double get_square() const;

		/**
		* @brief Функция считающая объем шара.
		* @return Возвращает объем шара.
		*/
		double get_volume() const;
	};

}

