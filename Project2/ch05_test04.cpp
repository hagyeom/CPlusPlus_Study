// ��ǰ C++ ���α׷��� 5�� �ǽ����� 4��
#include <iostream>
using namespace std;
// ���ڷ� �־��� a, b�� ������ true, �ƴϸ� false�� �����ϰ� ū ���� big�� ����.
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
	cout << "�� ������ �Է��ϼ���: ";
	cin >> num1 >> num2;
	if (bigger(num1, num2, big)) {
		cout << "�� ������ �����ϴ�." << endl;
	}
	else {
		cout << "���� ū ������ " << big << endl;
	}
	return 0;
}