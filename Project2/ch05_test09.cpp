// ��ǰ C++ ���α׷��� 5�� �ǽ����� 9��
#include <iostream>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value); // �Ű� ���� value�� ��� value�� �ʱ�ȭ�Ѵ�.
	Accumulator& add(int n); // value�� n�� ���� ���� �����Ѵ�.
	int get(); // ������ �� value�� �����Ѵ�.
};

Accumulator::Accumulator(int value) : value(value) {}

Accumulator&Accumulator::add(int n) {
	value += n;
	return *this;
}

int Accumulator::get() {
	return value;
}

int main() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7); // acc�� value ����� 28�� �ȴ�.
	cout << acc.get(); // 28 ���
}