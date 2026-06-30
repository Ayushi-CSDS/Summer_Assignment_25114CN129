#include <iostream>
using namespace std;

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    Contact c[10];
    int n;

    cout << "Enter Number of Contacts: ";
    cin >> n;

    cin.ignore();

    for (int i = 0; i < n; i++) {

        cout << "\nContact " << i + 1 << endl;

        cout << "Name: ";
        cin.getline(c[i].name, 50);

        cout << "Phone: ";
        cin.getline(c[i].phone, 15);

        cout << "Email: ";
        cin.getline(c[i].email, 50);
    }

    cout << "\n===== CONTACT LIST =====\n";

    for (int i = 0; i < n; i++) {

        cout << "\nName  : " << c[i].name << endl;
        cout << "Phone : " << c[i].phone << endl;
        cout << "Email : " << c[i].email << endl;
    }

    return 0;
}