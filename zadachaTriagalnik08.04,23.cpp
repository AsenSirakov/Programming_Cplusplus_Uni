#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

class Figura {
public:
    virtual double lice() = 0;
};

class Triagalnik : public Figura {
public:
    Triagalnik(double a, double b) : strana1(a), strana2(b) {}
    double lice() {
        return 0.5 * strana1 * strana2;
    }
private:
    double strana1;
    double strana2;
};

class Pravougulnik : public Figura {
public:
    Pravougulnik(double w, double h) : Strana1(w),Strana2(h) {}
    double lice() {
        return Strana1 * Strana2;
    }
  
    double Strana1;
    double Strana2;
};

int main() {
	SetConsoleOutputCP(1251);
    Triagalnik tria(3, 4);
    cout << "Area of triangle: " << tria.lice() << endl;
    Pravougulnik sqr(3, 4);
    cout << "Area of square: " << sqr.lice() << endl;
    
    return 0;
}
