#include <iostream>
#include <windows.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
const double PI = 3.1415;
int main(int argc, char** argv) {
	SetConsoleOutputCP(1251);
	double h=(280);
	cout<<"Height is "<<h<<endl;
	double R=(6340);
	cout<<"Radius"<<R<<endl;
	double r=R+h;
	cout<<"The orbit is "<<r<<endl;
	double v;
	cout<<"Average speed is";
	cin>>v;
	double s = 2*PI*r;
	double t=s/v;
	cout<<"Time to cover the distance"<<t<<endl;
	
	return 0;
}
