#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cmath>
#include <windows.h>
using namespace std;
int main(int argc, char** argv) {
	SetConsoleOutputCP(1251);
	int multipl = 1;
	int add = 0;
    for(int i=1;i<=8;i++)
    {
    	add = add+i;
    	multipl = multipl*i;
	}
		cout<<"Umnojenieto e="<<multipl<<endl;
		cout<<"Subiraneto e="<<add<<endl;
	return 0;
}
