#include <iostream>
#include <bitset>

using namespace std;

int main() {
    unsigned char K = 0x72;
    K ^= 1;
    cout << "The new value of variable K in hexadecimal format: " << hex << (int)K << endl;
    if (K & (1 << 6)) {
        cout << "The 6th bit is set (has a value of 1)." << endl;
        K &= ~(1 << 6);
        cout << "The 6th bit is cleared (has a value of 0)." << endl;
    } else {
        cout << "The 6th bit is cleared (has a value of 0)." << endl;
    }

    return 0;
}

