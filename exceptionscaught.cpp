#include <iostream>
using namespace std;

class MyException {
    int code;
public:
    MyException() {
        code = 0;
        cout << "Default constructor called." << endl;
    }

    MyException(int c) {
        code = c;
        cout << "Parameterized constructor called with code: " << code << endl;
    }

    ~MyException() {
        cout << "Destructor called for code: " << code << endl;
    }

    void showMessage() const {
        cout << "Exception with code: " << code << endl;
    }
};

int main() {
    cout << "----- Throwing object by value -----" << endl;
    try {
        throw MyException(101);
    } catch (MyException e) {
        cout << "Caught object by value." << endl;
        e.showMessage();
    }

    cout << "\n----- Throwing object by reference -----" << endl;
    try {
        MyException obj(202);
        throw obj;
    } catch (MyException &e) {
        cout << "Caught object by reference." << endl;
        e.showMessage();
    }

    cout << "\n----- Throwing object using pointer -----" << endl;
    try {
        MyException *ptr = new MyException(303);
        throw ptr;
    } catch (MyException *e) {
        cout << "Caught object using pointer." << endl;
        e->showMessage();
        delete e;
    }

    cout << "\nProgram ended normally." << endl;
    return 0;
}


