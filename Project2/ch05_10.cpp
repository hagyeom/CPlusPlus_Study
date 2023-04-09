// ���� ���� �����ڸ� ����Ͽ� ���α׷��� ������ ����Ǵ� ���
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person{ // Person Ŭ���� ����
	char* name;
	int id;
public:
	Person(int id, const char* name); // ������
	~Person(); // �Ҹ���
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char*name){ // ������
	this->id = id;
	int len = strlen(name); // name�� ���� ����
	this->name = new char[len + 1]; // name ���ڿ� ���� �Ҵ�
	strcpy(this->name, name); // name�� ���ڿ� ����
}

Person::~Person() {
	if (name) // ���� name�� ���� �Ҵ�� �迭�� ������
		delete[] name; // ���� �Ҵ� �޸� �Ҹ�
} /* daughter�� �Ҹ�� �� �̹� ��ȯ�� �޸𸮸� �ٽ� ��ȯ�ϰ� �ǹǷ�, ���� �ð� ������ �߻��ϰ� ���α׷��� ������ ����ȴ�. */

void Person::changeName(const char*name){ // �̸� ����
	if (strlen(name) > strlen(this->name))
		return; // ���� name�� �Ҵ�� �޸𸮺��� �� �̸����� �ٲ� �� ����.
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae"); // father ��ü ����
	Person daughter(father); // daughter ��ü ���� ����. ���� ������ ȣ��

	cout << "daughter ��ü ���� ���� ----" << endl;
	father.show(); // father ��ü ���
	daughter.show(); // daugther ��ü ���

	daughter.changeName("Grace"); // daugther�� �̸��� "Grace"�� ����
	cout << "daughter �̸��� Grace�� ������ �� ----" << endl;
	father.show(); // father ��ü ���
	daughter.show(); // daughter ��ü ���

	return 0; // daughter, father ��ü �Ҹ�
}