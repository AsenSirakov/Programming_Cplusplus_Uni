#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Account {
private:
    double currentBalance;
    int accountNumber;
    int depositType;
    string ownerName;

public:
    Account(int accNumber = 0, int depType = 0, const string& name = "", double initialBalance = 0.0)
        : accountNumber(accNumber), depositType(depType), ownerName(name), currentBalance(initialBalance) {}

    friend void displayAccountInfo(const Account& acc);

    int getAccountNumber() const {
        return accountNumber;
    }

    void withdrawAmount() {
        const double withdrawalAmount = 2000;
        if (currentBalance >= withdrawalAmount) {
            currentBalance -= withdrawalAmount;
            cout << "Тегленето е успешно. Оставащ баланс в сметката: " << currentBalance << " BGN\n";
        } else {
            cout << "Недостатъчно налични пари. Тегленето на " << withdrawalAmount << " BGN не е възможно.\n";
        }
    }
};

void displayAccountInfo(const Account& acc) {
    cout << "Номер на сметка: " << acc.accountNumber << endl;
    cout << "Тип депозит: " << acc.depositType << endl;
    cout << "Име на собственик: " << acc.ownerName << endl;
    cout << "Текуща сума: " << acc.currentBalance << endl;
}

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

        cout << "Въведете тип депозитна сметка (0-Едномесечна, 1-Тримесечна, 2-Шестмесечна, 3-Годишна): ";
        cin >> depType;

        cout << "Въведете име на собственик: ";
        cin.ignore(); 
        getline(cin, name);

        cout << "Въведете текуща сума: ";
        cin >> initialBalance;

        accounts[i] = Account(accNumber, depType, name, initialBalance);
    }

    for (int i = 0; i < numAccounts; ++i) {
        cout << "Сметка " << i + 1 << ":\n";
        displayAccountInfo(accounts[i]);
        cout << endl;
    }

    int accountToCheck;
    bool accountFound = false;

    while (!accountFound) {
        cout << "Въведете номер на сметка за проверка: ";
        cin >> accountToCheck;

        for (int i = 0; i < numAccounts; ++i) {
            if (accounts[i].getAccountNumber() == accountToCheck) {
                cout << "Сметка " << accountToCheck << " е намерена в списъка.\n";
                accounts[i].withdrawAmount(); 
                accountFound = true;
                break;
            }
        }

        if (!accountFound) {
            cout << "Сметка с такъв номер не е намерена. Моля въведете правилен номер на сметка.\n";
        }
    }

    delete[] accounts;

    return 0;
}

