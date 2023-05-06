// 명품 C++ 프로그래밍 5장 실습문제 4번
#include <iostream>
using namespace std;
// 인자로 주어진 a, b가 같으면 true, 아니면 false를 리턴하고 큰 수는 big에 전달.
bool bigger(int a, int b, int& big) {
	if (a == b) {
		return true;
	}
	else {
		big = (a > b) ? a : b;
		return false;
	}
}

int main() {
	int num1, num2, big;
	cout << "두 정수를 입력하세요: ";
	cin >> num1 >> num2;
	if (bigger(num1, num2, big)) {
		cout << "두 정수는 같습니다." << endl;
	}
	else {
		cout << "가장 큰 정수는 " << big << endl;
	}
	return 0;
}