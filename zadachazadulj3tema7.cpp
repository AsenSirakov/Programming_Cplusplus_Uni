#include <cstdlib>
#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char *argv[]) {
    SetConsoleOutputCP(1251);

    int a[4][5];

    for (int i = 0; i < 4; i++) {
        cout << "Row " << i + 1 << endl;
        for (int j = 0; j < 5; j++) {
            do {
                cout << "a[" << i << "," << j << "] = ";
                cin >> a[i][j];
            } while (a[i][j] < 2 || a[i][j] > 20);
        }
    }

    cout << "Array elements:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Elements from odd rows incremented by 1:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (i % 2 == 0) {
                cout << a[i][j] + 1 << " ";
            }
        }
        cout << endl;
    }

    cout << "Elements from even rows incremented by 2:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (i % 2 != 0) {
                cout << a[i][j] + 2 << " ";
            }
        }
        cout << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}

