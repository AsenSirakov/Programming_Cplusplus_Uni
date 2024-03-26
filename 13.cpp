#include <iostream>
#include <cstring>

using namespace std;

class MyString {
private:
    char str[25];

public:
    MyString() {
        str[0] = '\0';
    }

    void create() {
        cout << "Enter a string: ";
        cin.getline(str, 25);
    }

    void display() const {
        cout << "String: " << str << endl;
    }

    bool operator==(const MyString& s) const {
        return strcmp(str, s.str) == 0;
    }

    void operator=(const MyString& s) {
        strcpy(str, s.str);
    }

    MyString operator+(const MyString& s) const {
        MyString temp;
        strcat(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }
};

int main() {
    MyString str1, str2, str3;

    cout << "Enter string 1:" << endl;
    str1.create();

    cout << "Enter string 2:" << endl;
    str2.create();

    cout << "String 1: ";
    str1.display();
    cout << "String 2: ";
    str2.display();

    if (str1 == str2) {
        cout << "String 1 and String 2 are equal." << endl;
    } else {
        cout << "String 1 and String 2 are not equal." << endl;
    }

    str3 = str1;
    cout << "String 3 (copied from String 1): ";
    str3.display();

    str3 = str1 + str2;
    cout << "String 3 (concatenated from String 1 and String 2): ";
    str3.display();

    return 0;
}

