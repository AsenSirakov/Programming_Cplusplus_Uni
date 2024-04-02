#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;

class speciality {
private:
    char name[20]; 
    int man;      
    int woman;    
    int average_score;

public:
    void input_speciality();
    void output_speciality();
    void output_score();
    bool compare_num();
    int number_students();
};

void speciality::input_speciality() {
   cout << "Enter specialization name: ";
   cin.getline(name, 20);

   cout << "Enter the number of males: ";
   cin >> man;

   cout << "Enter the number of females: ";
   cin >> woman;

   cout << "Enter the average score for the specialization: ";
   cin >> average_score;
}

void speciality::output_speciality() {
   cout << "Specialization: " << name << endl;
   cout << "Number of males: " << man << endl;
   cout << "Number of females: " << woman << endl;
   cout << "Average score: " << average_score << endl;
}

void speciality::output_score() {
    cout << "Average score for " << name << " is ";
    if (average_score >= 2 && average_score <= 6) {
        switch (average_score) {
            case 2:
               cout << "Fail 2" << endl;
                break;
            case 3:
                cout << "Pass 3" <<endl;
                break;
            case 4:
                cout << "Good 4" <<endl;
                break;
            case 5:
                cout << "Very good 5" << endl;
                break;
            case 6:
                cout << "Excellent 6" << endl;
                break;
        }
    } else {
       cout << "Invalid score" <<endl;
    }
}

bool speciality::compare_num() {
    return man > woman;
}

int speciality::number_students() {
    return man + woman;
}

int main() {
    SetConsoleOutputCP(1251);    
    SetConsoleCP(1251);
    speciality s;
    s.input_speciality();
    s.output_speciality();
    s.output_score();
    
    if (s.compare_num()) {
        cout << "There are more males in the specialization" <<endl;
    } else {
        cout << "There are more females in the specialization." <<endl;
    }

    cout << "The total number of students in the specialization is " << s.number_students() << endl;

    return 0;
}

