#include <iostream>
#include "primeFactorization.h"
using namespace std;

int main() {
    // Write your main here
    long long n;
    cout << "Input the integer:>>";
    cin >> n;
    primeFactorization number;
    number.setNum(n);
    number.factorization();
    return 0;
}
