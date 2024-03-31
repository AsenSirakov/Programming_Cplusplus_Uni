#include<iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{ const int n=100;
   char mas[n];
   int a,b,dyl,sred;
   SetConsoleOutputCP(1251);
    cout<<"Input char";gets(mas);
    dyl=strlen(mas);
    sred=dyl>>1;
    b=0;
    for (a=0;a<sred;a++)
     { if (mas[a]!=mas[dyl-a-1])
       {  b++;} 
     } 
  cout<<"Char '"<<mas; 
  if (b ?  cout<<"' Not palindrome.\n" :  cout<<"' is palindrome.\n");
  system("pause"); 
  return 0;
}
