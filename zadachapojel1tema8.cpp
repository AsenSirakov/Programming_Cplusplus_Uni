#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

double square(double a, double b) {
    return pow(a, b);
}

int main() {
    SetConsoleOutputCP(1251);

    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "Result of raising a to the power of b: " << square(a, b) << endl;

    return 0;
}

