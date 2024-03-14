#include <iostream>
#include <windows.h>

using namespace std;

class Company {
private:
    char name[30];
    int contractType;  
    int nationality;   
    double salary;

public:
   
    Company() {}

   
    void inputData() {
        cout << "Въведете име: ";
        cin.ignore();  
        cin.getline(name, sizeof(name) - 1);

        cout << "Въведете вид договор: (0-Срочен, 1-Граждански, 2-Безсрочен): ";
        cin >> contractType;

        cout << "Въведете националност: (1-Българин, 2-Чужденец): ";
        cin >> nationality;

        cout << "Въведете заплата: ";
        cin >> salary;
    }

    
    void displayData() const {
        cout << "Име: " << name << endl;
        cout << "Вид договор: " << contractType << endl;
        cout << "Националност: " << nationality << endl;
        cout << "Заплата: " << salary << endl;
    }

    
    static int countForeignWorkers(const Company* employees, int size) {
        int foreignCount = 0;
        for (int i = 0; i < size; ++i) {
            if (employees[i].nationality == 2) {
                foreignCount++;
            }
        }
        return foreignCount;
    }
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
    int numEmployees;

    cout << "Въведете брой работници: ";
    cin >> numEmployees;

    
    Company* employees = new Company[numEmployees];

    
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Въведете данни за работник " << i + 1 << ":\n";
        employees[i].inputData();
    }

    
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Работник " << i + 1 << ":\n";
        employees[i].displayData();
        cout << endl;
    }

   
    int foreignWorkersCount = Company::countForeignWorkers(employees, numEmployees);
    cout << "Брой чужденци работещи във фирмата: " << foreignWorkersCount << endl;

  
    delete[] employees;

    return 0;
}

