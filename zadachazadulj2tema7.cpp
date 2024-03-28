#include <iostream>
#include <windows.h>
using namespace std;
int main(int argc, char** argv) {
	SetConsoleOutputCP(1251);
int a;
int b;
cout<<"Input a"<<endl;
cin>>a;
cout<<"Input b"<<endl;
cin>>b;
int* p;
int* q;
int* r;
int* s;
int* t;
p = &a;
q = &b;
r = &b;
s = &b;
cout<<"a= "<<p<<endl;
cout<<"b="<<q<<endl;
cout<<"p = " <<*p<< endl;
cout<<"q = " <<*q<<endl;
cout<<"r = " <<*r<<endl;
cout<<"s = " <<*s<<endl;
cout<<"First is ="<<*p<<endl;
cout<<"Second is ="<<*q<<endl;
r = &a;
*s = a;
cout<<"Third is="<<r<<endl;
cout<<"Fourth is="<<*s<<endl;
 } 
