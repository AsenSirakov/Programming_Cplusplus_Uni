#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cmath>
#include <windows.h>
using namespace std;
int main(int argc, char** argv) {
SetConsoleOutputCP(1251);
	float miles;
	std::cout << "Enter miles";
	std::cin >> miles;
	float kilometers = miles * 1.6;
	std::cout << kilometers << " Kilometers";
}
