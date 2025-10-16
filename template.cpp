#include<iostream>
using namespace std;

class A {
    int x;
public:                   
    A(int x) {
        this->x = x;
    }
    void display() {
        cout << "x = " << x << endl;
    }
};

class B {
    double x, y;           
public:
    B(double x, double y) {
        this->x = x;
        this->y = y;
    }
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    A obj1(20);
    obj1.display();

    B obj2(65, 79);        .......
    obj2.display();

    return 0;
}

