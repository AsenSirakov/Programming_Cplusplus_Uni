#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Account {
private:
    double balance;
    int accountNumber;
    int depositType; 
    string ownerName;

public:
    
    Account(int accNumber = 0, int depType = 0, const string& name = "", double initialBalance = 0.0)
        : accountNumber(accNumber), depositType(depType), ownerName(name), balance(initialBalance) {}

    
    void displayData() const {
        cout << "Номер на сметка: " << accountNumber << endl;
        cout << "Тип депозитна сметка: " << depositType << endl;
        cout << "Име на собственик: " << ownerName << endl;
        cout << "Текуща сума: " << balance << endl;
    }

    
    bool accountExists(int numberToCheck) const {
        return accountNumber == numberToCheck;
    }

    
    void withdrawAmount() {
        const double withdrawalAmount = 2000;

        if (balance >= withdrawalAmount) {
            balance -= withdrawalAmount;
            cout << "Тегленето упешно. Сегашен баланс: " << balance << " BGN\n";
        } else {
            cout << "Недостатъчни средства. Транзакцията е невъзможна " << withdrawalAmount << " BGN\n";
        }
    }
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
    int numAccounts;
    cout << "Въведете брой сметки: ";
    cin >> numAccounts;

    
    Account* accounts = new Account[numAccounts];

    
    for (int i = 0; i < numAccounts; ++i) {
        int accNumber, depType;
        string name;
        double initialBalance;

        cout << "Въведете данни за сметка " << i + 1 << ":\n";
        
        cout << "Въведете номер на сметка: ";
        cin >> accNumber;

        cout << "Въведете тип депозитна сметко: (0-Едномесечна, 1-Тримесечна, 2-Шестмесечна, 3-Годишна): ";
        cin >> depType;

        cout << "Въведете име на собственика: ";
        cin.ignore(); 
        getline(cin, name);

        cout << "Въведете текуща сума: ";
        cin >> initialBalance;

        accounts[i] = Account(accNumber, depType, name, initialBalance);
    }

    
    for (int i = 0; i < numAccounts; ++i) {
        cout << "Сметка " << i + 1 << ":\n";
        accounts[i].displayData();
        cout << endl;
    }

    
    int accountToCheck;
    bool accountFound = false;

    while (!accountFound) {
        cout << "Въведете сметка за проверка: ";
        cin >> accountToCheck;

        for (int i = 0; i < numAccounts; ++i) {
            if (accounts[i].accountExists(accountToCheck)) {
                cout << "Сметка " << accountToCheck << " съществува в масива.\n";
                accounts[i].withdrawAmount(); 
                accountFound = true;
                break;
            }
        }

        if (!accountFound) {
            cout << "Няма такъв номер на сметка. Моля въведете правилен номер на сметка.\n";
        }
    }

    
    delete[] accounts;

    return 0;
}

