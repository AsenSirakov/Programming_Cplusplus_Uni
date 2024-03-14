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
            cout << "��������� � �������. ������� ������ � ��������: " << currentBalance << " BGN\n";
        } else {
            cout << "������������ ������� ����. ��������� �� " << withdrawalAmount << " BGN �� � ��������.\n";
        }
    }
};

void displayAccountInfo(const Account& acc) {
    cout << "����� �� ������: " << acc.accountNumber << endl;
    cout << "��� �������: " << acc.depositType << endl;
    cout << "��� �� ����������: " << acc.ownerName << endl;
    cout << "������ ����: " << acc.currentBalance << endl;
}

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

        cout << "�������� ��� ��������� ������ (0-�����������, 1-����������, 2-�����������, 3-�������): ";
        cin >> depType;

        cout << "�������� ��� �� ����������: ";
        cin.ignore(); 
        getline(cin, name);

        cout << "�������� ������ ����: ";
        cin >> initialBalance;

        accounts[i] = Account(accNumber, depType, name, initialBalance);
    }

    for (int i = 0; i < numAccounts; ++i) {
        cout << "������ " << i + 1 << ":\n";
        displayAccountInfo(accounts[i]);
        cout << endl;
    }

    int accountToCheck;
    bool accountFound = false;

    while (!accountFound) {
        cout << "�������� ����� �� ������ �� ��������: ";
        cin >> accountToCheck;

        for (int i = 0; i < numAccounts; ++i) {
            if (accounts[i].getAccountNumber() == accountToCheck) {
                cout << "������ " << accountToCheck << " � �������� � �������.\n";
                accounts[i].withdrawAmount(); 
                accountFound = true;
                break;
            }
        }

        if (!accountFound) {
            cout << "������ � ����� ����� �� � ��������. ���� �������� �������� ����� �� ������.\n";
        }
    }

    delete[] accounts;

    return 0;
}

