#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
    SetConsoleOutputCP(1251);
    int pos = 0, neg = 0;
    float a[10], sum = 0;

    for (int i = 0; i < 10; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    for (int i = 0; i < 10; i++) {
        if (a[i] > 0) {
            pos++;
            sum += a[i];
        } else {
            neg++;
        }
    }

    cout << "Number of positive elements -> " << pos << endl;
    cout << "Sum of positive elements -> " << sum << endl;
    cout << "Number of negative elements -> " << neg << endl;

    return 0;
}

