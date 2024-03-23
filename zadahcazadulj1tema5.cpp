#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cmath>
#include <windows.h>
using namespace std;
int main(int argc, char *argv[])
{
SetConsoleOutputCP(1251);
double PI=3.14;
int ax=0, ay=0, bx=25, by=0, cx=0, cy=50;
double a=sqrt((bx-cx)*(bx-cx)+(by-cy)*(by-cy));
double b=sqrt((cx-ax)*(cx-ax)+(cy-ay)*(cy-ay));
double c=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
cout<<"a="<<a<<endl	;
cout<<"b="<<b<<endl;
cout<<"c="<<c<<endl;
double Alpha=acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c));
double alpha = (Alpha*180)/PI;
cout<<"ALPHA="<<alpha<<endl;
double Beta=acos((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c));
double beta=(Beta*180)/PI;
cout<<"BETA="<<beta<<endl;
double Gamma=acos((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b));
double gamma=(Gamma*180)/PI;
cout<<"GAMMA="<<gamma<<endl;
if(alpha||beta||gamma==90)
{
	cout<<"pravougulen"<<endl;
}
else if(alpha||beta||gamma>90)
{
	cout<<"Tupougulen"<<endl;
}
else if(alpha&&beta&&gamma < 90)
{
	cout<<"ostrougulen"<<endl;
}
system("PAUSE");
return EXIT_SUCCESS;
}
