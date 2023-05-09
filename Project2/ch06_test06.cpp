// ��ǰ C++ ���α׷��� 6�� �ǽ����� 6��
#include <iostream>
using namespace std;
class ArrayUtility2
{
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int& retSize);
};
int* ArrayUtility2::concat(int s1[], int s2[], int size)
{
	int* arr = new int[size * 2];
	for (int i = 0; i < size; i++)
		arr[i] = s1[i];
	for (int i = size; i < size * 2; i++)
		arr[i] = s2[i - size];
	return arr;
}
int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize)
{
	int* arr = new int[size], idx = 0;
	for (int i = 0; i < size; i++)
	{
		bool check = false;
		for (int j = 0; j < size; j++)
			if (s1[i] == s2[j])
				check = true;
		if (!check)
			arr[idx++] = s1[i];
	}
	retSize = idx;
	return arr;
}
int main(void)
{
	int size = 5, retSize;
	int* x, * y;
	int* result1, * result2;
	x = new int[size], y = new int[size];
	cout << "������ " << size << " ���� �Է��϶�. �迭 x�� �����Ѵ�>>";
	for (int i = 0; i < size; i++)
		cin >> x[i];
	cout << "������ " << size << " ���� �Է��϶�. �迭 y�� �����Ѵ�>>";
	for (int i = 0; i < size; i++)
		cin >> y[i];
	result1 = ArrayUtility2::concat(x, y, size);
	cout << "��ģ ���� �迭�� ����Ѵ�" << endl;
	for (int i = 0; i < size * 2; i++)
		cout << result1[i] << ' ';

	result2 = ArrayUtility2::remove(x, y, size, retSize);
	cout << endl << "�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ " << retSize << endl;
	for (int i = 0; i < retSize; i++)
		cout << result2[i] << ' ';
}