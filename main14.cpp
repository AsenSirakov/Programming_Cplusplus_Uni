#include <iostream>
#include <windows.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
    SetConsoleOutputCP(1251);
    double m = 1.5;
    cout<<"Mass is "<<m<<endl;
    double t =2;
    cout<<"Time is "<<t<<endl;
    double v0=3;
    cout<<"Initial velocity is "<<v0<<endl;
    double v=9;
    cout<<"Final velocity is "<<v<<endl;
    double deltaV =(v-v0);
    cout<<"Change in velocity is "<<deltaV<<endl;
    double deltaT =t;
    cout<<"Change in time is "<<deltaT<<endl;
    double a=(deltaV / deltaT);
    cout<<"Acceleration is "<<a<<endl;
    double s=((v*v)-(v0*v0))/(2*a);
    cout<<"Displacement is "<<s<<endl;
    double F=m*a;
    cout<<"Force is "<<F<<endl;
    double q=F*s;
    cout<<"Work is "<<q<<endl;
    double P = q /t;
    cout<<"Power is "<<P<<endl;
    return 0;
}

