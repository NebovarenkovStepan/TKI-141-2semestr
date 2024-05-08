#pragma once
#include <sstream>
#include <ostream>
#include "Pair.cpp" 

namespace queue
{
	template <typename T>
	class Vector 
	{
	public:
		Vector();
		~Vector();
		void push_back(const T& element);
		T& operator[](int index);

	private:
		T* array
		int size;
		int capacity;

		void resize();
	};
}
