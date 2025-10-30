#include <iostream>
#include <cassert>
#include <locale.h>
#include "functions.h"

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    cout << "Запуск тестов" << endl;

    assert(Add(2, 3) == 5);
    assert(Add(-1, 1) == 0);

    assert(Subtract(10, 4) == 6);
    assert(Subtract(0, 5) == -5);

    assert(Multiply(3, 5) == 15);
    assert(Multiply(-2, 4) == -8);

    assert(Divide(10, 2) == 5);
    assert(Divide(5, 2) == 2.5);

    cout << "Все тесты пройдены." << endl;
    return 0;
}