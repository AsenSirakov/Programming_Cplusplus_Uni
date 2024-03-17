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
   
    Person p1("���� �������", 25);
    cout << "���: " << p1.getName() << ",�������: " << p1.getAge() << endl;


    Person* p2 = new Person("���� ������", 30);
    cout << "���: " << p2->getName() << ", �������: " << p2->getAge() << endl;
    delete p2;
    int n = 3;
    Person** people = new Person*[n];
    people[0] = new Person("������� �������", 20);
    people[1] = new Person("����� �������", 40);
    people[2] = new Person("�������� ��������", 35);
    for (int i = 0; i < n; i++) {
        cout << "���: " << people[i]->getName() << ", �������: " << people[i]->getAge() << endl;
        delete people[i];
    }
    delete[] people;

    return 0;
}
