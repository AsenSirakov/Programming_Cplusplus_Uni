#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <stdio.h>      
#include <stdlib.h>  
#include <string.h> 
using namespace std;    
char strvalues[][20] = {"dog","mercedes","house","water"};
int main ()
{
  SetConsoleOutputCP(1251);
  char * pItem;
  char key[20] = "dog";
  qsort (strvalues, 4, 20, (int(*)(const void*,const void*)) strcmp);
  pItem = (char*) bsearch (key, strvalues, 4, 20, (int(*)(const void*,const void*)) strcmp);
  if (pItem!=NULL)
      cout<<pItem<<"contained "<<endl;
  else
    cout<<key<<"not contained"<<endl;
  return 0;
  
  }
