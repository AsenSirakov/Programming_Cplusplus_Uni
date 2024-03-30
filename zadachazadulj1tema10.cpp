#include <iostream>
#include<windows.h>
using namespace std;
void bubbleSort(int numbers[],int array_size)
{
 int temp;
 for (int i=1; i<array_size;i++)
 {
 for(int j=1;j<array_size;j++)
 {
 if(numbers[j-1]<numbers[j])
 {
 temp=numbers[j-1];
 numbers[j-1]=numbers[j];
 numbers[j]=temp;
 }
 }
 }
}
void read(int numbers[], int array_size)
{
 for (int i=0; i<array_size; i++)
 {
 cout<<"Enter elements ";
 cin>>numbers[i];
 }
}
void write(int numbers[], int array_size)
{
 for (int i=0; i<array_size; i++)
 {
 cout<<numbers[i]<<" ";
 }
}
int main()
{
 SetConsoleOutputCP(1251);
 int n;
 do
 {
 cout<<"Enter number of massives";
 cin>>n;
 }
 while (n<1);
 int a[n];
 read(a, n);
 bubbleSort(a,n);
 write(a,n);
 system("pause");
}
