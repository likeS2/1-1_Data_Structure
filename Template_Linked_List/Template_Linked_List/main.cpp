#include<iostream>
#include<fstream>
#include"Template_Linked_List.h"
#include<string>
#include"Windows.h"

typedef int T;

using namespace std;

int get_command()
{
	int command;

	cout << "-------------------------------" << endl;
	cout << "1. �߰�" << endl;
	cout << "2. ����(���ڷ�)" << endl;
	cout << "3. ����(�ε�����)" << endl;
	cout << "0. ����" << endl;
	cout << "-------------------------------" << endl;
	cout << "�Է� :: " << " ";
	cin >> command;
	cout << endl;

	return command;

}

int main()
{

	int command = -1;
	Linked_List<T> li;
	T input;


	while (command != 0)
	{
		system("cls");

		cout << "���� ����Ʈ ::";
		li.print_all();

		cout << endl;

		command = get_command();
		
		if (command == 1)
		{

			cout << endl << "�߰� :: ";
			cin >> input;

			li.insert(input);
			cout << endl << "���������� �߰��Ͽ����ϴ�." << endl;
			
			system("pause");
		}

		else if (command == 2)
		{
			cout << endl << "���� :: ";
			cin >> input;

			li.remove(input);
			cout << endl << "���������� �����Ͽ����ϴ�." << endl;
			
			system("pause");

		}

		else if (command == 3)
		{
			cout << endl << "������ �ε����� �Է��ϼ���: ";
			cin >> input;

			li.remove_at(input);
			cout << endl << "���������� �����Ͽ����ϴ�." << endl;
			
			system("pause");
		}

		else if (command == 0)
		{
			return 0;
		}
		
	}
}
 