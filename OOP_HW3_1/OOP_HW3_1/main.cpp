//12181407 ������ ��ü�������α׷��� 3���� �⺻����
//�������� ���� ���� ���� ���̰� �� ���� ���� ���� ��� ���� for���� ����Ͽ� ����ϴ� ����
#include <iostream>
using namespace std;

int main(void)
{
	int start_dan, end_dan = 0;

	cout << "���� ���� �Է��ϼ���: ";
	cin >> start_dan;
	cout << "�� ���� �Է��ϼ���: ";
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