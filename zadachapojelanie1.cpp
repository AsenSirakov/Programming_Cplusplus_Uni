#include <iostream>
#include <windows.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
    SetConsoleOutputCP(1251);
    double ax = 9, ay = 1, bx = -1, by = 0, cx = 0, cy = 0;
    double a = sqrt(pow(bx - cx, 2) + pow(by - cy, 2));
    double b = sqrt(pow(ax - cx, 2) + pow(ay - cy, 2));
    double c = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    double p = (a + b + c) / 2;
    cout << "Semiperimeter p = " << p << endl;
    double r = sqrt(((p - a) * (p - b) * (p - c)) / p);
    cout << "Inradius r = " << r << endl;
    double S = p * r;
    cout << "Area S = " << S << endl;
    return 0;
}

