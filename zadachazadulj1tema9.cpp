#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;
int big(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
    return big(a-b, b);
    return big(a, b-a);
}
int main()
{
	SetConsoleOutputCP(1251);
	int a;
	cout<<"input à->"<<endl;
	cin>>a;
    int b;
    cout<<"input b->"<<endl;
    cin>>b;
    cout<<"Greatest divisor of "<<a<<" and  "<<b<<" is-> "<<big(a, b);
    return 0;
}
