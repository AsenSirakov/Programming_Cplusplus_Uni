#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
void printInitials(string str) 
{
    int len = str.length();
    str.erase(0, str.find_first_not_of(' '));
    str.erase(str.find_last_not_of(' ') + 1);
    string t = "";
    for (int i = 0; i < len; i++) 
    {
        char ch = str[i];
  
        if (ch != ' ')
            t = t + ch;
        else
        {
            cout << (char)toupper(t[0]) << ". ";
            t = "";
        }
    }
  
    string temp = "";
    for (int j = 0; j < t.length(); j++) 
    {
        if (j == 0) temp = temp + (char)toupper(t[0]);
        else
            temp = temp + (char)tolower(t[j]);
    }
    cout << temp << endl;
}
int main() 
{
	SetConsoleOutputCP(1251); 
    string str = "Asen Rosenov Sirakov";
    printInitials(str);
}
