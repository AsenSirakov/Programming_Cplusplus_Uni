#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int pwr(int n, int b)
{
    if (b != 0)
        return (n*pwr(n, b-1));
    else
        return 1;
}
int main()
{
	SetConsoleOutputCP(1251);
    int n, b, result;
    cout << "Input number ";
    cin >> n;

    cout << "enter power";
    cin >> b;

    result = pwr(n,b);
    cout << n << "pow" << b << " = " << result;
    return 0;
}
