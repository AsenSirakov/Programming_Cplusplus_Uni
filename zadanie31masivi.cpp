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
        cout << "Account number: " << accountNumber << endl;
        cout << "Deposit type: " << depositType << endl;
        cout << "Name of owner: " << ownerName << endl;
        cout << "Current balance: " << balance << endl;
    }

    
    bool accountExists(int numberToCheck) const {
        return accountNumber == numberToCheck;
    }

    
    void withdrawAmount() {
        const double withdrawalAmount = 2000;

        if (balance >= withdrawalAmount) {
            balance -= withdrawalAmount;
            cout << "Withdrawal successful. Current balance: " << balance << " BGN\n";
        } else {
            cout << "Insufficient funds. Impossible transaction of  " << withdrawalAmount << " BGN\n";
        }
    }
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
    int numAccounts;
    cout << "Enter number of accouts: ";
    cin >> numAccounts;

    
    Account* accounts = new Account[numAccounts];

    
    for (int i = 0; i < numAccounts; ++i) {
        int accNumber, depType;
        string name;
        double initialBalance;

        cout << "Enter data for account " << i + 1 << ":\n";
        
        cout << "Enter account number: ";
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
        accounts[i].displayData();
        cout << endl;
    }

    
    int accountToCheck;
    bool accountFound = false;

    while (!accountFound) {
        cout << "Enter number of account to search in list: ";
        cin >> accountToCheck;

        for (int i = 0; i < numAccounts; ++i) {
            if (accounts[i].accountExists(accountToCheck)) {
                cout << "Account " << accountToCheck << " exists in the array.\n";
                accounts[i].withdrawAmount(); 
                accountFound = true;
                break;
            }
        }

        if (!accountFound) {
            cout << "Invalid account number. Please enter a valid account number!\n";
        }
    }

    
    delete[] accounts;

    return 0;
}

