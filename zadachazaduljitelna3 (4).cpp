#include <iostream>
#include <windows.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
    SetConsoleOutputCP(1251);
    double ax = -2, ay = 2.5, bx = 5, by = 2.5, cx = 1, cy = -1.5;
    double a = sqrt(pow(bx - cx, 2) + pow(by - cy, 2));
    double b = sqrt(pow(ax - cx, 2) + pow(ay - cy, 2));
    double c = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    double p = (a + b + c) / 2;
    double r = sqrt(((p - a) * (p - b) * (p - c)) / p);
    cout << "Inradius r = " << r << endl;
    double S = r * p;
    double R = ((a * b * c) * S) / 4;
    cout << "Circumradius R = " << R << endl;
    return 0;
}

