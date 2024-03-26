#include <iostream>
#include <cstring>

using namespace std;

class Employee {
protected:
    int number;
    char name[40];

public:
    Employee() {}

    virtual void setData() {
        cout << "Enter employee number: ";
        cin >> number;

        cout << "Enter employee name: ";
        cin.ignore();
        cin.getline(name, sizeof(name));
    }

    virtual void print() {
        cout << "Employee Number: " << number << ", Name: " << name << endl;
    }
};

class Manager : public Employee {
private:
    int dept_num;

public:
    Manager() {}

    void setData() override {
        Employee::setData();

        cout << "Enter department number: ";
        cin >> dept_num;
    }

    void print() override {
        cout << "Employee Number: " << number << ", Name: " << name << ", Department Number: " << dept_num << endl;
    }
};

int main() {
    int numEmployees, numManagers;

    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    Employee* employees[numEmployees];
    for (int i = 0; i < numEmployees; ++i) {
        employees[i] = new Employee();
        employees[i]->setData();
    }

    cout << "Enter the number of managers: ";
    cin >> numManagers;

    Manager* managers[numManagers];
    for (int i = 0; i < numManagers; ++i) {
        managers[i] = new Manager();
        managers[i]->setData();
    }

    
    cout << "Employee Data:" << endl;
    for (int i = 0; i < numEmployees; ++i) {
        employees[i]->print();
    }

    
    cout << "Manager Data:" << endl;
    for (int i = 0; i < numManagers; ++i) {
        managers[i]->print();
    }

    
    for (int i = 0; i < numEmployees; ++i) {
        delete employees[i];
    }

    for (int i = 0; i < numManagers; ++i) {
        delete managers[i];
    }

    return 0;
}

