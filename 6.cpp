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
            cout << "Withdraw complete.Remaining balance : " << currentBalance << " BGN\n";
        } else {
            cout << "Insufficient funds. Withdrawal of " << withdrawalAmount << " BGN is not possible.\n";
        }
    }
};

void displayAccountInfo(const Account& acc) {
    cout << "Account number: " << acc.accountNumber << endl;
    cout << "Deposit type: " << acc.depositType << endl;
    cout << "Name of owner: " << acc.ownerName << endl;
    cout << "Current balance: " << acc.currentBalance << endl;
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
    int numAccounts;
    cout << "Input number of accounts: ";
    cin >> numAccounts;

    Account* accounts = new Account[numAccounts];

    for (int i = 0; i < numAccounts; ++i) {
        int accNumber, depType;
        string name;
        double initialBalance;

        cout << "Input data for account " << i + 1 << ":\n";

        cout << "Enter aacount number: ";
        cin >> accNumber;

        cout << "Enter deposit type (0-Monthly, 1-Quarter-year, 2-Half-year, 3-Yearly): ";
        cin >> depType;

        cout << "Enter name of owner: ";
        cin.ignore(); 
        getline(cin, name);

        cout << "Enter current balance: ";
        cin >> initialBalance;

        accounts[i] = Account(accNumber, depType, name, initialBalance);
    }

    for (int i = 0; i < numAccounts; ++i) {
        cout << "Account " << i + 1 << ":\n";
        displayAccountInfo(accounts[i]);
        cout << endl;
    }

    int accountToCheck;
    bool accountFound = false;

    while (!accountFound) {
        cout << "Enter number of account to find in the list: ";
        cin >> accountToCheck;

        for (int i = 0; i < numAccounts; ++i) {
            if (accounts[i].getAccountNumber() == accountToCheck) {
                cout << "Account " << accountToCheck << " is found in the list.\n";
                accounts[i].withdrawAmount(); 
                accountFound = true;
                break;
            }
        }

        if (!accountFound) {
            cout << "Account with this number is not found. Please enter a valid number of account .\n";
        }
    }

    delete[] accounts;

    return 0;
}

