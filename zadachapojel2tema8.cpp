#include <iostream>
#include <windows.h>
using namespace std;

bool isPrime(int num);

int main() {
    SetConsoleOutputCP(1251);
    int num;
    bool flag;
    cout << "Enter a positive integer: ";
    cin >> num;
    flag = isPrime(num);
    if (flag == true)
        cout << num << " is a prime number" << endl;
    else
        cout << num << " is not a prime number" << endl;
    return 0;
}

bool isPrime(int num) {
    bool flag = true;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}

