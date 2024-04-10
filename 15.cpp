#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Boat {
protected:
    string number;
    string name;
    double length;
    double width;
    double speed;
    double price;

public:
    Boat() {}

    void inputData() {
        cout << "Enter boat number: ";
        cin >> number;
        cout << "Enter boat name: ";
        cin >> name;
        cout << "Enter boat length: ";
        cin >> length;
        cout << "Enter boat width: ";
        cin >> width;
        cout << "Enter boat speed: ";
        cin >> speed;
        cout << "Enter boat price: ";
        cin >> price;
    }

    virtual void displayData() {
        cout << "Boat Number: " << number << endl;
        cout << "Boat Name: " << name << endl;
        cout << "Boat Length: " << length << " meters" << endl;
        cout << "Boat Width: " << width << " meters" << endl;
        cout << "Boat Speed: " << speed << " knots" << endl;
        cout << "Boat Price: $" << price << endl;
    }
};

class Yacht : public Boat {
private:
    int mastCount;

public:
    Yacht() {}

    void inputData() {
        Boat::inputData();
        cout << "Enter number of masts: ";
        cin >> mastCount;
    }

    void displayData() {
        Boat::displayData();
        cout << "Number of Masts: " << mastCount << endl;
    }

    void writeToFile() {
        ofstream file("lodki.txt", ios::app);
        if (file.is_open()) {
            file << number << " " << name << " " << length << " " << width << " " << speed << " " << price << " " << mastCount << endl;
            file.close();
            cout << "Data successfully written to file." << endl;
        } else {
            cout << "Unable to open file." << endl;
        }
    }

    static void displayMostExpensive(Yacht* yachts, int size) {
        if (size == 0) {
            cout << "No yachts found." << endl;
            return;
        }

        double maxPrice = 0.0;
        int maxIndex = -1;
        for (int i = 0; i < size; ++i) {
            if (yachts[i].price > maxPrice) {
                maxPrice = yachts[i].price;
                maxIndex = i;
            }
        }
        if (maxIndex != -1) {
            cout << "Most Expensive Yacht:" << endl;
            yachts[maxIndex].displayData();
        } else {
            cout << "No yachts found." << endl;
        }
    }
};

int main() {
    int choice;
    Yacht* yachts = new Yacht[3];

    do {
        cout << "\n1. Enter yacht data" << endl;
        cout << "2. Display yacht data" << endl;
        cout << "3. Write yacht data to file" << endl;
        cout << "4. Display most expensive yacht" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < 3; ++i) {
                    cout << "Enter data for Yacht " << i + 1 << ":" << endl;
                    yachts[i].inputData();
                }
                break;
            case 2:
                for (int i = 0; i < 3; ++i) {
                    cout << "Data for Yacht " << i + 1 << ":" << endl;
                    yachts[i].displayData();
                    cout << endl;
                }
                break;
            case 3:
                for (int i = 0; i < 3; ++i) {
                    yachts[i].writeToFile();
                }
                break;
            case 4:
                Yacht::displayMostExpensive(yachts, 3);
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
        }
    } while (choice != 5);

    delete[] yachts;

    return 0;
}

