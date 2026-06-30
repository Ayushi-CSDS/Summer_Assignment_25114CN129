#include <iostream>
using namespace std;

int main() {
    int roll[10], marks[10], n;
    char name[10][50];

    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Roll No: ";
        cin >> roll[i];
        cin.ignore();

        cout << "Name: ";
        cin.getline(name[i], 50);

        cout << "Marks: ";
        cin >> marks[i];
        cin.ignore();
    }

    cout << "\n===== STUDENT RECORDS =====\n";

    for (int i = 0; i < n; i++) {
        cout << "\nRoll No : " << roll[i];
        cout << "\nName    : " << name[i];
        cout << "\nMarks   : " << marks[i] << endl;
    }

    return 0;
}