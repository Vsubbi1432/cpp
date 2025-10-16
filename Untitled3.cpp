#include <iostream>
using namespace std;

class MyException {
public:
    MyException() {
        cout << "Default constructor called" << endl;
    }
    MyException(string msg) {
        cout << "Parameterized constructor called: " << msg << endl;
    }
    ~MyException() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    try {
        MyException *ex = new MyException("Pointer object");
        throw ex;
    }
    catch (MyException *e) {
        cout << "Exception caught (pointer object)" << endl;
        delete e;
    }
    return 0;
}
