//12181407 이종범 객체지향프로그래밍 3주차 기본과제
//구구단의 시작 단이 낮은 단이고 끝 단이 높은 단인 경우 이중 for문을 사용하여 출력하는 과제
#include <iostream>
using namespace std;

int main(void)
{
	int start_dan, end_dan = 0;

	cout << "시작 단을 입력하세요: ";
	cin >> start_dan;
	cout << "끝 단을 입력하세요: ";
	cin >> end_dan;

	for (int multnum = 1; multnum <= 9; multnum++)
	{
		for (int i = start_dan; i <= end_dan; i++)
		{
			cout << i << "*" << multnum << "=" << i * multnum << " ";
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
	return 0;
}