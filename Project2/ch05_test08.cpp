// ��ǰ C++ ���α׷��� �ǽ����� 8��
#include <iostream>
using namespace std;

class MyIntStack {
	int* p; // ���� �޸𸮷� ����� ������
	int size; // ������ �ִ� ũ��
	int tos; // ������ ž�� ����Ű�� �ε���
public:
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(const MyIntStack& s); // ���� ������
	~MyIntStack();
	bool push(int n); // ���� n�� ���ÿ� Ǫ���Ѵ�.
	// ������ �� �� ������ false��, �ƴϸ� true ����
	bool pop(int& n); // ������ ž�� �ִ� ���� n�� ���Ѵ�.
	// ���� ������ ��� ������ false��, �ƴϸ� true ����
};

MyIntStack::MyIntStack() : p(nullptr), size(0), tos(-1) {} // �⺻ ������

MyIntStack::MyIntStack(int size) : size(size),tos(-1){ // ������
	p = new int[size];
}

MyIntStack::MyIntStack(const MyIntStack& s){ // ���� ������
	size = s.size;
	p = new int[size];
	tos = s.tos;
	for (int i = 0; i <= tos; i++)
		p[i] = s.p[i];
}

MyIntStack::~MyIntStack() { // �Ҹ���
	delete[] p;
}

bool MyIntStack::push(int n) { // ���� n�� ���ÿ� Ǫ���Ѵ�.
	if (tos >= size - 1) // ������ �� �� ������
		return false;
	p[++tos] = n;
	return true;
}

bool MyIntStack::pop(int& n) { // ������ ž�� �ִ� ���� n�� ���Ѵ�.
	if (tos < 0) // ������ ��� ������
		return false;
	n = p[tos--];
	return true;
}

int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a; // ���� ����
	b.push(30);

	int n;
	a.pop(n); // ���� a ��
	cout << "���� a���� ���� �� " << n << endl;
	b.pop(n); // ���� b ��
	cout << "���� b���� ���� �� " << n << endl;
}