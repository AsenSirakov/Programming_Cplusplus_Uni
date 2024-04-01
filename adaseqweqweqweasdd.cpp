#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
struct student
{int facnom;
char name[26];
double marks[5];
};
void read_student(student&);
void print_student(const student&);
void sorttable(int n, student* []);
double average(double*);
int main()
{cout << setprecision(2) << setiosflags(ios::fixed);
student table[30];
student* ptable[30];
int n;
do
{cout << "number of students? ";
 cin >> n;
}while (n < 1 || n > 30);
int i;
for (i = 0; i <= n-1; i++)
{read_student(table[i]);
 ptable[i] = &table[i];
}
cout << "Table: \n";
for (i = 0; i <= n-1; i++)
{print_student(table[i]);
 cout << endl;
}
sorttable(n, ptable);
cout << "\n New Table: \n";
for (i = 0; i <= n-1; i++)
{print_student(*ptable[i]);
 cout << setw(7) << average(ptable[i]->marks) << endl;
}
return 0;
}
void sorttable(int n, student* a[])
{for (int i = 0; i <= n-2; i++)
{int k = i;
 double max = average(a[i]->marks);
 for (int j = i+1; j <= n-1; j++)
if (average(a[j]->marks) > max)
{max = average(a[j]->marks);
 k = j;
}
 student* x;
 x = a[i]; a[i] = a[k]; a[k] = x;
}
}

void read_student(student& s)
{cout << "fak. nomer: ";
cin >> s.facnom;
char p[100];
cin.getline(p, 100);
cout << "name: ";
cin.getline(s.name, 40);
for (int i = 0; i <= 5-1; i++)
{cout << i << " -th mark: ";
 cin >> s.marks[i];
}
}
void print_student(const student& stud)
{cout << setw(6) << stud.facnom << setw(30) << stud.name;
for (int i = 0; i <= 5-1; i++)
cout << setw(6) << stud.marks[i];
}
void sorttable(int n, student a[])
{for (int i = 0; i <= n-2; i++)
{int k = i;
 double max = average(a[i].marks);
 for (int j = i+1; j <= n-1; j++)
if (average(a[j].marks) > max)
{max = average(a[j].marks);
 k = j;
}
 student x = a[i]; a[i] = a[k]; a[k] = x;
}
}
double average(double* a)
{double s = 0;
for (int j = 0; j <= 5-1; j++)
s += a[j];
return s/5;
}

