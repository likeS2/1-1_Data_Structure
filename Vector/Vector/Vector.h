#pragma once
#include <iostream>



template<typename Type>
class Vector
{
public:
	Vector() {}
	~Vector() {}

	void make();
	void pop_back();
	void push_back(Type data);
	Type& operator[] (int pos);
	int capacity();
	int size();


private:
	Type * arr = nullptr;
	int _size = 0;
	int _capacity = 6;

};

template<typename Type>
void Vector<Type>::make()
{
	arr = new int[_capacity];
}

template<typename Type>
void Vector<Type>::pop_back() 
{
	Type* new_arr = new Type[_size - 1];
	_size = _size - 1;

	for (int k = 0; k < _size; k++)
		arr[k] = new_arr[k];
}

template<typename Type>
void Vector<Type>::push_back(Type data)
{	
	arr[_size] = data;
	_size = _size + 1;

	if (_capacity >= _size)
	{
		Type* new_arr = new Type[_size * 2];

		for (int i = 0; i < _size; i++)
			arr[i] = new_arr[i];

		delete arr;
	}

	else if (_size <= (_capacity / 2))
	{
		Type* new_arr = new Type[_size / 2];

		for (int j = 0; j < _size; j++)
			arr[j] = new_arr[j];

		delete arr;
	}
}

template<typename Type>
Type& Vector<Type>::operator[] (int pos)
{
	if (pos > _size)
	{
		_DEBUG_ERROR("error!");
	}
	return arr[pos];
}

template<typename Type>
int Vector<Type>::capacity()
{
	return _capacity;
}

template<typename Type>
int Vector<Type>::size()
{
	return _size;
}


