//12181407 ������ 5���� ����
#include <iostream>
using namespace std;

class Rectangle //Rectangle Ŭ���� ����
{
public:
	double width, height; //��������� public���� ����
	double getArea(); //����Լ��� public���� ����
	Rectangle(); //�����ڵ� ����
};

Rectangle::Rectangle() { //������ ������

}

double Rectangle::getArea() { //����Լ� getArea()�� ������
	return width * height; //���̸� �����ؾ��ϹǷ� ����=��*���� ����
}

int main(void)
{
	Rectangle rect; //��ü ����
	rect.width = 3; //��������� �Ǿ��ִ� ���� �� ����
	rect.height = 5; //��������� �Ǿ��ִ� ���� �� ����
	cout << "�簢���� ������ " << rect.getArea() << endl; //getArea()�Լ��� ���ϵǴ� ���� ���̷� ���
}