// 명품 C++ 프로그래밍 5장 실습문제 6번
#include <iostream>
#include <string>
using namespace std;
// 문자열 a에서 문자 c를 찾아, 문자 c가 있는공간에 대한 참조를 리턴한다. 
// 만일 문자 c를 찾을 수 없다면 success 참조 매개 변수에 false를 설정한다.
// 물론 찾게 되면 success에 true를 설정한다.
char& find(char a[], char c, bool& success) {
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == c) {
			success = true;
			return a[i];
		}
	}
	success = false;
	return a[0]; // 문자열의 첫번째 문자를 참조로 리턴
}

int main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M을 발견할 수 없다." << endl;
		return 0;
	}
	loc = 'M'; // 'M' 위치에 'm' 기록
	cout << s << endl; // "mike"가 출력됨
}