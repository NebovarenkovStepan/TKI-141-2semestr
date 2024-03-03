#pragma once

namespace approximation
{
    class MathHelper
    {
    public:
        /**
       @brief ����� ��������� ���� ������������ ����� � �������� ���������.
       @param lha ������ �����.
       @param rha ������ �����.
       @param precision �������� ���������.
       @return true, ���� \a lha � \a rha �����.
       */
        static bool are_equal(
            const double lha,
            const double rha,
            const double precision);

        /**
       @brief ����� ��������� ���� ������������ ����� � ��������� �� ���������.
       @param lha ������ �����.
       @param rha ������ �����.
       @return true, ���� \a lha � \a rha �����.
       */
        static bool are_equal(
            const double lha,
            const double rha);
    };
}

