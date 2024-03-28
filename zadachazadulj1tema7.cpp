#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
    SetConsoleOutputCP(1251);
    int a = 5;
    int b = 15;
    int* p;
    int* q;
    p = &a;
    q = &b; 
    cout << "a = " << *p << endl;
    cout << "b = " << *q << endl;
    *q = a;
    *p = 10;
    cout << "Value pointed by p after changing it = " << *p << endl;
    cout << "Value pointed by q after changing it without changing a = " << *q << endl;
    *p = *q;
    *q = 20;
    cout << "Value pointed by p after changing it without changing b = " << *p << endl;
    cout << "Value pointed by q after changing it = " << *q << endl;
    return 0;
}

