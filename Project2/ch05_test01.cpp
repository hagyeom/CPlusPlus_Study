// 명품 C++ 프로그래밍 5장 실습문제 1번
#include <iostream>
#include <string>

using namespace std;

class Circle {
	int radius;
public:
	Circle():Circle(1) {}
	Circle(int r) { this->radius = r; }
	void show() { cout << "반지름 : " << radius << endl; }
};

void swap(Circle& a, Circle& b) {
	Circle tmp;

	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	Circle a(1), b(2);
	a.show();
	b.show();

	swap(a, b);
	a.show();
	b.show();
	return 0;
}