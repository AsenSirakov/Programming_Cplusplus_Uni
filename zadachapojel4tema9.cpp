#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <iostream>
using namespace std;
void reverse(const string& str) {
  size_t numOfChars = str.size();

  if(numOfChars == 1) {
    cout << str << endl;
  }
  else {
    cout << str[numOfChars - 1];
    reverse(str.substr(0, numOfChars - 1));
  }
}
int main() {
  SetConsoleOutputCP(1251);
  string str;
  cout << "Enter symbols->" << endl;
  getline(cin, str);
  reverse(str);
  return 0;    
}

