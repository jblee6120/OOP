//객체지향프로그래밍 과제1
//Data Type 별 Size 출력
//이름: 이종범
//학번: 12181407
//작성날짜: 2023-03-10
//파일명: 12181407_이종범_DataType출력.docx

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