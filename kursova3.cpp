#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

class Room {
private:
    int roomNumber;
    int roomType;
    bool occupied;
    double price;
    static int occupiedRoomsCount; 

public:
    Room() {}

    void inputData(int number) {
        roomNumber = number;
        cout << "Enter room type for Room " << roomNumber << " (0 - Single, 1 - Double, 2 - Suite): ";
        while (!(cin >> roomType) || roomType < 0 || roomType > 2) {
            cout << "Invalid input. Please enter a valid room type (0, 1, or 2): ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Enter occupancy status for Room " << roomNumber << " (0 - Vacant, 1 - Occupied): ";
        while (!(cin >> occupied) || (occupied != 0 && occupied != 1)) {
            cout << "Invalid input. Please enter 0 for vacant or 1 for occupied: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    
        if (occupied) {
            occupiedRoomsCount++;
        }
        cout << "Enter room price for Room " << roomNumber << ": $";
        cin >> price;
    }

    void displayData() const {
        cout << "Room Number: " << roomNumber << endl;
        cout << "Room Type: ";
        switch (roomType) {
            case 0:
                cout << "Single";
                break;
            case 1:
                cout << "Double";
                break;
            case 2:
                cout << "Suite";
                break;
            default:
                cout << "Unknown";
        }
        cout << endl;
        cout << "Occupancy Status: " << (occupied ? "Occupied" : "Vacant") << endl;
        cout << "Price: $" << price << endl;
    }

    bool isOccupied(int roomNumberToCheck) const {
        if (roomNumber == roomNumberToCheck) {
            return occupied;
        }
        return false;
    }

    void writeToFile(ofstream& file) const {
        file << roomNumber << " " << roomType << " " << occupied << " " << price << endl;
    }

    static int getOccupiedRoomsCount() {
        return occupiedRoomsCount;
    }
};

int Room::occupiedRoomsCount = 0;

int main() {
    Room hotelRooms[10]; 
    int choice;
    int roomCounter = 0;

    do {
        cout << "\n1. Enter room data" << endl;
        cout << "2. Display room data" << endl;
        cout << "3. Check room occupancy" << endl;
        cout << "4. Write room data to file" << endl;
        cout << "5. Check number of occupied rooms" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        while (!(cin >> choice) || choice < 1 || choice > 6) {
            cout << "Invalid input. Please enter a number between 1 and 6: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (choice) {
            case 1:
                if (roomCounter >= 10) {
                    cout << "Cannot add more rooms. Maximum limit reached." << endl;
                    break;
                }
                roomCounter++;
                hotelRooms[roomCounter - 1].inputData(roomCounter);
                break;
            case 2:
                for (int i = 0; i < roomCounter; ++i) {
                    cout << "Data for Room " << i + 1 << ":" << endl;
                    hotelRooms[i].displayData();
                    cout << endl;
                }
                break;
            case 3: {
                int roomNumberToCheck;
                cout << "Enter room number to check occupancy: ";
                cin >> roomNumberToCheck;
                while (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input. Please enter a valid room number: ";
                    cin >> roomNumberToCheck;
                }

                
                if (roomNumberToCheck < 1 || roomNumberToCheck > roomCounter) {
                    cout << "No data input for Room " << roomNumberToCheck << ". Please try again." << endl;
                    break;
                }

                bool found = false;
                for (int i = 0; i < roomCounter; ++i) {
                    if (hotelRooms[i].isOccupied(roomNumberToCheck)) {
                        cout << "Room " << roomNumberToCheck << " is occupied." << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Room " << roomNumberToCheck << " is vacant." << endl;
                }
                break;
            }
            case 4: {
                ofstream outFile("output.txt");
                if (outFile.is_open()) {
                    for (int i = 0; i < roomCounter; ++i) {
                        hotelRooms[i].writeToFile(outFile);
                    }
                    outFile.close();
                    cout << "Data successfully written to file." << endl;
                } else {
                    cout << "Unable to open file." << endl;
                }
                break;
            }
            case 5:
                cout << "Number of occupied rooms: " << Room::getOccupiedRoomsCount() << endl;
                break;
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 6." << endl;
        }
    } while (choice != 6);

    return 0;
}

