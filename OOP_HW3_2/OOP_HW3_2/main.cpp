//12181407 ������ ��ü�������α׷��� 3���� ��������
//���۴��� �� �ܺ��� ū ���, �������� ���ǹ��� ���� for���� Ȱ���� ����ϴ� ����
#include <iostream>
using namespace std;
int main(void)
{
	int start_dan = 0, end_dan = 0;

	cout << "���� ���� �Է��ϼ���: ";
	cin >> start_dan;
	cout << "�� ���� �Է��ϼ���: ";
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