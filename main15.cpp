#include <iostream>
#include <windows.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
    SetConsoleOutputCP(1251);
    double a;
    cout<<"Enter acceleration value ";
    cin>>a;
    double v;
    cout<<"Enter initial velocity ";
    cin>>v;
    double t = v;
    cout<<"Time for this velocity is "<<t<<endl;
    double s = v*t;
    cout<<"Displacement for this velocity is "<<s<<endl;
    return 0;
}

