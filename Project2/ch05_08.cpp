// ���� ����
#include <iostream>
using namespace std;

// �迭 s�� index ���� ������ ���� ������ �����ϴ� �Լ�
char& find(char s[], int index) {
	return s[index]; // ���� ���� (s[index] ������ ���� ����)
}

int main() {
	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 'S'; // name[0]='S'�� ����. find()�� ������ ��ġ�� ���� 'S' ����
	cout << name << endl;

	char& ref = find(name, 2); // ref�� name[2]�� ���� ����
	ref = 't'; // name = "site"
	cout << name << endl;
}