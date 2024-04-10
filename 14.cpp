#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Employee {
private:
    string firstName;
    string middleName;
    string lastName;
    int overtimeHours;
    double salary;
    int startYear;

public:
    void inputData() {
        cout << "Enter first name: ";
        cin >> firstName;
        cout << "Enter middle name: ";
        cin >> middleName;
        cout << "Enter last name: ";
        cin >> lastName;
        cout << "Enter overtime hours: ";
        cin >> overtimeHours;
        cout << "Enter salary: ";
        cin >> salary;
        cout << "Enter start year: ";
        cin >> startYear;
    }

    void displayData() {
        cout << "Name: " << firstName << " " << middleName << " " << lastName << endl;
        cout << "Overtime hours: " << overtimeHours << endl;
        cout << "Salary: " << salary << endl;
        cout << "Start year: " << startYear << endl;
    }

    void writeToFile() {
        ofstream file("output.txt", ios::app);
        if (file.is_open()) {
            file << firstName << " " << middleName << " " << lastName << " ";
            file << salary << " " << overtimeHours << " " << startYear << endl;
            file.close();
            cout << "Data successfully written to file." << endl;
        } else {
            cout << "Unable to open file." << endl;
        }
    }

    bool searchByName(string name) {
        string fullName = firstName + " " + middleName + " " + lastName;
        return fullName == name;
    }
};

int main() {
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    Employee *employees = new Employee[numEmployees];
    int choice;
    string searchName;

    do {
        cout << "1. Enter employee data" << endl;
        cout << "2. Display employee data" << endl;
        cout << "3. Write employee data to file" << endl;
        cout << "4. Search for employee by name" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < numEmployees; ++i) {
                    cout << "Employee " << i + 1 << endl;
                    employees[i].inputData();
                }
                break;
            case 2:
                for (int i = 0; i < numEmployees; ++i) {
                    cout << "Employee " << i + 1 << endl;
                    employees[i].displayData();
                }
                break;
            case 3:
                for (int i = 0; i < numEmployees; ++i) {
                    employees[i].writeToFile();
                }
                break;
            case 4:
                cout << "Enter employee name to search: ";
                cin >> searchName;
                for (int i = 0; i < numEmployees; ++i) {
                    if (employees[i].searchByName(searchName)) {
                        cout << "Employee found!" << endl;
                        employees[i].displayData();
                        break;
                    }
                }
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
        }
    } while (choice != 5);

    delete[] employees;
    return 0;
}

