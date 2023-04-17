//12181407 이종범 5주차 과제
#include <iostream>
using namespace std;

class Rectangle //Rectangle 클래스 선언
{
public:
	double width, height; //멤버변수를 public으로 선언
	double getArea(); //멤버함수도 public으로 선언
	Rectangle(); //생성자도 선언
};

Rectangle::Rectangle() { //생성자 구현부

}

double Rectangle::getArea() { //멤버함수 getArea()의 구현부
	return width * height; //넓이를 리턴해야하므로 넓이=폭*높이 리턴
}

int main(void)
{
	Rectangle rect; //객체 생성
	rect.width = 3; //멤버변수로 되어있는 폭의 값 설정
	rect.height = 5; //멤버변수로 되어있는 높이 값 설정
	cout << "사각형의 면적은 " << rect.getArea() << endl; //getArea()함수로 리턴되는 값을 넓이로 출력
}