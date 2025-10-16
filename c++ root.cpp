#include <iostream>
#include <cmath>    
using namespace std;

class Quadratic {
private:
    float a, b, c;

public:
    Quadratic(float x, float y, float z) {
        a = x;
        b = y;
        c = z;
    }
    void findRoots() {
        float discriminant = b * b - 4 * a * c;
		cout << "Given quadratic equation: "<< a << "x^2 + " << b << "x + " << c << " = "0/n";

        if (a == 0) {
            cout << "Not a quadratic equation (a = 0).\n";
        }
        else if (discriminant > 0) {
            float root1 = (-b + sqrt(discriminant)) / (2 * a);
            float root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Roots are real and distinct:\n";
            cout << "Root 1 = " << root1 << "\n";
            cout << "Root 2 = " << root2 << "\n";
        }
        else if (discriminant == 0) {
            float root = -b / (2 * a);
            cout << "Roots are real and equal:\n";
            cout << "Root = " << root << "\n";
        }
        else {
            float realPart = -b / (2 * a);
            float imagPart = sqrt(-discriminant) / (2 * a);
            cout << "Roots are complex and imaginary:\n";
            cout << "Root 1 = " << realPart << " + " << imagPart << "i\n";
            cout << "Root 2 = " << realPart << " - " << imagPart << "i\n";
        }
    }
};

int main() {
    float a, b, c;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    Quadratic eq(a, b, c);
    eq.findRoots();

    return 0;
}

