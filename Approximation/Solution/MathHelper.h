#pragma once

namespace approximation
{
    class MathHelper
    {
    public:
        /**
       @brief Метод сравнения двух вещественных чисел с заданной точностью.
       @param lha Первое число.
       @param rha Второе число.
       @param precision Точность сравнения.
       @return true, если \a lha и \a rha равны.
       */
        static bool are_equal(
            const double lha,
            const double rha,
            const double precision);

        /**
       @brief Метод сравнения двух вещественных чисел с точностью по умолчанию.
       @param lha Первое число.
       @param rha Второе число.
       @return true, если \a lha и \a rha равны.
       */
        static bool are_equal(
            const double lha,
            const double rha);
    };
}
