//��ü�������α׷��� ����1
//Data Type �� Size ���
//�̸�: ������
//�й�: 12181407
//�ۼ���¥: 2023-03-10
//���ϸ�: 12181407_������_DataType���.docx

#include <iostream>
using namespace std;

int main(void)
{
	int a = 10;
	float b = 3.5f;
	char c = 'A';
	cout << "\n <====== Data Type ======>";
	cout << "\n int size    : " << sizeof(int);
	cout << "\n long size   : " << sizeof(long);
	cout << "\n float size  : " << sizeof(int);
	cout << "\n char size   : " << sizeof(long);

	cout << "\n <====== Variable ======>";
	cout << "\n int size    : " << sizeof(a);
	cout << "\n long size   : " << sizeof(b);
	cout << "\n char size   : " << sizeof(c);
	
	cout << "\n <====== Constant ======>";
	cout << "\n int size    :" << sizeof(23);
	cout << "\n double size :" << sizeof(3.5);
	cout << "\n float size  :" << sizeof(3.5f);
	cout << "\n char size   :" << sizeof('A');
	cout << "\n string size :" << sizeof("Apple");

	return 0;
}