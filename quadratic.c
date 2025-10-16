#include<iostream> // For input/output operations (cin, cout)
#include <cmath>    // For sqrt() function (square root)
#include <iomanip>  // For std::fixed and std::setprecision

int main() {
    double a, b, c; // Declare variables for coefficients
    double discriminant;
    double root1, root2;

    // Get input from the user
    std::cout << "Enter coefficient a: ";
    std::cin >> a;
    std::cout << "Enter coefficient b: ";
    std::cin >> b;
    std::cout << "Enter coefficient c: ";
    std::cin >> c;

    // Check if 'a' is zero (it's not a quadratic equation then)
    if (a == 0) {
        std::cout << "Error: Coefficient 'a' cannot be zero for a quadratic equation." << std::endl;
        // If a is 0, it's a linear equation: bx + c = 0 => x = -c/b
        if (b != 0) {
            std::cout << "This is a linear equation. Root = " << -c / b << std::endl;
        } else if (c == 0) {
            std::cout << "Infinite solutions (0 = 0)." << std::endl;
        } else {
            std::cout << "No solution (0 = non-zero)." << std::endl;
        }
        return 1; // Indicate an error or non-quadratic case
    }

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Set precision for output
    std::cout << std::fixed << std::setprecision(4);

    // Determine the nature of the roots and calculate them
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + std::sqrt(discriminant)) / (2 * a);
        root2 = (-b - std::sqrt(discriminant)) / (2 * a);
        std::cout << "Roots are real and different." << std::endl;
        std::cout << "Root 1 = " << root1 << std::endl;
        std::cout << "Root 2 = " << root2 << std::endl;
    } else if (discriminant == 0) {
        // One real root (repeated root)
        root1 = -b / (2 * a); // Both roots are the same
        std::cout << "Roots are real and same." << std::endl;
        std::cout << "Root 1 = Root 2 = " << root1 << std::endl;
    } else {
        // Two distinct complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = std::sqrt(-discriminant) / (2 * a);
        std::cout << "Roots are complex and different." << std::endl;
        std::cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << std::endl;
        std::cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }

    return 0; // Indicate successful execution
}

