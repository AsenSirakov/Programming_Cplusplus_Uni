#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cmath>
#include <windows.h>
using namespace std;
int main(int argc, char** argv) {
SetConsoleOutputCP(1251);
float gallons;
float liters;
cout << "Enter gallons";
cin >> gallons; 
liters=3.7854*gallons;
cout << "Liters are=" << liters <<endl;
return 0;
}
