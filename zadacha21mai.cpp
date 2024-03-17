#include <iostream>
#include <windows.h>
class Number {
public:

    virtual void multiply(double factor) = 0;
};


class RealNumber : public Number {
private:
    double value;

public:
    RealNumber(double val) : value(val) {}

    void multiply(double factor) override {
        value *= factor;
    }

    void print() {
        std::cout << "Real number: " << value << std::endl;
    }
};

class ComplexNumber : public Number {
private:
    double real;
    double imaginary;

public:
    ComplexNumber(double re, double im) : real(re), imaginary(im) {}

    void multiply(double factor) override {
        real *= factor;
        imaginary *= factor;
    }

    void print() {
        std::cout << "Complex number: " << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {

    Number* number1 = new RealNumber(5.0);
    Number* number2 = new ComplexNumber(2.0, 3.0);


    number1->multiply(2.0);
    number2->multiply(1.5);


    static_cast<RealNumber*>(number1)->print();
    static_cast<ComplexNumber*>(number2)->print();

    
    delete number1;
    delete number2;

    return 0;
}
