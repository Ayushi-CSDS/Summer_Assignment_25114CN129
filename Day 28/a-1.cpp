#include <iostream>
using namespace std;

struct Book {
    int id;
    char title[50];
    char author[50];
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

        cout << "Author Name: ";
        cin.getline(b[i].author, 50);
    }

    cout << "\n===== Library Records =====\n";

    for (int i = 0; i < n; i++) {
        cout << "\nBook ID : " << b[i].id << endl;
        cout << "Title   : " << b[i].title << endl;
        cout << "Author  : " << b[i].author << endl;
    }

    return 0;
}