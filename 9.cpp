#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string EGN;
    string firstName;
    string lastName;

public:
    Employee() {}

    Employee(string egn, string first, string last) : EGN(egn), firstName(first), lastName(last) {}

    void display() {
        cout << "EGN: " << EGN << ", Name: " << firstName << " " << lastName << endl;
    }
};

class EmployeeTrudov : public Employee {
private:
    int experience;
    float salary;

public:
    EmployeeTrudov() {}

    EmployeeTrudov(string egn, string first, string last, int exp, float sal)
        : Employee(egn, first, last), experience(exp), salary(sal) {}

    void display() {
        Employee::display();
        cout << "Salary: " << salary << ", Experience: " << experience << " years" << endl;
    }

    void displayWorkYears() {
        float workYears = salary * experience * 0.013;
        cout << "Worked Time: " << workYears << ", Initials: " << firstName[0] << lastName[0] << endl;
    }

    void inputDetails() {
        cout << "Enter EGN: ";
        cin >> EGN;
        cout << "Enter first name: ";
        cin >> firstName;
        cout << "Enter last name: ";
        cin >> lastName;
        cout << "Enter experience (in years): ";
        cin >> experience;
        cout << "Enter salary: ";
        cin >> salary;
    }
};

class EmployeeGrajdanski : public Employee {
private:
    float amount;

public:
    EmployeeGrajdanski() {}

    EmployeeGrajdanski(string egn, string first, string last, float amt)
        : Employee(egn, first, last), amount(amt) {}

    void display() {
        Employee::display();
        cout << "Amount: " << amount << endl;
    }

    void inputDetails() {
        cout << "Enter EGN: ";
        cin >> EGN;
        cout << "Enter first name: ";
        cin >> firstName;
        cout << "Enter last name: ";
        cin >> lastName;
        cout << "Enter amount: ";
        cin >> amount;
    }
};

int main() {
    int numTrudovEmployees, numGrajdanskiEmployees;

    cout << "Enter the number of Employed employees: ";
    cin >> numTrudovEmployees;

    EmployeeTrudov* etArray = new EmployeeTrudov[numTrudovEmployees];
    for (int i = 0; i < numTrudovEmployees; ++i) {
        cout << "\nEnter details for Employed Employee " << i + 1 << ":" << endl;
        etArray[i].inputDetails();
    }

    cout << "\nEnter the number of Civil employees: ";
    cin >> numGrajdanskiEmployees;

    EmployeeGrajdanski* egArray = new EmployeeGrajdanski[numGrajdanskiEmployees];
    for (int i = 0; i < numGrajdanskiEmployees; ++i) {
        cout << "\nEnter details for Civil Employee " << i + 1 << ":" << endl;
        egArray[i].inputDetails();
    }

    cout << "\nEmployed Employee Details:" << endl;
    for (int i = 0; i < numTrudovEmployees; ++i) {
        etArray[i].display();
        etArray[i].displayWorkYears();
    }

    cout << "\nCivil Employee Details:" << endl;
    for (int i = 0; i < numGrajdanskiEmployees; ++i) {
        egArray[i].display();
    }

    delete[] etArray;
    delete[] egArray;

    return 0;
}

