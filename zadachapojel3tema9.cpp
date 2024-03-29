#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;
  void digit(int n, int k)
  {
  	SetConsoleOutputCP(1251);
    if (n < 0)
      n = -1 * n;

    if (n % 10 == k)
    {
      cout << "Contained"<<endl;
      return;
    }
    else if (n / 10 > 0)
       digit(n / 10, k);
    else
      cout << "Not contained"<< endl;
 }
 int main()
{
    digit(3421,8);
    return 0;
}
