#include <iostream>
#include<iomanip>
#include <cstdlib>
#include <windows.h>
#include <cmath>
using namespace std;
int main() {
	SetConsoleOutputCP(1251); 
  char ch;
  int c = 0;
  cin.get(ch);
  do {
    if (ch == ',') c++;
    cin.get(ch);
  } while (ch != '\n');
  cout << "There are" << c << "commas.\n";
}
