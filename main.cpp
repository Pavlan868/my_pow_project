#include <iostream>

double my_pow(double base, unsigned int exp) {
    double result = 1.0;
    for (unsigned int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    std::cout << my_pow(2.5, 3) << std::endl;
    return 0;
}