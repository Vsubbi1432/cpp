#include <iostream>
using namespace std;

class A {
    int a, b;
    double cgpa;

public:
    A() {
        a = 10;
        b = 20;
        cgpa = 0.00;
    }

    A(int x, int y) {
        a = x;
        b = y;
        cgpa = 0.00; 
    }

    A(int p) {
        a = 0;
        b = p;
        cgpa = 4.00;
    }

    A(double q) {
        a = 30;
        b = 40;
        cgpa = q;
    }

    A(double q, int x1, int y1) {
        a = x1;
        b = y1;
        cgpa = q;
    }

    void display() {
        cout << "a = " << a << ", b = " << b << ", cgpa = " << cgpa << endl;
    }
};

int main() {
    A one;
    A two(20);
    A three(45, 92);
    A four(8.42, 20, 30); 
    A five(9.11, 60, 70);

    one.display();
    two.display();
    three.display();
    four.display();
    five.display();

    return 0;
}
