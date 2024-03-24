#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cmath>
#include <windows.h>
using namespace std;
int main(int argc, char** argv) {
SetConsoleOutputCP(1251);
    float kilogram,pound;
    cout<<"Enter pounds ";
    cin>>pound;
    kilogram=pound*.454;
    cout<<pound<<" Pound = "<<kilogram<<" kilos";
    return 0;
}
