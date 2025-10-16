#include <iostream>
using namespace std;

class base {
public:
    int b;
    base() {
        b = 123;
    }

    void print() {
        cout << "this is base class" << endl;
    }

    virtual void display() = 0; 
};

class dc1 : public base {
public:
    void display() override {
        cout << "this is the derived class 1" << endl;
    }
};

class dc2 : public base {
public:
    void display() override {
        cout << "this is the derived class 2" << endl;
    }
};

int main() {
    dc1 d1;
    d1.display();
    d1.print();

    dc2 d2;
    d2.display();
    d2.print();

    return 0;
}

