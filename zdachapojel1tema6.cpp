#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
    SetConsoleOutputCP(1251);
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    float a[n];
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            cout << "Array is not sorted" << endl;
            break;
        }
    }

    return 0;
}

