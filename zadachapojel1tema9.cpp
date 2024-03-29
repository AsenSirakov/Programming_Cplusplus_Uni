#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;
int add(int n) {
    if(n != 0)
        return n + add(n - 1);
    return 0;
}
int main() {
    SetConsoleOutputCP(1251);
    int n;
    cout << "enter n";
    cin >> n;
    cout << "sumå= " << add(n);
    
    return 0;
}

