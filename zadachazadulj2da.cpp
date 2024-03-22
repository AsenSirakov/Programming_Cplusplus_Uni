#include <iostream>
#include <windows.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
    SetConsoleOutputCP(1251);
    int a;
    cout << "Enter a four-digit number: ";
    cin >> a;
    int s, d, e, h;
    s = a % 10;
    d = a / 10 % 10;
    e = a / 100 % 10;
    h = a / 1000;
    cout << "Thousands=" << h << endl;
    cout << "Hundreds=" << s << endl;
    cout << "Tens=" << d << endl;
    cout << "Units=" << e << endl;
    int r = 1;
    int v = 0;
    if (s == d || s == e || s == h || d == s || d == e || d == h || e == s || e == d || e == h || h == s || h == d || h == e) {
        cout << v << endl;
    }
    else {
        cout << r << endl;
    }
    
    return 0;
}

