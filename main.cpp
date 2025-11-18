// main.cpp
#include <iostream>

double my_pow(double base, unsigned int exp) {
    if (exp == 0) return 1.0;
    double result = 1.0;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}

int main() {
    std::cout << my_pow(2.5, 3) << std::endl;
    return 0;
}