#pragma once
#include <sstream>
#include <ostream>
#include "MathHelper.h"

using namespace std;

/**
* @brief ��������� ���� ���.
*/
namespace approximation
{
	/**
	* @brief ������� ��������� - �����.
	*/
	struct Point : public MathHelper
	{
		double x, y;

		/**
		* @brief ������� ����������� ���������.
		* @param x - ���������� �� x.
		* @param y - ���������� �� y.
		*/
		Point(const double& x, const double& y) : x{ x }, y{ y } {};

		/**
		* @brief �������������� �������� ���������.
		* @param lha - ������ �����.
		* @param rha - ������ �����.
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
