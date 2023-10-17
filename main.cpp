#include <iostream>

int main() {
    double R1, R2, R3;

    std::cout << "Enter R1: ";
    std::cin >> R1;

    std::cout << "Enter R2: ";
    std::cin >> R2;

    std::cout << "Enter R3: ";
    std::cin >> R3;

    double R0 = 1.0 / (1.0 / R1 + 1.0 / R2 + 1.0 / R3);

    std::cout << "Total resistance R0: " << R0 << " OM " << std::endl;

    return 0;
}