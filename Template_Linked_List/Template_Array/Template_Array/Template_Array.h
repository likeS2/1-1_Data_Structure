#pragma once
#include <iostream>

using namespace std;

template<typename Type>
class Array
{
public:
	Array() {};
	~Array() 
	{
		delete template_array;
	};


	Type * template_array = new Type[size];
	int size;

	Array(int size)
	{
		this->size = size;
	};

	Type operator[](int i);


};

template<typename Type>
Type Array<Type>::operator[](int i)
{
	if (i < this->size)
		return template_array[i];
	return template_array[size];
}

/*정답
#pragma once

#include<iostream>
using std::cout;
using std::endl;

template <typename T>
class MyArray
{
public:
	MyArray(int size);
	~MyArray();

	void set_arr();

	T& operator[](int idx);

private:
	T * arr;
	int size;

};

template <typename T>
MyArray<T>::MyArray(int size)
{
	this->size = size;
	arr = new T[size];
}

template <typename T>
MyArray<T>::~MyArray()
{
	delete[] arr;
}

template <typename T>
void MyArray<T>::set_arr()
{
	cout << "입력 : ";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

template <typename T>
T& MyArray<T>::operator[](int idx)
{
	if (idx >= size)
	{
		cout << "에러다.";
		return arr[size - 1];
	}
	return arr[idx];
}*/