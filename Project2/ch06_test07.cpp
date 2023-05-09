// ��ǰ C++ ���α׷��� 6�� �ǽ����� 7��
#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;
class Random
{
public:
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlphabet();
	static double nextDouble();
};
int Random::nextInt(int min, int max)
{
	return rand() % max + min;
}
char Random::nextAlphabet()
{
	int choice = rand() % 2;
	if (choice)
		return (char)(rand() % 26 + 65);
	else
		return (char)(rand() % 26 + 97);
}
double Random::nextDouble()
{
	return ((double)rand() / (double)32767);
}
int main(void)
{
	int min = 1, max = 100, size = 10;
	Random::seed();
	cout << min << "���� " << max << "���� ������ ���� " << size << "���� ����մϴ�." << endl;
	for (int i = 0; i < size; i++)
		cout << Random::nextInt(min, max) << ' ';
	cout << endl;

	cout << "���ĺ��� �����ϰ� " << size << "���� ����մϴ�." << endl;
	for (int i = 0; i < size; i++)
		cout << Random::nextAlphabet() << ' ';
	cout << endl;

	cout << "������ �Ǽ��� " << size << "���� ����մϴ�." << endl;
	for (int i = 0; i < size; i++)
		cout << Random::nextDouble() << ' ';
	cout << endl;
}