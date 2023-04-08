/* 참조 매개 변수로 평균 리턴하기 */

#include <iostream>
using namespace std;

bool average(int a[], int size, int& avg) { // 리턴 타입을 bool로 하고 평균값을 전달하기 위해 참조 매개 변수를 추가함
	if (size <= 0)
		return false;
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += a[i];
	avg = sum / size; // 참조 매개 변수 avg에 평균값 전달
	return true;
}

int main() {
	int x[] = { 0,1,2,3,4,5 };
	int avg;
	if (average(x, 6, avg))cout << "평균은 " << avg << endl; // avg에는 평균이 넘어오고, average()는 true 리턴
	else cout << "매개 변수 오류" << endl;

	if (average(x, -2, avg))cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류 " << endl;
}