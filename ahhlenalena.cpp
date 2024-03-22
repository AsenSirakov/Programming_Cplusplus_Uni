#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cmath>
#include <windows.h>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    SetConsoleOutputCP(1251);	
    double lev = 1;
    double dollars = 1.79549;
    double euros = 1.95583;
    double pounds = 2.53405;

    string BGN = "BGN";
    string USD = "USD";
    string EUR = "EUR";
    string GBP = "GBP";

    string input_currency;
    string new_currency;

    double amount;

    cout << "Enter the amount in Bulgarian Lev -" << endl;
    cin >> amount;
    cout << "Enter the currency to convert to: BGN, USD, EUR, GBP" << endl;
    cin >> input_currency;

    if (input_currency == BGN) {
        amount = amount * lev;
    }
    else if (input_currency == USD) {
        amount = amount * dollars;
    }
    else if (input_currency == EUR) {
        amount = amount * euros;
    }
    else if (input_currency == GBP) {
        amount = amount * pounds;
    }

    cout << "Enter the currency to convert to: BGN, USD, EUR, GBP" << endl;
    cin >> new_currency;

    if (new_currency == BGN) {
        amount = amount / lev;		
    }
    else if (new_currency == USD) {
        amount = amount / dollars;		
    }
    else if (new_currency == EUR) {
        amount = amount / euros;		
    }
    else if (new_currency == GBP) {
        amount = amount / pounds;	
    }

    cout << fixed << setprecision(2) << amount;

    return 0;
}

