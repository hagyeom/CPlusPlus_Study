// ��ǰ C++ ���α׷��� �ǽ����� 7��
#include <iostream>
using namespace std;

class MyIntStack {
	int p[10]; // �ִ� 10���� ���� ����
	int tos; // ������ ����⸦ ����Ű�� �ε���
public:
	MyIntStack();
	bool push(int n); // ���� n Ǫ��. �� �� ������ false, �ƴϸ� true ����
	bool pop(int& n); // ���Ͽ� n�� ����. ������ ��� ������ false, �ƴϸ� true ����
};

MyIntStack::MyIntStack() {
	tos = -1; // ������ ��� ������ ��Ÿ���� ��.
}

bool MyIntStack::push(int n) {
	if (tos == 9) {
		return false;
	}
	else {
		tos++;
		p[tos] = n; // ���ο� ������ ������ ����⿡ �߰�. tos �ε��� ��ġ�� ���ο� ���� n�� ����
		return true;
	}
}

bool MyIntStack::pop(int& n) {
	if (tos == -1) {
		return false;
	}
	else {
		n = p[tos]; // ������ ����⿡ �ִ� ������ �������� ���� �ǹ�
		// ����⿡ �ִ� ������ tos �ε��� ��ġ�� ����Ǿ� �����Ƿ�, p[tos]�� n�� ����
		tos--; // tos�� �ϳ� ���ҽ��Ѽ� ������ ����� ��ġ�� ����
		return true;
	}
}

int main() {
	MyIntStack a;
	for(int i=0;i<11;i++) { // 11���� Ǫ���ϸ�, ���������� stack full�� �ȴ�.
		if (a.push(i)) cout << i << ' '; // Ǫ�õ� �� ����
		else cout << endl << i + 1 << " ��° stack full" << endl;
	}
	int n;
	for(int i=0;i<11;i++) { // 11���� ���ϸ�, ���������� stack empty�� �ȴ�. 
		if (a.pop(n)) cout << n << ' '; // �� �� �� ���
		else cout << endl << i + 1 << " ��° stack empty";
	}
	cout << endl;
}