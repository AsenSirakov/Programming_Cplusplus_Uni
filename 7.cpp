#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip> 

class Person {
private:
    std::string EGN;
    std::string firstName;
    std::string lastName;

public:
    Person() {
        std::cout << "Enter EGN: ";
        std::cin >> EGN;

        std::cout << "Enter first name: ";
        std::cin >> firstName;

        std::cout << "Enter last name: ";
        std::cin >> lastName;
    }

    bool isLastNameMatch(const std::string& searchLastName) const {
        return lastName == searchLastName;
    }

    friend void printBirthDate(const Person& person);
};

void printBirthDate(const Person& person) {
    std::string birthDate = person.EGN.substr(0, 6);
    int day = std::atoi(birthDate.substr(4, 2).c_str());
    int month = std::atoi(birthDate.substr(2, 2).c_str());
    int year = std::atoi(birthDate.substr(0, 2).c_str());
    if (month > 20) {
        month -= 40; 
        year += 2000;
    } else {
        year += 1900;
    }
    std::cout << "Birth date: " << std::setfill('0') << std::setw(2) << day << "." << std::setw(2) << month << "." << year << std::endl;
}

int main() {
    int numEmployees;
    std::cout << "Enter the number of employees: ";
    std::cin >> numEmployees;

    Person* employees = new Person[numEmployees];

    std::string searchLastName;
    std::cout << "Enter last name to search: ";
    std::cin >> searchLastName;
    bool found = false;
    for (int i = 0; i < numEmployees; ++i) {
        if (employees[i].isLastNameMatch(searchLastName)) {
            found = true;
            std::cout << "Last name " << searchLastName << " found in the array." << std::endl;
            break;
        }
    }
    if (!found) {
        std::cout << "Last name " << searchLastName << " not found in the array." << std::endl;
    }

    for (int i = 0; i < numEmployees; ++i) {
        std::cout << "Birth date for employee " << i + 1 << ": ";
        printBirthDate(employees[i]);
    }

    delete[] employees;

    return 0;
}

