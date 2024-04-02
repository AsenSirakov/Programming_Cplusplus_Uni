#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;

class Circle {
private:
    double centerX;
    double centerY;
    double radius;
    const double pi = 3.14;

public:
    void inputRadius();
    void inputCenter();
    double circumference();
    double area();
    void displayInfo();
};

void Circle::inputRadius() {
    cout << "Enter the radius of the circle: ";
    cin >> radius;
}

void Circle::inputCenter() {
    cout << "Enter the coordinates of the center of the circle (x): ";
    cin >> centerX;
    cout << "Enter the coordinates of the center of the circle (y): ";
    cin >> centerY;
}

double Circle::circumference() {
    return 2 * pi * radius;
}

double Circle::area() {
    return pi * radius * radius;
}

void Circle::displayInfo() {
    cout << "Circle Information:" << endl;
    cout << "Center: (" << centerX << ", " << centerY << ")" << endl;
    cout << "Radius: " << radius << endl;
    cout << "Circumference: " << circumference() << endl;
    cout << "Area: " << area() << endl;
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Circle circle;
    circle.inputRadius();
    circle.inputCenter();
    circle.displayInfo();
    return 0;
}

