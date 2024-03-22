#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cmath>
#include <windows.h>
using namespace std;
int main(int argc, char** argv) {
SetConsoleOutputCP(1251);
  float value;
  float minimum;
  cout << "Enter value: ";
  cin >> value;
  minimum = value;
  while (value > 0.0)
    {
      if (value < minimum)
         minimum = value;
      cout << "Enter value: ";
      cin >> value;
    }    
      cout << "Smallest number is  " << minimum << endl;
    
}

