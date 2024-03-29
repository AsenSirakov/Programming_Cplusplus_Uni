#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <bits/stdc++.h>
using namespace std;
int binomialCoeff(int n, int k)
{
    if (k > n)
        return 0;
    if (k == 0 || k == n)
        return 1;
    return binomialCoeff(n - 1, k - 1)
           + binomialCoeff(n - 1, k);
}
int main()
{
	SetConsoleOutputCP(1251);
	int n;
	cout<<"Enter n->";
	cin>>n;
	int k;
	cout<<"Enter k->";
	cin>>k;
    cout << " Coefficient (" << n << ", " << k << ") å "
         << binomialCoeff(n, k);
    return 0;
}
