#include <iostream>
#include <cmath>

using namespace std;

class Shape {
protected:
    double* sides;
public:
    Shape(double* s) {
        sides = s;
    }
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(double* s) : Shape(s) {}
    double getArea() {
        return sides[0] * sides[1];
    }
    double getPerimeter() {
        return 2 * (sides[0] + sides[1]);
    }
};

class Triangle : public Shape {
public:
    Triangle(double* s) : Shape(s) {}
    double getArea() {
        double p = (sides[0] + sides[1] + sides[2]) / 2.0;
        return sqrt(p * (p - sides[0]) * (p - sides[1]) * (p - sides[2]));
    }
    double getPerimeter() {
        return sides[0] + sides[1] + sides[2];
    }
};

int main() {
    double rect_sides[2] = {5.0, 10.0};
    double tri_sides[3] = {3.0, 4.0, 5.0};

    Rectangle rect(rect_sides);
    Triangle tri(tri_sides);

    cout << "Rectangle:" << endl;
    cout << "Sides: " << rect_sides[0] << ", " << rect_sides[1] << endl;
    cout << "Area: " << rect.getArea() << endl;
    cout << "Perimeter: " << rect.getPerimeter() << endl;

    cout << endl;

    cout << "Triangle:" << endl;
    cout << "Sides: " << tri_sides[0] << ", " << tri_sides[1] << ", " << tri_sides[2] << endl;
    cout << "Area: " << tri.getArea() << endl;
    cout << "Perimeter: " << tri.getPerimeter() << endl;

    return 0;
}
