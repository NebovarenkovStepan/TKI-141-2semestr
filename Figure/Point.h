#pragma once
#include <sstream>
#include <string>

using namespace std;

/**
* @brief Объявляем свое имя.
*/
namespace figure
{
	/**
	* @brief Создаем структуру - точка.
	*/
	struct Point
	{

	/**
	* @brief Объявляем приватные значения.
	*/
	private:
		double x, y, z;

	/**
	* @brief Объявляем публичные значения.
	*/
	public:

		/**
		* @brief Функция, задающая параметры для точки.
		* @param x_coord Входной параметр - координата по x.
		* @param y_coord Входной параметр - координата по y.
		* @param z_coord Входной параметр - координата по z.
		*/
		Point(const double& x_coord, const double& y_coord, const double& z_coord);

		/**
		* @brief Функция, присваивающая параметры из ввода.
		* @param x_coord Входной параметр - координата по x.
		* @param y_coord Входной параметр - координата по y.
		* @param z_coord Входной параметр - координата по z.
		*/
		void set_coords(const double x_coord, const double y_coord, const double z_coord);
		
		/**
		* @brief Функция для получения координаты по x.
		* @return Возвращает координату по x.
		*/
		const double get_x();
		
		/**
		* @brief Функция для получения координаты по y.
		* @return Возвращает координату по y.
		*/
		const double get_y();

		/**
		* @brief Функция для получения координаты по z.
		* @return Возвращает координату по z.
		*/
		const double get_z();

		/**
		* @brief Выводит координаты точки в виде строки.
		* @return Возвращает строку с координатами точки.
		*/
		string ToString() const;
	};
}
