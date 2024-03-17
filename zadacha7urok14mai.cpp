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
   
    Person p1("Асен Сираков", 25);
    cout << "Име: " << p1.getName() << ",Възраст: " << p1.getAge() << endl;


    Person* p2 = new Person("Сашо Узунов", 30);
    cout << "Име: " << p2->getName() << ", Възраст: " << p2->getAge() << endl;
    delete p2;
    int n = 3;
    Person** people = new Person*[n];
    people[0] = new Person("Димитър Сираков", 20);
    people[1] = new Person("Юлиян Дрянков", 40);
    people[2] = new Person("Николета Кръстева", 35);
    for (int i = 0; i < n; i++) {
        cout << "Име: " << people[i]->getName() << ", Възраст: " << people[i]->getAge() << endl;
        delete people[i];
    }
    delete[] people;

    return 0;
}
