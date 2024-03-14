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
        cout << "Enter name: ";
        cin.ignore();  
        cin.getline(name, sizeof(name) - 1);

        cout << "Enter contract type: (0-Limited, 1-Civil, 2-Unlimited): ";
        cin >> contractType;

        cout << "Enter nationality: (1-Bulgarian, 2-Foreigner): ";
        cin >> nationality;

        cout << "Enter salary: ";
        cin >> salary;
    }

    
    void displayData() const {
        cout << "Name: " << name << endl;
        cout << "Contract type: " << contractType << endl;
        cout << "Nationality: " << nationality << endl;
        cout << "Salary: " << salary << endl;
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

    cout << "Enter number of employees: ";
    cin >> numEmployees;

    
    Company* employees = new Company[numEmployees];

    
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Enter data for employee " << i + 1 << ":\n";
        employees[i].inputData();
    }

    
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Employee " << i + 1 << ":\n";
        employees[i].displayData();
        cout << endl;
    }

   
    int foreignWorkersCount = Company::countForeignWorkers(employees, numEmployees);
    cout << "Number of foreigners in the company: " << foreignWorkersCount << endl;

  
    delete[] employees;

    return 0;
}

