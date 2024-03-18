#include <iostream>
#include <string>
#include <>windows.h>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
};

int main() {
	SetConsoleOutputCP(1251)
   
    Person p1("Asen Sirakov", 25);
    cout << "Asen: " << p1.getName() << ",Age: " << p1.getAge() << endl;


    Person* p2 = new Person("Sasho Uzunov", 30);
    cout << "Name: " << p2->getName() << ", Age: " << p2->getAge() << endl;
    delete p2;
    int n = 3;
    Person** people = new Person*[n];
    people[0] = new Person("Dimitar Sirakov", 20);
    people[1] = new Person("Yulian Dryankov", 40);
    people[2] = new Person("Nikoleta Krusteva", 35);
    for (int i = 0; i < n; i++) {
        cout << "Name: " << people[i]->getName() << ", Age: " << people[i]->getAge() << endl;
        delete people[i];
    }
    delete[] people;

    return 0;
}
