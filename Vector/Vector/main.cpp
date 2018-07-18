#include <iostream>
#include"Vector.h"

using namespace std;


int main()
{
	Vector<int> vec;
	vec.make();
	vec.push_back(2);
	vec.pop_back();
	vec.capacity();
	vec.size();


}