#include <iostream>
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    swapValues(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    float a = 1.5f, b = 2.5f;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    swapValues(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    double p = 3.14, q = 6.28;
    std::cout << "Before swap: p = " << p << ", q = " << q << std::endl;
    swapValues(p, q);
    std::cout << "After swap: p = " << p << ", q = " << q << std::endl;

    return 0;
}
