#include <iostream>
#include <cassert>
#include "functions.h"

using namespace std;

int main() {

    cout << "Running tests..." << endl;

    assert(PLUS(2, 3) == 5);
    assert(PLUS(-1, 1) == 0);

    assert(MINUS(10, 4) == 6);
    assert(MINUS(0, 5) == -5);

    assert(Multiply(3, 5) == 15);
    assert(Multiply(-2, 4) == -8);

    assert(Divide(10, 2) == 5);
    assert(Divide(5, 2) == 2.5);

    assert(Power(2, 3) == 8);
    assert(Power(5, -3) == 0.008);

    cout << "All tests completed successfully." << endl;
    return 0;
}