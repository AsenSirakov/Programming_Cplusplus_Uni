#include <iostream>
#include<windows.h>
using namespace std;
struct 
{
int number;
char name[41];
double achievement;
char country[21];
 }c[101];
 int main ()
{SetConsoleOutputCP(1251);
char buf[5];
int n;
cout<<" How much skiers ";
cin>> n;
 int i;
for (i=1; i<=n; i++)
   {c[i].achievement = i;
 cout<<"Number of skier ["<<i<<"]: ";
cin>> c[i].number;
cin.getline (buf,4);
cout<<"Name  ["<<i<<"]: ";
cin.getline (c[i].name,40);
cout<<"Achievment["<<i<<"]: ";
 cin>> c[i].achievement;
cin.getline (buf,4);
cout<<"Country["<<i<<"]: ";
cin.getline (c[i].country,20); }
for (i=1; i<=n; i++)
cout<<"n "<<c[i].number<<"  "<<c[i].name<<"  " <<c[i].achievement<<"  "<<c[i].country<<endl;
   int S=0;
   int br=0;
   int Sr;
   for (i=1; i<=n; i++)
 if (c[i].achievement > 0)
{
S = S + c[i].achievement;
br++;
 }
Sr = S/br;
cout<<"Average achievment is"<<Sr<<endl;
for (i=1; i<=n; i++)
if (c[i].achievement > Sr)
cout<<"Skiers with achievments below average are  "<<c[i].number<<"  "<<c[i].name<<"  "<<c[i].achievement<<"  "<<c[i].country;
 return 0;
}
