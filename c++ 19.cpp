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
        MyException ex("Reference object");
        throw ex;
    }
    catch (MyException &e) {
        cout << "Exception caught (by reference)" << endl;
    }
    return 0;
}
