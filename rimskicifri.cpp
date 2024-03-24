#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cmath>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
    SetConsoleOutputCP(1251);
    int number;

    string numberInRomanNumeral;

    do {
        cout << "Enter a number between 1 and 100: ";
        cin >> number;
    } while (number < 1 || number > 100);

    if (number >= 10 && number < 20)
        numberInRomanNumeral = "X";
    else if (number >= 20 && number < 30)
        numberInRomanNumeral = "XX";
    else if (number >= 30 && number < 40)
        numberInRomanNumeral = "XXX";
    else if (number >= 40 && number < 50)
        numberInRomanNumeral = "XL";
    else if (number >= 50 && number < 60)
        numberInRomanNumeral = "L";
    else if (number >= 60 && number < 70)
        numberInRomanNumeral = "LX";
    else if (number >= 70 && number < 80)
        numberInRomanNumeral = "LXX";
    else if (number >= 80 && number < 90)
        numberInRomanNumeral = "LXXX";
    else if (number >= 90 && number < 100)
        numberInRomanNumeral = "XC";
    else if (number == 100)
        numberInRomanNumeral = "C";

    if (number > 10)
        number = number % 10;

    if (number == 1)
        numberInRomanNumeral += "I";
    else if (number == 2)
        numberInRomanNumeral += "II";
    else if (number == 3)
        numberInRomanNumeral += "III";
    else if (number == 4)
        numberInRomanNumeral += "IV";
    else if (number == 5)
        numberInRomanNumeral += "V";
    else if (number == 6)
        numberInRomanNumeral += "VI";
    else if (number == 7)
        numberInRomanNumeral += "VII";
    else if (number == 8)
        numberInRomanNumeral += "VIII";
    else if (number == 9)
        numberInRomanNumeral += "IX";

    cout << numberInRomanNumeral << endl;

    system("pause");

    return 0;
}

