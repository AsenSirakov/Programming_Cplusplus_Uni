#include <iostream>

using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    void display() const {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    void operator+=(int c) {
        length += c;
        width += c;
    }

    Rectangle operator++() {
        ++length;
        ++width;
        return *this;
    }

    Rectangle operator++(int) {
        Rectangle temp = *this;
        length++;
        width++;
        return temp;
    }

    Rectangle operator+(const Rectangle& obj) const {
        Rectangle temp(length + obj.length, width + obj.width);
        return temp;
    }

    Rectangle operator-(const Rectangle& obj) const {
        Rectangle temp(length - obj.length, width - obj.width);
        return temp;
    }
};

int main() {
    Rectangle rect1(5, 3);
    Rectangle rect2(2, 4);
    Rectangle rect3(0, 0);

    cout << "Original Rectangles:" << endl;
    rect1.display();
    rect2.display();
    cout << endl;

    
    int increaseValue;
    cout << "Enter value to increase sides: ";
    cin >> increaseValue;
    rect1 += increaseValue;
    rect2 += increaseValue;
    cout << "Rectangles after += operation:" << endl;
    rect1.display();
    rect2.display();
    cout << endl;

    
    ++rect1;
    ++rect2;
    cout << "Rectangles after prefix ++ operation:" << endl;
    rect1.display();
    rect2.display();
    cout << endl;

    
    rect3 = rect1++;
    cout << "Rect1 after suffix ++ operation:" << endl;
    rect1.display();
    cout << "Rect3 (created from rect1++):" << endl;
    rect3.display();
    cout << endl;

    
    rect3 = rect1 + rect2;
    cout << "Sum of rect1 and rect2:" << endl;
    rect3.display();
    cout << endl;

    
    rect3 = rect1 - rect2;
    cout << "Difference of rect1 and rect2:" << endl;
    rect3.display();

    return 0;
}

