#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;
void solution(int a, int b, int n)
{
	 SetConsoleOutputCP(1251);
   for (int i = 0; i * a <= n; i++) {
        if ((n - (i * a)) % b == 0) {
            cout << "x = " << i << ", y = "
                 << (n - (i * a)) / b;
            return;
        }
    }
 
    cout << "No solution";
}
int main()
{
    int a = 5, b = 2, n = 7;
    solution(a, b, n);
    return 0;
}
