#include "functions.h"

int Add(int a, int b) {
    return a + b;
}

int Subtract(int a, int b) {
    return a - b;
}

int Multiply(int a, int b) {
    return a * b;
}

double Divide(int a, int b) {
    if (b == 0)
        return 0; // простая защита от деления на ноль
    return static_cast<double>(a) / b;
}

double Power(int a, int b) {
    if (b == 0) return 1;

    double result = 1;
    for (int i = 0; i < b; ++i) {
        result *= a;
    }
    return result;
}