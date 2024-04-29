#include <iostream>

using namespace std;

int main() {
    unsigned char K = 0x72;

    bool bit5 = (K & (1 << 4)) != 0;
    bool bit4 = (K & (1 << 3)) != 0;
    bool bit3 = (K & (1 << 2)) != 0;
    bool bit2 = (K & (1 << 1)) != 0;


    int combination = (bit5 << 3) | (bit4 << 2) | (bit3 << 1) | bit2;
    cout << "Hexadecimal representation of combination: " << hex << combination << endl;

 
    K &= ~(1 << 4); 
    K &= ~(1 << 3); 
    K |= (1 << 2);  
    K &= ~(1 << 1); 

    
    cout << "New value of variable K: " << hex << static_cast<int>(K) << endl;

    return 0;
}

