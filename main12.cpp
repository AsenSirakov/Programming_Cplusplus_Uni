#include <iostream>
#include <windows.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	SetConsoleOutputCP(1251);
	double s = 200;
	cout<<"Distance"<<s<<endl;
	double F=250;
	cout<<"Power is"<<F<<endl;
	double t=20;
	cout<<"Time is"<<t<<endl;
	double A = F*s;
	cout<<"The work is "<<A<<endl;
	double P=A/t;
	cout<<"Pow is "<<P<<endl;
	
	return 0;
}
