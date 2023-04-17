//12181407 이종범 객체지향프로그래밍 4주차 과제
//시작단이 끝 단보다 큰 경우와 작은 경우의 구구단을 조건문과 이중 for문을 활용해 출력하는 예제를
//함수를 이용해 출력하는 과제
#include <iostream>
using namespace std;

void show_gugudan(int start, int end); //구구단 출력 함수
void draw_line(); // 줄바꿈과 구분선을 출력하는 함수

int main(void)
{
	int start_dan = 0, end_dan = 0;

	cout << "시작 단을 입력하세요: ";
	cin >> start_dan;
	cout << "끝 단을 입력하세요: ";
	cin >> end_dan;

	show_gugudan(start_dan, end_dan);

	return 0;
}

void show_gugudan(int start, int end)
{
	if (start <= end)
	{
		for (int mul = 1; mul <= 9; mul++)
		{
			for (int i = start; i <= end; i++)
			{
				cout << i << "*" << mul << "=" << i * mul << "\t";
			}
			cout << "\n";
		}

		draw_line();

		for (int i = start; i <= end; i++)
		{
			for (int mul = 1; mul <= 9; mul++)
			{
				cout << i << "*" << mul << "=" << i * mul << "\t";
			}
			cout << "\n";
		}
	}

	else if (start > end)
	{
		for (int mul = 1; mul <= 9; mul++)
		{
			for (int i = start; i >= end; i--)
			{
				cout << i << "*" << mul << "=" << i * mul << "\t";
			}
			cout << "\n";
		}

		draw_line();

		for (int i = start; i >= end; i--)
		{
			for (int mul = 1; mul <= 9; mul++)
			{
				cout << i << "*" << mul << "=" << i * mul << "\t";
			}
			cout << "\n";
		}
	}
}

void draw_line()
{
	cout << "\n----------------------------------------------------------------------\n\n";
}