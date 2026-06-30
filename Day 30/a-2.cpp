#include <iostream>
using namespace std;

struct Book {
    int id;
    char title[50];
    bool issued;
};

int main() {
    Book b[10];
    int n;

    cout << "Enter number of books: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << endl;

        cout << "Book ID: ";
        cin >> b[i].id;
        cin.ignore();

        cout << "Book Title: ";
        cin.getline(b[i].title, 50);

        b[i].issued = false;
    }

    cout << "\n===== LIBRARY =====\n";

    for (int i = 0; i < n; i++) {
        cout << "Book ID : " << b[i].id << endl;
        cout << "Title   : " << b[i].title << endl;
        cout << "Status  : ";

        if (b[i].issued)
            cout << "Issued";
        else
            cout << "Available";

        cout << "\n\n";
    }

    return 0;
}