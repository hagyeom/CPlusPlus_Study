// 명품 C++ 프로그래밍 실습문제 8번
#include <iostream>
using namespace std;

class MyIntStack {
	int* p; // 스택 메모리로 사용할 포인터
	int size; // 스택의 최대 크기
	int tos; // 스택의 탑을 가리키는 인덱스
public:
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(const MyIntStack& s); // 복사 생성자
	~MyIntStack();
	bool push(int n); // 정수 n을 스택에 푸시한다.
	// 스택이 꽉 차 있으면 false를, 아니면 true 리턴
	bool pop(int& n); // 스택의 탑에 있는 값을 n에 팝한다.
	// 만일 스택이 비어 있으면 false를, 아니면 true 리턴
};

MyIntStack::MyIntStack() : p(nullptr), size(0), tos(-1) {} // 기본 생성자

MyIntStack::MyIntStack(int size) : size(size),tos(-1){ // 생성자
	p = new int[size];
}

MyIntStack::MyIntStack(const MyIntStack& s){ // 복사 생성자
	size = s.size;
	p = new int[size];
	tos = s.tos;
	for (int i = 0; i <= tos; i++)
		p[i] = s.p[i];
}

MyIntStack::~MyIntStack() { // 소멸자
	delete[] p;
}

bool MyIntStack::push(int n) { // 정수 n을 스택에 푸시한다.
	if (tos >= size - 1) // 스택이 꽉 차 있으면
		return false;
	p[++tos] = n;
	return true;
}

bool MyIntStack::pop(int& n) { // 스택의 탑에 있는 값을 n에 팝한다.
	if (tos < 0) // 스택이 비어 있으면
		return false;
	n = p[tos--];
	return true;
}

int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a; // 복사 생성
	b.push(30);

	int n;
	a.pop(n); // 스택 a 팝
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n); // 스택 b 팝
	cout << "스택 b에서 팝한 값 " << n << endl;
}