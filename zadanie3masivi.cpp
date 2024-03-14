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
        cout << "�������� ���: ";
        cin.ignore();  
        cin.getline(name, sizeof(name) - 1);

        cout << "�������� ��� �������: (0-������, 1-����������, 2-���������): ";
        cin >> contractType;

        cout << "�������� ������������: (1-��������, 2-��������): ";
        cin >> nationality;

        cout << "�������� �������: ";
        cin >> salary;
    }

    
    void displayData() const {
        cout << "���: " << name << endl;
        cout << "��� �������: " << contractType << endl;
        cout << "������������: " << nationality << endl;
        cout << "�������: " << salary << endl;
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

    cout << "�������� ���� ���������: ";
    cin >> numEmployees;

    
    Company* employees = new Company[numEmployees];

    
    for (int i = 0; i < numEmployees; ++i) {
        cout << "�������� ����� �� �������� " << i + 1 << ":\n";
        employees[i].inputData();
    }

    
    for (int i = 0; i < numEmployees; ++i) {
        cout << "�������� " << i + 1 << ":\n";
        employees[i].displayData();
        cout << endl;
    }

   
    int foreignWorkersCount = Company::countForeignWorkers(employees, numEmployees);
    cout << "���� �������� �������� ��� �������: " << foreignWorkersCount << endl;

  
    delete[] employees;

    return 0;
}

