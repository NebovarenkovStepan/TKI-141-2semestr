#include "Vector.h"

namespace queue
{
	template <typename T>
	Vector<T>::Vector() : array(nullptr), size(0), capacity(0) {}

	template <typename T>
	Vector<T>::~Vector() 
	{
		delete[] array;
	}

	template <typename T>
	void Vector<T>::push_back(const T& element) 
	{
		if (size >= capacity) 
		{
			resize();
		}
		array[size++] = element;
	}

	template <typename T>
	T& Vector<T>::operator[](int index) 
	{
		return array[index];
	}

	template <typename T>
	void Vector<T>::resize() 
	{
		capacity = capacity == 0 ? 1 : capacity * 2;
		T* new_array = new T[capacity];
		for (int i = 0; i < size; ++i) 
		{
			new_array[i] = array[i];
		}
		delete[] array;
		array = new_array;
	}
}

