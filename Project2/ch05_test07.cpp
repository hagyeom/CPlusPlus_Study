// 명품 C++ 프로그래밍 실습문제 7번
#include <iostream>
using namespace std;

class MyIntStack {
	int p[10]; // 최대 10개의 정수 저장
	int tos; // 스택의 꼭대기를 가리키는 인덱스
public:
	MyIntStack();
	bool push(int n); // 정수 n 푸시. 꽉 차 있으면 false, 아니면 true 리턴
	bool pop(int& n); // 팝하여 n에 저장. 스택이 비어 있으면 false, 아니면 true 리턴
};

MyIntStack::MyIntStack() {
	tos = -1; // 스택이 비어 있음을 나타내는 값.
}

bool MyIntStack::push(int n) {
	if (tos == 9) {
		return false;
	}
	else {
		tos++;
		p[tos] = n; // 새로운 정수를 스택의 꼭대기에 추가. tos 인덱스 위치에 새로운 정수 n을 저장
		return true;
	}
}

bool MyIntStack::pop(int& n) {
	if (tos == -1) {
		return false;
	}
	else {
		n = p[tos]; // 스택의 꼭대기에 있는 정수를 가져오는 것을 의미
		// 꼭대기에 있는 정수는 tos 인덱스 위치에 저장되어 있으므로, p[tos]를 n에 저장
		tos--; // tos를 하나 감소시켜서 스택의 꼭대기 위치를 변경
		return true;
	}
}

int main() {
	MyIntStack a;
	for(int i=0;i<11;i++) { // 11개를 푸시하면, 마지막에는 stack full이 된다.
		if (a.push(i)) cout << i << ' '; // 푸시된 값 에코
		else cout << endl << i + 1 << " 번째 stack full" << endl;
	}
	int n;
	for(int i=0;i<11;i++) { // 11개를 팝하면, 마지막에는 stack empty가 된다. 
		if (a.pop(n)) cout << n << ' '; // 팝 한 값 출력
		else cout << endl << i + 1 << " 번째 stack empty";
	}
	cout << endl;
}