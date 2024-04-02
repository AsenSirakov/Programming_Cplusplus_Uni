#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle(double a, double b, double c) {
        do {
            cout << "Enter sides of the triangle: ";
            cin >> side1 >> side2 >> side3;
        } while (side1 < 0 || side2 < 0 || side3 < 0 || (side1 + side2) <= side3 || (side2 + side3) <= side1 || (side1 + side3) <= side2);
    }

    void printSides() {
        cout << "Sides of the triangle: " << side1 << ", " << side2 << ", " << side3 << endl;
    }

    double perimeter() {
        return side1 + side2 + side3;
    }

    double area() {
        double s = perimeter() / 2; 
        return sqrt(s * (s - side1) * (s - side2) * (s - side3)); 
    }
};

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Triangle t(3, 4, 5);
    t.printSides();
    cout << "Perimeter: " << t.perimeter() << endl;
    cout << "Area: " << t.area() << endl;
    return 0;
}

