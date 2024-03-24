#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cmath>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
    SetConsoleOutputCP(1251);
    float value;
    float maximum;
    cout << "Enter a number: ";
    cin >> value;
    maximum = value;
    while (value > 0.0) {
        if (value > maximum)
            maximum = value;
        cout << "Enter a number: ";
        cin >> value;
    }    
    cout << "Maximum value is " << maximum << endl;
}

