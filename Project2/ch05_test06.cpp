// ��ǰ C++ ���α׷��� 5�� �ǽ����� 6��
#include <iostream>
#include <string>
using namespace std;
// ���ڿ� a���� ���� c�� ã��, ���� c�� �ִ°����� ���� ������ �����Ѵ�. 
// ���� ���� c�� ã�� �� ���ٸ� success ���� �Ű� ������ false�� �����Ѵ�.
// ���� ã�� �Ǹ� success�� true�� �����Ѵ�.
char& find(char a[], char c, bool& success) {
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == c) {
			success = true;
			return a[i];
		}
	}
	success = false;
	return a[0]; // ���ڿ��� ù��° ���ڸ� ������ ����
}

int main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M�� �߰��� �� ����." << endl;
		return 0;
	}
	loc = 'M'; // 'M' ��ġ�� 'm' ���
	cout << s << endl; // "mike"�� ��µ�
}