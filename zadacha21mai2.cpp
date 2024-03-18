#include <iostream>

class Point {
private:
    double x;
    double y;

public:
   
    Point() : x(0.0), y(0.0) {}

    Point(double xValue, double yValue) : x(xValue), y(yValue) {}

    
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }

    
    Point operator*(const Point& other) const {
        return Point(x * other.x, y * other.y);
    }


    Point operator*(double scalar) const {
        return Point(x * scalar, y * scalar);
    }

   
    friend std::ostream& operator<<(std::ostream& os, const Point& point) {
        os << "Point(" << point.x << ", " << point.y << ")";
        return os;
    }
};

int main() {
  
    Point p1(2.5, 3.8);
    Point p2(1.2, 0.7);


    Point sum = p1 + p2;
    Point product = p1 * p2;
    Point scaled = p1 * 2.0;

   
    std::cout << "p1: " << p1 << std::endl;
    std::cout << "p2: " << p2 << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Scaled: " << scaled << std::endl;

    return 0;
}
