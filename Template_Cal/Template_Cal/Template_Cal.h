#pragma once
#include<iostream>
#include"Windows.h"

using namespace std;


template<typename Type>
class Cal
{
public:
	Cal() {};
	~Cal();

	Type Add(Type a, Type b);
	Type Sub(Type a, Type b);



private:
	Type a;
	Type b;
};



template<typename Type>
Cal<Type>::~Cal()
{

}

template<typename Type>
Type Cal<Type>::Add(Type a, Type b)
{
	Type result;
	result = a + b;

	return result;
}

template<typename Type>
Type Cal<Type>::Sub(Type a, Type b)
{
	Type result;
	result = a - b;

	return result;
}