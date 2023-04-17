//12181407 이종범 객체지향프로그래밍 3주차 발전과제
//시작단이 끝 단보다 큰 경우, 구구단을 조건문과 이중 for문을 활용해 출력하는 예제
#include <iostream>
using namespace std;
int main(void)
{
	int start_dan = 0, end_dan = 0;

	cout << "시작 단을 입력하세요: ";
	cin >> start_dan;
	cout << "끝 단을 입력하세요: ";
	cin >> end_dan;

	if (start_dan <= end_dan)
	{
		for (int mul = 1; mul <= 9; mul++)
		{
			for (int i = start_dan; i <= end_dan; i++)
			{
				cout << i << "*" << mul << "=" << i * mul<<" ";
			}
			cout << "\n";
		}

		cout << "\n";

		for (int i = start_dan; i <= end_dan; i++)
		{
			for (int mul = 1; mul <= 9; mul++)
			{
				cout << i << "*" << mul << "=" << i * mul << " ";
			}
			cout << "\n";
		}
	}

	else if (start_dan > end_dan)
	{
		for (int mul = 1; mul <= 9; mul++)
		{
			for (int i = start_dan; i >= end_dan; i--)
			{
				cout << i << "*" << mul << "=" << i * mul << " ";
			}
			cout << "\n";
		}

		cout << "\n";
		
		for (int i = start_dan; i >= end_dan; i--)
		{
			for (int mul = 1; mul <=9; mul++)
			{
				cout << i << "*" << mul << "=" << i * mul << " ";
			}
			cout << "\n";
		}
	}
}