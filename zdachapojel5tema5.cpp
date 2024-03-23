#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cmath>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
    SetConsoleOutputCP(1251);
    int year;

    cout << "Enter the year: ";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";

    return 0;
}

