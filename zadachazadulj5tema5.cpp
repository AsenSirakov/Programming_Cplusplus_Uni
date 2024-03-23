#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cmath>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
    SetConsoleOutputCP(1251);
    float value, sum;
    float average, minimum, maximum;
    int count;
    sum = 0.0;
    count = 0;
    cout << "Enter a number: ";
    cin >> value;
    minimum = value;
    maximum = value;
    while (value > 0.0) {
        sum += value;
        count++;
        if (value > maximum)
            maximum = value;
        else if (value < minimum)
            minimum = value;
        cout << "Enter a number: ";
        cin >> value;
    }
    if (count == 0)
        cout << "No input" << endl;
    else {
        average = sum / count;
        cout << "Average value is " << average << endl;
        cout << "Minimum value is " << minimum << endl;
        cout << "Maximum value is " << maximum << endl;
    }
}

