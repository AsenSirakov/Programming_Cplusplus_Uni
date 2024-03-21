#include <iostream>
#include <windows.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	SetConsoleOutputCP(1251);
	double h=(40);
	cout<<"The height is"<<h<<endl;
	double g=9.8;
	cout<<"Earth's gravity'"<<g<<endl;
	double Ek=800;
	cout<<"Ek e"<<Ek<<endl;
	double m = Ek/(g*h);
	cout<<"Mass is "<<m<<endl;
	double v2=g*h;
	cout<<"Speed is "<<sqrt(v2)<<endl;
	
	return 0;
}
