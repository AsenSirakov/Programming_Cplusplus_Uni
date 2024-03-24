#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cmath>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
    SetConsoleOutputCP(1251);
    float v; 
    cout << "Enter a number: ";
    cin >> v; 
    if (v == static_cast<int>(v)) 
        cout << "The number is an integer."; 
    else 
        cout << "The number is not an integer."; 
}

