#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
    SetConsoleOutputCP(1251);
    cout << "Choose 1 for Mathematician." << endl;
    cout << "Choose 2 for Computer Scientist." << endl;
    cout << "Choose 3 for Electrical Engineers." << endl;
    cout << "Choose 4 for Doctor." << endl;
    cout << "Choose 5 for French language." << endl;
    cout << "Choose 6 for History." << endl;
    cout << "Enter the number corresponding to the department->" << endl;

    int m;
    cin >> m;
    switch (m) {
        case 1:
            cout << "Mathematician" << endl;
            break;
        case 2:
            cout << "Computer Scientist" << endl;
            break;
        case 3:
            cout << "Electrical Engineers" << endl;
            break;
        case 4:
            cout << "Doctor" << endl;
            break;
        case 5:
            cout << "French language" << endl;
            break;
        case 6:
            cout << "History" << endl;
            break;
    }

    int n;
    cout << "Enter the number of grades" << endl;
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
    average = sum / n;
    cout << "Average grade = " << average << endl;

    return 0;
}

