#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <bits/stdc++.h>
using namespace std;
int arraySortedOrNot(int arr[], int n)
{
    if (n == 1 || n == 0)
        return 1;
    if (arr[n - 1] < arr[n - 2])
        return 0;
    return arraySortedOrNot(arr, n - 1);
}
int main()
{
	SetConsoleOutputCP(1251);
    int arr[] = { 20, 23, 23, 45, 78, 88 };
    int n = sizeof(arr) / sizeof(arr[0]);
    if (arraySortedOrNot(arr, n))
        cout << "Sorted "<<endl;
    else
        cout << "Not sorted"<<endl;
}
