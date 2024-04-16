#include <iostream>
#include <iomanip>
#include <bitset>

using namespace std;

int main() {
    // Declare variable K as unsigned char and initialize it with value 0x72
    unsigned char K = 0x72;

    // Invert the value of the 0th bit of variable K
    K ^= 1;

    // Print the new value of variable K in hexadecimal format
    cout << "The new value of variable K in hexadecimal format: " << hex << setw(2) << setfill('0') << (int)K << endl;

    // Check the 6th bit of variable K and print a message about its value
    if (K & (1 << 6)) {
        cout << "The 6th bit is set (has a value of 1)." << endl;
        // Turn off the 6th bit
        K &= ~(1 << 6);
        cout << "The 6th bit is cleared (has a value of 0)." << endl;
    } else {
        cout << "The 6th bit is cleared (has a value of 0)." << endl;
    }

    return 0;
}

