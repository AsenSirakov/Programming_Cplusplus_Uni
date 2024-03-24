#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cmath>
#include <windows.h>
using namespace std;

void sortNum(int& num1, int& num2, int& num3);

int main(int argc, char** argv) {
    SetConsoleOutputCP(1251);
    int firstNum, secondNum, thirdNum;
    cout << "Enter the first number: ";
    cin >> firstNum;
    cout << "Enter the second number: ";
    cin >> secondNum;
    cout << "Enter the third number: ";
    cin >> thirdNum;
    sortNum(firstNum, secondNum, thirdNum);
    cout << "Sorted numbers are: " << firstNum << ' ' << secondNum << ' ' << thirdNum << '\n';
}

void sortNum(int& num1, int& num2, int& num3)
{
    if (num1 > num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
}

