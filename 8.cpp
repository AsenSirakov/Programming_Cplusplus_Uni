#include <iostream>
#include <string>

using namespace std;

class Book {
protected:
    string title;
    float price;
    int pages;

public:
    Book() {}

    void getDetails() {
        cout << "Enter title: ";
        cin.ignore();
        getline(cin, title);

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter number of pages: ";
        cin >> pages;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Pages: " << pages << endl;
    }
};

class PaperBook : public Book {
private:
    int coverType; 

public:
    PaperBook() {}

    void getDetails() {
        Book::getDetails();
        cout << "Enter cover type (1 for soft cover, 2 for hard cover): ";
        cin >> coverType;
    }

    void pbook_display() {
        Book::display();
        cout << "Cover type: " << (coverType == 1 ? "Soft cover" : "Hard cover") << endl;
    }
};

class EBook : public Book {
private:
    int fileSize;

public:
    EBook() {}

    void getDetails() {
        Book::getDetails();
        cout << "Enter file size (in bytes): ";
        cin >> fileSize;
    }

    void ebook_display() {
        Book::display();
        cout << "File size: " << fileSize << " bytes" << endl;
    }
};

int main() {
    int numPaperBooks, numEBooks;

    cout << "Enter the number of paper books: ";
    cin >> numPaperBooks;

    cout << "Enter the number of e-books: ";
    cin >> numEBooks;

    PaperBook* pbArray = new PaperBook[numPaperBooks];
    EBook* ebArray = new EBook[numEBooks];

    cout << "\nEnter details for the paper books:" << endl;
    for (int i = 0; i < numPaperBooks; ++i) {
        cout << "\nPaper Book " << i + 1 << ":" << endl;
        pbArray[i].getDetails();
    }

    cout << "\nEnter details for the e-books:" << endl;
    for (int i = 0; i < numEBooks; ++i) {
        cout << "\nE-Book " << i + 1 << ":" << endl;
        ebArray[i].getDetails();
    }

    cout << "\nPaper book details:" << endl;
    for (int i = 0; i < numPaperBooks; ++i) {
        cout << "\nPaper Book " << i + 1 << ":" << endl;
        pbArray[i].pbook_display();
    }

    cout << "\nE-book details:" << endl;
    for (int i = 0; i < numEBooks; ++i) {
        cout << "\nE-Book " << i + 1 << ":" << endl;
        ebArray[i].ebook_display();
    }

    delete[] pbArray;
    delete[] ebArray;

    return 0;
}

