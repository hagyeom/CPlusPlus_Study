// 명품 C++ 프로그래밍 6장 실습문제 2번-(1)
#include <iostream>
#include <string>
using namespace std;

class Person {
    int id;
    double weight;
    string name;
public:
    Person() : id(0), weight(0), name("") {} // 기본 생성자
    Person(int _id, string _name) : id(_id), weight(20.5), name(_name) {} // id와 name을 받는 생성자
    Person(int _id, string _name, double _weight) : id(_id), weight(_weight), name(_name) {} // id, name, weight를 받는 생성자
    void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};

int main() {
    Person grace(1, "Grace"), ashley(3, "Ashley"), helen(3, "Helen", 32.5);
    grace.show();
    ashley.show();
    helen.show();
}
