
#include "Template_Array.h"


int main(void)
{
	int i, k, j;
	cout << "배열 크기를 입력하세요 :: ";
	cin >> i;

	Array<int>arr(i);
	
	for (k = 0; k < i; k++)
	{
		cout << arr[k] << " ";
	}
}