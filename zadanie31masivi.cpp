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
        cout << "����� �� ������: " << accountNumber << endl;
        cout << "��� ��������� ������: " << depositType << endl;
        cout << "��� �� ����������: " << ownerName << endl;
        cout << "������ ����: " << balance << endl;
    }

    
    bool accountExists(int numberToCheck) const {
        return accountNumber == numberToCheck;
    }

    
    void withdrawAmount() {
        const double withdrawalAmount = 2000;

        if (balance >= withdrawalAmount) {
            balance -= withdrawalAmount;
            cout << "��������� ������. ������� ������: " << balance << " BGN\n";
        } else {
            cout << "������������ ��������. ������������ � ���������� " << withdrawalAmount << " BGN\n";
        }
    }
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
    int numAccounts;
    cout << "�������� ���� ������: ";
    cin >> numAccounts;

    
    Account* accounts = new Account[numAccounts];

    
    for (int i = 0; i < numAccounts; ++i) {
        int accNumber, depType;
        string name;
        double initialBalance;

        cout << "�������� ����� �� ������ " << i + 1 << ":\n";
        
        cout << "�������� ����� �� ������: ";
        cin >> accNumber;

        cout << "�������� ��� ��������� ������: (0-�����������, 1-����������, 2-�����������, 3-�������): ";
        cin >> depType;

        cout << "�������� ��� �� �����������: ";
        cin.ignore(); 
        getline(cin, name);

        cout << "�������� ������ ����: ";
        cin >> initialBalance;

        accounts[i] = Account(accNumber, depType, name, initialBalance);
    }

    
    for (int i = 0; i < numAccounts; ++i) {
        cout << "������ " << i + 1 << ":\n";
        accounts[i].displayData();
        cout << endl;
    }

    
    int accountToCheck;
    bool accountFound = false;

    while (!accountFound) {
        cout << "�������� ������ �� ��������: ";
        cin >> accountToCheck;

        for (int i = 0; i < numAccounts; ++i) {
            if (accounts[i].accountExists(accountToCheck)) {
                cout << "������ " << accountToCheck << " ���������� � ������.\n";
                accounts[i].withdrawAmount(); 
                accountFound = true;
                break;
            }
        }

        if (!accountFound) {
            cout << "���� ����� ����� �� ������. ���� �������� �������� ����� �� ������.\n";
        }
    }

    
    delete[] accounts;

    return 0;
}

