#include "functions.h"

/**
  @file functions.cpp
  @brief Реализация математических функций
*/

int PLUS(int a, int b) {
    return a + b;
}

int MINUS(int a, int b) {
    return a - b;
}

int Multiply(int a, int b) {
    return a * b;
}

double Divide(int a, int b) {
    if (b == 0)
        return 0;
    return static_cast<double>(a) / b;
}

double Power(int a, int b) {
    if (b == 0) return 1;

    double result = 1;

    int exp = b;
    if (b < 0) {
        exp = -b;
    }

    for (int i = 0; i < exp; i++) {
        result *= a;
    }

    if (b < 0) {
        return 1.0 / result;
    }

    return result;
}