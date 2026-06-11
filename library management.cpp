#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    int copiesAvailable;

public:
    void inputDetails() {
        cout << "Enter Book Title: ";
        getline(cin >> ws, title); 
        cout << "Enter Author: ";
        getline(cin, author);
        cout << "Enter Number of Copies Available: ";
        cin >> copiesAvailable;
    }

    void borrowBook() {
        if (copiesAvailable > 0) {
            copiesAvailable--;
            cout << "\n--- Book successfully borrowed! ---" << endl;
        } else {
            cout << "\nSorry, \"" << title << "\" is currently out of stock." << endl;
        }
    }


    void displayDetails() {
        cout << "\n--- Book Details ---" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies Available: " << copiesAvailable << endl;
    }
};

int main() {
    Book myBook;

    cout << "=== Initialize Book Record ===" << endl;
    myBook.inputDetails();

    myBook.displayDetails();

    cout << "\nAttempting to borrow the book...";
    myBook.borrowBook();

    cout << "\n=== Updated Records ===";
    myBook.displayDetails();

    return 0;
}