// main.cpp
#include <iostream>

double my_pow(double base, int exp) {
    if (exp >= 0) {
        double result = 1.0;
        for (int i = 0; i < exp; ++i) {
            result *= base;
        }
        return result;
    } else {
        double result = 1.0;
        for (int i = 0; i < -exp; ++i) {
            result *= base;
        }
        return 1.0 / result;
    }
}

int main() {
    std::cout << my_pow(2.0, -3) << std::endl; 
    return 0;
}