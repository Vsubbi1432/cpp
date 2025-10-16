#include <iostream>
using namespace std;

class A {
public:
    int a;
    int *b;

    A(int x, int y) {
        a = x;
        b = new int;
        *b = y;
    }

    // Copy constructor with const reference
    A(const A &ob) {
        a = ob.a;
        b = new int;
        *b = *ob.b;
    }

    // Destructor to free allocated memory
    ~A() {
        delete b;
    }

    void display() {
        cout << "a=" << a << endl << "*b=" << *b << endl;
    }

    void update(int z) {
        *b = z;
    }
};

int main() {
    A obj(10, 20);
    A obj1(obj);
    obj.display();
    obj1.display();

    obj.update(80);

    obj1.display();
    obj.display();

    return 0;
}

