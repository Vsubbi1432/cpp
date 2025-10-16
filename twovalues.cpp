#include <iostream>
using namespace std;

// Template function to find maximum of two values
template <typename T>
T myMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 10, y = 20;
    float f1 = 3.5f, f2 = 7.2f;
    double d1 = 5.55, d2 = 2.22;
    char c1 = 'A', c2 = 'Z';

    cout << "Max(int): " << myMax(x, y) << endl;
    cout << "Max(float): " << myMax(f1, f2) << endl;
    cout << "Max(double): " << myMax(d1, d2) << endl;
    cout << "Max(char): " << myMax(c1, c2) << endl;

    return 0;
}

