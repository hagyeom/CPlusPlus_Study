// 명품 C++ 프로그래밍 6장 실습문제 7번
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
	cout << min << "에서 " << max << "까지 랜덤한 정수 " << size << "개를 출력합니다." << endl;
	for (int i = 0; i < size; i++)
		cout << Random::nextInt(min, max) << ' ';
	cout << endl;

	cout << "알파벳을 램덤하게 " << size << "개를 출력합니다." << endl;
	for (int i = 0; i < size; i++)
		cout << Random::nextAlphabet() << ' ';
	cout << endl;

	cout << "랜덤한 실수를 " << size << "개를 출력합니다." << endl;
	for (int i = 0; i < size; i++)
		cout << Random::nextDouble() << ' ';
	cout << endl;
}