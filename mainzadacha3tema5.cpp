#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);	
    cout << " y = x-5 -> 1" << endl;
    cout << " y = sin(x) -> 2" << endl;
    cout << " y = cos(x) -> 3" << endl;
    cout << " y = exp(x) -> 4" << endl;
    cout << "Choose 1, 2, 3, or 4: ";
    int i;
    cin >> i;
    if (i == 1 || i == 2 || i == 3 || i == 4) {
        cout << "x = ";
        double x;
        cin >> x;
        double y;
        switch (i) {
            case 1: y = x - 5; break;
            case 2: y = sin(x); break;
            case 3: y = cos(x); break;
            case 4: y = exp(x); break;
        }
        cout << "y = " << y << endl;
    }
    else {
        cout << "Error" << endl;
        return 1;
    }
    return 0;
}

