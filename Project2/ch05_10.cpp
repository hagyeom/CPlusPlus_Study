// 얕은 복사 생성자를 사용하여 프로그램이 비정상 종료되는 경우
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person{ // Person 클래스 선언
	char* name;
	int id;
public:
	Person(int id, const char* name); // 생성자
	~Person(); // 소멸자
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char*name){ // 생성자
	this->id = id;
	int len = strlen(name); // name의 문자 개수
	this->name = new char[len + 1]; // name 문자열 공간 할당
	strcpy(this->name, name); // name에 문자열 복사
}

Person::~Person() {
	if (name) // 만일 name에 동적 할당된 배열이 있으면
		delete[] name; // 동적 할당 메모리 소멸
} /* daughter가 소멸될 때 이미 반환한 메모리를 다시 반환하게 되므로, 실행 시간 오류가 발생하고 프로그램이 비정상 종료된다. */

void Person::changeName(const char*name){ // 이름 변경
	if (strlen(name) > strlen(this->name))
		return; // 현재 name에 할당된 메모리보다 긴 이름으로 바꿀 수 없다.
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae"); // father 객체 생성
	Person daughter(father); // daughter 객체 복사 생성. 복사 생성자 호출

	cout << "daughter 객체 생성 직후 ----" << endl;
	father.show(); // father 객체 출력
	daughter.show(); // daugther 객체 출력

	daughter.changeName("Grace"); // daugther의 이름을 "Grace"로 변경
	cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
	father.show(); // father 객체 출력
	daughter.show(); // daughter 객체 출력

	return 0; // daughter, father 객체 소멸
}