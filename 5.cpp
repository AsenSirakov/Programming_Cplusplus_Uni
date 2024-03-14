#include <iostream>
#include <string>

using namespace std;

class NumberAssignment; 

class Animal {
private:
    int animalID;
    string name;
    double weight; 

public:
    void animal_create() {
        cout << "Enter animal ID: ";
        cin >> animalID;
        cout << "Enter animal name: ";
        cin >> name;
        cout << "Enter animal weight (in kilograms): ";
        cin >> weight;
    }

    void output_animal() {
        cout << "Animal ID: " << animalID << endl;
        cout << "Name: " << name << endl;
        cout << "Weight: " << weight << " kg" << endl;
    }

    void output_weight() {
        double weight_pounds = weight * 2.2046;
        double weight_tons = weight / 1000.0;
        char choice;
        cout << "Choose output unit (k for kilograms, p for pounds, t for tons): ";
        cin >> choice;
        switch(choice) {
            case 'k':
                cout << "Weight: " << weight << " kg" << endl;
                break;
            case 'p':
                cout << "Weight: " << weight_pounds << " pounds" << endl;
                break;
            case 't':
                cout << "Weight: " << weight_tons << " tons" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }

    friend void assign_number(Animal& animal, NumberAssignment& numberAssignment); 
};

class NumberAssignment {
private:
    int num;

public:
    void set_number(int n) {
        num = n;
    }

    void number_output() {
        cout << "Assigned number: " << num << endl;
    }

    int get_number() {
        return num;
    }
};

void assign_number(Animal& animal, NumberAssignment& numberAssignment) {
    animal.animalID = numberAssignment.get_number();
    numberAssignment.set_number(numberAssignment.get_number() + 1); 
}

int main() {
    Animal myAnimal;
    NumberAssignment numberAssigner;

    myAnimal.animal_create();
    int animalNumber;
    cout << "Enter animal number: ";
    cin >> animalNumber;
    numberAssigner.set_number(animalNumber);
    assign_number(myAnimal, numberAssigner);

    cout << "\nAnimal details:\n";
    myAnimal.output_animal();

    cout << "\nWeight details:\n";
    myAnimal.output_weight();

    return 0;
}

