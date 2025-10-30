#include <iostream>
#include <locale.h>
#include "functions.h"

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    int a = 5, b = -3;

    cout << "Сумма: " << Add(a, b) << endl;
    cout << "Разность: = " << Subtract(a, b) << endl;
    cout << "Умножение: = " << Multiply(a, b) << endl;
    cout << "Деление: " << Divide(a, b) << endl;
    cout << "Степень: " << Power(a, b) << endl;

    return 0;
}