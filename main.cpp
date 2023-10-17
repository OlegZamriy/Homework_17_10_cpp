#include <iostream>

int main() {
    double v; 
    double t; 
    double a; 

    std::cout << "Enter speed (v): ";
    std::cin >> v;

    std::cout << "Enter time (t): ";
    std::cin >> t;

    std::cout << "Enter acceleration (a): ";
    std::cin >> a;

    double S = v * t + (a * t * t) / 2.0;

    std::cout << "Distance S: " << S << std::endl;

    return 0;
}
