#include <iostream>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	SetConsoleOutputCP(1251);
   	float a[8],sum=0.0, avarage;
    for(int i=0;i<8;i++)
	{	
		cout<<"a["<<i<<"]=";
		cin>>a[i];
		sum+=a[i];
    }         
	avarage = sum/8;
	cout<<"Average="<<avarage<<endl;
	for(int i=0;i<8;i++)
	{
	double big= a[i];
	if(big>avarage)
	{
		cout<<"The bigger number is->"<<big<<endl;
		cout<<"The number is with index->"<<i<<endl;
    }
		
}


}
