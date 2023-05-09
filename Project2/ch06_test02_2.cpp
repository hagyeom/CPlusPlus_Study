// 명품 C++ 프로그래밍 6장 실습문제 2번-(2)
#include <iostream>
#include <string>
using namespace std;

class Person {
    int id;
    double weight;
    string name;
public:
    Person(int _id = 0, string _name = "", double _weight = 20.5) : id(_id), weight(_weight), name(_name) {}
    void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};

int main() {
    Person grace(1, "Grace"), ashley(3, "Ashley"), helen(3, "Helen", 32.5);
    grace.show();
    ashley.show();
    helen.show();
    return 0;
}
