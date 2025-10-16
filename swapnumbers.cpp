#include <iostream>
using namespace std;

// Template function to swap two values
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    float f1 = 1.5f, f2 = 3.7f;
    double d1 = 4.44, d2 = 8.88;

    cout << "Before swapping (int): x=" << x << " y=" << y << endl;
    swapValues(x, y);
    cout << "After swapping  (int): x=" << x << " y=" << y << endl << endl;

    cout << "Before swapping (float): f1=" << f1 << " f2=" << f2 << endl;
    swapValues(f1, f2);
    cout << "After swapping  (float): f1=" << f1 << " f2=" << f2 << endl << endl;

    cout << "Before swapping (double): d1=" << d1 << " d2=" << d2 << endl;
    swapValues(d1, d2);
    cout << "After swapping  (double): d1=" << d1 << " d2=" << d2 << endl;

    return 0;
}

