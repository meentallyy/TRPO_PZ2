#include <iostream>
#include <cassert>
#include "functions.h"

using namespace std;

int main() {

    cout << "Running tests..." << endl;

    assert(Add(2, 3) == 5);
    assert(Add(-1, 1) == 0);

    assert(Subtract(10, 4) == 6);
    assert(Subtract(0, 5) == -5);

    assert(Multiply(3, 5) == 15);
    assert(Multiply(-2, 4) == -8);

    assert(Divide(10, 2) == 5);
    assert(Divide(5, 2) == 2.5);

    assert(Power(2, 3) == 8);
    assert(Power(5, 0) == 1);

    cout << "All tests completed successfully." << endl;
    return 0;
}