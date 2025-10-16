#include<iostream>
using namespace std;
template <class T>
class Swapper {
private:
    T a, b;

public:
    Swapper(T x, T y) {
        a = x;
        b = y;
    }
    void swapValues() {
        T temp = a;
        a = b;
        b = temp;
    }
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {

    Swapper<int> intSwap(10, 20);
    cout << "Before swap (int): ";
    intSwap.display();
    intSwap.swapValues();
    cout << "After swap (int):  ";
    intSwap.display();
    Swapper<float> floatSwap(1.5, 3.7);
    cout << "\nBefore swap (float): ";
    floatSwap.display();
    floatSwap.swapValues();
    cout << "After swap (float):  ";
    floatSwap.display();
    Swapper<double> doubleSwap(5.55, 9.99);
    cout << "\nBefore swap (double): ";
    doubleSwap.display();
    doubleSwap.swapValues();
    cout << "After swap (double):  ";
    doubleSwap.display();
    Swapper<char> charSwap('A', 'B');
    cout << "\nBefore swap (char): ";
    charSwap.display();
    charSwap.swapValues();
    cout << "After swap (char):  ";
    charSwap.display();
      return 0;
}

