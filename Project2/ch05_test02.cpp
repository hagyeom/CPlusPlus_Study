// 명품 C++ 프로그래밍 5장 실습문제 2번
#include <iostream>
using namespace std;

double half(double &n) {
	n /= 2;
	return n;
}

int main() {
	double n = 20;
	half(n); // n의 반값을 구해 n을 바꾼다.
	cout << n; // 10이 출력된다.
}