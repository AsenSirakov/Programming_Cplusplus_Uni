#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

class Quadratic {
 private:
  float a, b, c;
 public:
  void getCoefficient() {
    cout << "Enter a:";
    cin >> a;

    cout << "Enter b:";
    cin >> b;

    cout << "Enter c:";
    cin >> c;
  }
  void roots() {
    float root_1, root_2, discriminant, real_part, imaginary_part;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
      root_1 = (-b + sqrt(discriminant)) / (2 * a);
      root_2 = (-b - sqrt(discriminant)) / (2 * a);

      cout << "Roots are real and distinct." << endl;
      cout << "Root 1 = " << root_1 << endl;
      cout << "Root 2 = " << root_2 << endl;
    } else if (discriminant == 0) {
      cout << "Roots are real and equal." << endl;
      root_1 = -b / (2 * a);
      cout << "Root 1 = Root 2 =" << root_1 << endl;
    } else {
      real_part = -b / (2 * a);
      imaginary_part = sqrt(-discriminant) / (2 * a);

      cout << "Roots are complex and imaginary." << endl;
      cout << "Root 1 = " << real_part << "+" << imaginary_part << "i" << endl;
      cout << "Root 2 = " << real_part << "-" << imaginary_part << "i" << endl;
    }
  }
};

int main() {
  SetConsoleOutputCP(1251);
  Quadratic Q;
  Q.getCoefficient();
  Q.roots();

  return 0;
}

