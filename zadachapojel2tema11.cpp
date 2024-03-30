#include<iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;
int main()
{typedef char duma[10];
duma a[20];
cout << "n= ";
int n;
cin >> n;
for(int i = 0; i <= n-1; i++)
 {//cout << "" << i ;
 cin >> a[i];
 }
double average = 0;
for (int i = 0; i <= n-1; i++)
 average = average + atoi(a[i]);
cout << average/n << '\n';
return 0;
}
