#include <iostream>
#include <windows.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
    SetConsoleOutputCP(1251);
    double x;
    cout << "Enter a number greater than 0 (integer part is considered)" << endl;
    cin >> x;
    cout << "Finding the fractional part" << endl;
    int i = (x * 10);
    int b = i % 10;
    cout << "The fractional part of the number entered x is = " << b << endl;
    return 0;
}

