#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
void countWords(char *, int);
int main()
{
	SetConsoleOutputCP(1251);
	const int SIZE = 100;
	char userString[SIZE];
	cout << "Enter string up to 100 words.\n" << endl;
	cin.getline(userString, SIZE);

	countWords(userString, (int) SIZE);

	return 0;
}
void countWords(char *strPtr, int SIZE)
{

int count1;

	for (int count = 0; count < 50; count++)
	{
		if(*(strPtr + count) == *(strPtr + count + count1))
		{
			count1++;
		}
		else
		{
			count++;
		}
	}
	cout << "Most common word is : " << *strPtr + count1 << endl;
}

