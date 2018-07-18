#include <iostream>
#include"Template_Cal.h"

using namespace std;


int main()
{
	Cal<int>int_cal;
	Cal<double>double_cal;
	Cal<double>both_cal;

	cout << int_cal.Add(1, 2) << " " << int_cal.Sub(3, 1) << endl;
	cout << double_cal.Add(1.1, 2.2) << " " << double_cal.Sub(3.3, 1.1) << endl;
	cout << both_cal.Add(1, 2.2) << " " << both_cal.Sub(3.3, 1) << endl;


}