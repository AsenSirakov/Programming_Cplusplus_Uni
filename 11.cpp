#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string firstName;
    string lastName;

public:
    Person() {
        cout << "Enter first name: ";
        cin >> firstName;
        cout << "Enter last name: ";
        cin >> lastName;
    }

    virtual void display() const {
        cout << "First Name: " << firstName << ", Last Name: " << lastName << endl;
    }
};

class Student : virtual public Person {
protected:
    string facultyNumber;
    string specialty;

public:
    Student() : Person() {
        cout << "Enter faculty number: ";
        cin >> facultyNumber;
        cout << "Enter specialty: ";
        cin >> specialty;
    }

    void display() const override {
        Person::display();
        cout << "Faculty Number: " << facultyNumber << ", Specialty: " << specialty << endl;
    }
};

class EmployeeGrajdanski : virtual public Person {
protected:
    double amount;

public:
    EmployeeGrajdanski() : Person() {
        cout << "Enter amount: ";
        cin >> amount;
    }

    void display() const override {
        Person::display();
        cout << "Amount: " << amount << endl;
    }
};

class StudentTeacher : public Student, public EmployeeGrajdanski {
private:
    string discipline;

public:
    StudentTeacher() : Person(), Student(), EmployeeGrajdanski() {
        cout << "Enter discipline: ";
        cin >> discipline;
    }

    void display() const override {
        Person::display();
        cout << "Faculty Number: " << facultyNumber << ", Specialty: " << specialty << endl;
        cout << "Amount: " << amount << ", Discipline: " << discipline << endl;
    }
};

int main() {
    StudentTeacher studentTeacher;
    studentTeacher.display();

    return 0;
}

