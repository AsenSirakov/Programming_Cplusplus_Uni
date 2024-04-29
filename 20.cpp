#include <iostream>

using namespace std;

int main() {
    unsigned char DDRD = 0x0;
    DDRD |= (1 << 2);
    DDRD |= (1 << 3); 
    DDRD |= (1 << 4); 

    DDRD ^= (1 << 1); 

   
    cout << "DDRD register value: " << hex << static_cast<int>(DDRD) << endl;

    return 0;
}

