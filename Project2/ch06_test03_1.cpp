// ��ǰ C++ ���α׷��� 6�� �ǽ����� 3��-(1)
#include <iostream>
#include <string>
using namespace std;

int big(int a, int b)
{
	int max = a < b ? b : a;
	if (max < 100)
		return max;
	else
		return 100;
}

int big(int a, int b, int c)
{
	int max = a < b ? b : a;
	if (max < c)
		return max;
	else
		return c;
}

int main()
{
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}