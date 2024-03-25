#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
    SetConsoleOutputCP(1251);
    int n;
    cout << "Enter the number of grades: ";
    cin >> n;
    float a[n], sum = 0.0, average;

    for (int i = 0; i < n; i++) {
        cout << "Grade[" << i << "] = ";
        cin >> a[i];
        if (a[i] < 2 || a[i] > 6) {
            cout << "Invalid grade" << endl;
            return 0;
        }
        sum += a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == 2) {
            cout << "At least one student has a grade of 2" << endl;
            break;
        }
    }

    average = sum / n;
    cout << "Average grade = " << average << endl;

    return 0;
}

