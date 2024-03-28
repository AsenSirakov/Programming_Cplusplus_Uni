#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;
int multbytwo(int *a, int *b)
{
	int c =(*a)*2;
	int d =(*b)*2;
	*a=c;
	*b=d;
}
int main()
{
SetConsoleOutputCP(1251); 
    int a,b;
    cout<<"Input a->"<<endl;
    cin>>a;
    cout<<"Input b->"<<endl;
    cin>>b;
    multbytwo(&a,&b);
    cout<<"Double à å->"<<a<<endl;
    cout<<"Dobule b e->"<<b<<endl;
    return 0;
}
