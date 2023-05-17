// ������ �Լ� �����
#include <iostream>
using namespace std;

class Rect;
bool equals(Rect r, Rect s); // equals() �Լ� ����

class Rect{ // Rect Ŭ���� ���� 
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend bool equals(Rect r, Rect s); // ������ �Լ� ����
};

bool equals(Rect r,Rect s) { // �ܺ� �Լ�
	if (r.width == s.width && r.height == s.height)return true;
	else return false;
}

int main() {
	Rect a(3, 4), b(4, 5);
	if (equals(a, b))cout << "equal" << endl;
	else cout << "not equal" << endl;
}