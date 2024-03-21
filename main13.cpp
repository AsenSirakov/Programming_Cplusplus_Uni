#include <iostream>
#include <windows.h>
#include <math.h>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	SetConsoleOutputCP(1251);
	double v= 400;
	cout<<"Speed is "<<v<<endl;
	double m=0.005;
	cout<<"Mass is "<<m<<endl;
	double s=0.8;
	cout<<"Lenght is"<<s<<endl;
	double a = (v*v)/(2*s);
	cout<<"Acceleration "<<a<<endl;
	double F=m*a;
	cout<<"Power is "<<F<<endl;
	
	return 0;
}
