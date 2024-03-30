#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <bits/stdc++.h>
using namespace std;
int bin(int arr[], int l, int r, int x)
{
    if (r < l)
        return -1;
    int mid = l + (r - l) / 2;
    if (arr[mid] == x)
        return mid;
    if (arr[mid] > x)
        return bin(arr, l, mid - 1, x);
    return bin(arr, mid + 1, r, x);
}
int countO(int arr[], int n, int x)
{
    int ind = bin(arr, 0, n - 1, x);
    if (ind == -1)
        return 0;
    int count = 1;
    int left = ind - 1;
    while (left >= 0 && arr[left] == x)
        count++, left--;
    int right = ind + 1;
    while (right < n && arr[right] == x)
        count++, right++;
 
    return count;
}
int main()
{
    int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    cout << countO(arr, n, x);
    return 0;
}
