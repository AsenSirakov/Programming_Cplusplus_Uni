#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

class Figura {
public:
    virtual double lice() = 0;
    virtual double obikolka() = 0;
};

class Triagalnik : public Figura {
public:
    Triagalnik(double b, double h) : osnova(b), visochina(h) {}
    double lice() {
        return 0.5 * osnova * visochina;
    }
    double obikolka() {
        return osnova + visochina + sqrt(osnova * osnova + visochina * visochina);
    }
private:
    double osnova;
    double visochina;
};

class Pravougulnik : public Figura {
public:
    Pravougulnik(double w, double h) : shirochina(w), visochina(h) {}
    double lice() {
        return shirochina * visochina;
    }
    double obikolka() {
        return 2 * (shirochina + visochina);
    }
private:
    double shirochina;
    double visochina;
};

class PravougulenParalelepiped : public Figura {
public:
    PravougulenParalelepiped(double w, double h, double l) : shirochina(w), visochina(h), duljina(l) {}
    double lice() {
        return 2 * (shirochina * visochina + visochina * duljina + duljina* shirochina);
    }
    double obikolka() {
        return 4 * (shirochina + visochina + duljina);
    }
    double obem() {
        return shirochina * visochina * duljina;
    }
    double radiusVpisanaSphera() {
        return (shirochina + visochina + duljina) / 6;
    }
    double radiusOpisanaSphera() {
        return sqrt(shirochina * shirochina + visochina * visochina + duljina * duljina) / 2;
    }
private:
    double shirochina;
    double visochina;
    double duljina;
};

int main() {
SetConsoleOutputCP(1251);

Triagalnik tri(3, 4);
cout << "Area of the triangle: " << tri.area() << endl;
cout << "Perimeter of the triangle: " << tri.perimeter() << endl;

Pravougulnik prav(3, 4);
cout << "Area of the rectangle: " << prav.area() << endl;
cout << "Perimeter of the rectangle: " << prav.perimeter() << endl;

PravougulenParalelepiped prp(3, 4, 5);
cout << "Surface area of the rectangular parallelepiped: " << prp.area() << endl;
cout << "Perimeter of the rectangular parallelepiped: " << prp.perimeter() << endl;
cout << "Volume of the rectangular parallelepiped: " << prp.volume() << endl;
cout << "Radius of the inscribed sphere of the rectangular parallelepiped: " << prp.radiusInscribedSphere() << endl;
cout << "Radius of the circumscribed sphere of the rectangular parallelepiped: " << prp.radiusCircumscribedSphere() << endl;

return 0;

