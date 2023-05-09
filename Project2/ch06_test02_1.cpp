// ��ǰ C++ ���α׷��� 6�� �ǽ����� 2��-(1)
#include <iostream>
#include <string>
using namespace std;

class Person {
    int id;
    double weight;
    string name;
public:
    Person() : id(0), weight(0), name("") {} // �⺻ ������
    Person(int _id, string _name) : id(_id), weight(20.5), name(_name) {} // id�� name�� �޴� ������
    Person(int _id, string _name, double _weight) : id(_id), weight(_weight), name(_name) {} // id, name, weight�� �޴� ������
    void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};

int main() {
    Person grace(1, "Grace"), ashley(3, "Ashley"), helen(3, "Helen", 32.5);
    grace.show();
    ashley.show();
    helen.show();
}
