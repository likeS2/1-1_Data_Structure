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
	cout << "1. 추가" << endl;
	cout << "2. 제거(숫자로)" << endl;
	cout << "3. 제거(인덱스로)" << endl;
	cout << "0. 종료" << endl;
	cout << "-------------------------------" << endl;
	cout << "입력 :: " << " ";
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

		cout << "현재 리스트 ::";
		li.print_all();

		cout << endl;

		command = get_command();
		
		if (command == 1)
		{

			cout << endl << "추가 :: ";
			cin >> input;

			li.insert(input);
			cout << endl << "성공적으로 추가하였습니다." << endl;
			
			system("pause");
		}

		else if (command == 2)
		{
			cout << endl << "삭제 :: ";
			cin >> input;

			li.remove(input);
			cout << endl << "성공적으로 삭제하였습니다." << endl;
			
			system("pause");

		}

		else if (command == 3)
		{
			cout << endl << "제거할 인덱스를 입력하세요: ";
			cin >> input;

			li.remove_at(input);
			cout << endl << "성공적으로 삭제하였습니다." << endl;
			
			system("pause");
		}

		else if (command == 0)
		{
			return 0;
		}
		
	}
}
 