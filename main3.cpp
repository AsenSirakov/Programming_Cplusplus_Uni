#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

class patient {
private:
    int number;         
    char name[20];      
    double weight;      
    double height;     

public:
    
    patient() {
        cout << "Enter patient number: ";
        cin >> number;
        cout << "Enter patient name: ";
        cin.ignore();
        cin.getline(name, 20);
        cout << "Enter weight in kilograms: ";
        cin >> weight;
        cout << "Enter height in meters: ";
        cin >> height;
    }

   
    void output_patient() {
        cout << "Number: " << number << endl;
        cout << "Name: " << name << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Height: " << height << " m" << endl;
    }

    
    void output_message() {
        double bmi = height * height - weight;
        if (bmi > 120)
            cout << "Obesity detected" << endl;
        else if (bmi < 90)
            cout << "Underweight detected" << endl;
        else
            cout << "Normal weight" << endl;
    }

    
    bool check_patient() {
        return (height > 1.70);
    }
};

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    patient p;

   
    cout << "Patient Information" << endl;
    p.output_patient();

   
    cout << "Body Mass Index: ";
    p.output_message();

    
    if (p.check_patient())
        cout << "Patient is above 1.70m" << endl;
    else
        cout << "Patient is below 1.70m" << endl;

    return 0;
}

