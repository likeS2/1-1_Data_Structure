
#include "Template_Array.h"


int main(void)
{
	int i, k, j;
	cout << "�迭 ũ�⸦ �Է��ϼ��� :: ";
	cin >> i;

	Array<int>arr(i);
	
	for (k = 0; k < i; k++)
	{
		cout << arr[k] << " ";
	}
}