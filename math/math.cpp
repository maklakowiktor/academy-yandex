#include <iostream>
#include <cmath>

double calculateDiscriminant(double a, double b, double c) {
    return (b * b) - (4 * a * c);
}

double calculateRoot(double a, double b, double c) {
    double discriminant = calculateDiscriminant(a, b, c);
    if (discriminant < 0) {
        std::cout << "No real roots";
        return 0;
    } else if (discriminant == 0) {
        return -b / (2 * a);
    } else {
        double root1 = (-b + std::sqrt(discriminant)) / (2 * a);
        double root2 = (-b - std::sqrt(discriminant)) / (2 * a);
        std::cout << "Roots: " << root1 << ", " << root2;
        return root1;
    }
}

int main() {
    // TODO: Implement square root function
    double a = 1;
    double b = 2;
    double c = 1;
    
    double root = calculateRoot(a, b, c);
    std::cout << "Root: " << root;
    // ax^2 + bx + c
    // D = b^2 - (4 * a * c)
}