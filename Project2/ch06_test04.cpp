// 명품 C++ 프로그래밍 6장 실습문제 4번
#include <iostream>
using namespace std;
class MyVector
{
	int* mem;
	int size;
public:
	MyVector(int n = 100, int val = 0);
	~MyVector() { delete[] mem; }
	void show();
};
MyVector::MyVector(int n, int val)
{
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++)
		mem[i] = val;
}
void MyVector::show()
{
	cout << size << endl;
	for (int i = 0; i < size; i++)
		cout << mem[i] << ' ';
	cout << endl;
}
int main(void)
{
	MyVector v1, v2(10, 5);
	v1.show();
	v2.show();
}