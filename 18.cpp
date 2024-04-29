#include <iostream>

using namespace std;

int main() {
    unsigned char K = 0x72; 

    
    K ^= 0x01;

    
    cout << "The new value of variable K after inverting the zeroth bit: " << hex << (int)K << endl;


    if ((K >> 5) & 1) { 
        cout << "The 6th bit of variable K is set (has value 1)." << endl;
        
        K &= ~(1 << 5);
        cout << "Now the 6th bit of variable K is cleared (has value 0)." << endl;
    } else {
        cout << "The 6th bit of variable K is cleared (has value 0)." << endl;
    }

    return 0;
}

