#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time() : hours(0), minutes(0) {}

    void inputTime() {
        cout << "Enter hours (0-23): ";
        cin >> hours;
        while (hours < 0 || hours > 23) {
            cout << "Invalid input. Please enter hours between 0 and 23: ";
            cin >> hours;
        }

        cout << "Enter minutes (0-59): ";
        cin >> minutes;
        while (minutes < 0 || minutes > 59) {
            cout << "Invalid input. Please enter minutes between 0 and 59: ";
            cin >> minutes;
        }
    }

    void displayTime() const {
        cout << setw(2) << setfill('0') << hours << ":" << setw(2) << setfill('0') << minutes;
    }

    bool operator==(const Time& other) const {
        return hours == other.hours && minutes == other.minutes;
    }
};

class Plane {
private:
    int flightNumber;
    Time arrivalTime;
    Time departureTime;

public:
    Plane() {}

    void inputPlane() {
        cout << "Enter flight number: ";
        cin >> flightNumber;
        cout << "Enter arrival time: " << endl;
        arrivalTime.inputTime();
        cout << "Enter departure time: " << endl;
        departureTime.inputTime();
    }

    void displayPlane() const {
        cout << "Flight Number: " << flightNumber << endl;
        cout << "Arrival Time: ";
        arrivalTime.displayTime();
        cout << endl;
        cout << "Departure Time: ";
        departureTime.displayTime();
        cout << endl;
    }

    static int countPlanesWithSameDepartureTime(const vector<Plane>& planes, const Time& time) {
        int count = 0;
        for (size_t i = 0; i < planes.size(); ++i) {
            if (planes[i].departureTime == time) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    int numPlanes;
    cout << "Enter the number of planes: ";
    cin >> numPlanes;

    vector<Plane> planes(numPlanes);
    int choice;

    do {
        cout << "\n1. Enter plane data" << endl;
        cout << "2. Display plane data" << endl;
        cout << "3. Count planes departing at a specific time" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (size_t i = 0; i < planes.size(); ++i) {
                    cout << "Enter data for Plane " << i + 1 << ":" << endl;
                    planes[i].inputPlane();
                }
                break;
            case 2:
                for (size_t i = 0; i < planes.size(); ++i) {
                    cout << "Data for Plane " << i + 1 << ":" << endl;
                    planes[i].displayPlane();
                    cout << endl;
                }
                break;
            case 3: {
                Time time;
                cout << "Enter time to count planes departing (HH:MM): ";
                time.inputTime();
                int count = Plane::countPlanesWithSameDepartureTime(planes, time);
                cout << "Number of planes departing at ";
                time.displayTime();
                cout << " : " << count << endl;
                break;
            }
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    } while (choice != 4);

    return 0;
}

