#include <iostream>
#include <cmath>

int main() {
    double L;

    std::cout << "Enter circumference L: ";
    std::cin >> L;

    double R = L / (2 * 3.14);

    double S = 3.14 * R * R;

    std::cout << "Circle radius R: " << R << std::endl;
    std::cout << "Area of a circle S: " << S << std::endl;

    return 0;
}
