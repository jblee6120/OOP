//12181407 ������ ��ü�������α׷��� 4���� ����
//���۴��� �� �ܺ��� ū ���� ���� ����� �������� ���ǹ��� ���� for���� Ȱ���� ����ϴ� ������
//�Լ��� �̿��� ����ϴ� ����
#include <iostream>
using namespace std;

void show_gugudan(int start, int end); //������ ��� �Լ�
void draw_line(); // �ٹٲް� ���м��� ����ϴ� �Լ�

int main(void)
{
	int start_dan = 0, end_dan = 0;

	cout << "���� ���� �Է��ϼ���: ";
	cin >> start_dan;
	cout << "�� ���� �Է��ϼ���: ";
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