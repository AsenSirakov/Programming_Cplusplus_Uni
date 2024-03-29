#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;
int fib(int n)
{
	 SetConsoleOutputCP(1251);
	 if(n==1) return 0;
	 	else if (n==2) return 1;
	 	else return fib(n-1)+fib(n-2);
	
}
int main(int argc,char** argv)
{
	SetConsoleOutputCP(1251);
	int n;
	do{
		cout<<"n=";
		cin>>n;
	}
	while(n<1);
	cout<<fib(n)<<endl;
	return 0;
}
