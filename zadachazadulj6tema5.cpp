#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cmath>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
    SetConsoleOutputCP(1251);
    double x = 0.0; 
    cout << "Enter the number x: "; 
    cin >> x; 
    int count { 0 }; 
    do { 
        ++count; 
        x *= 10; 
    } while(static_cast<int>(x) % 10 != 0 ); 
    cout << "The number of digits after the decimal point is " << --count; 
    return 0; 
}

