#include <iostream>
using namespace std;

class A {
    int a;
public:
    A() {
        cout << "constructor called" << endl;
    }
    ~A() {
        cout << "Destructor called......" << endl;
    }
};

int main() {
    A a1;
    A a2;
    return 0;
}

