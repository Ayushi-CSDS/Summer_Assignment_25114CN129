#include <iostream>
using namespace std;

int roll[10], marks[10];
char name[10][50];
int n;

void input() {
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
}

void display() {
    cout << "\n===== STUDENT DETAILS =====\n";

    for (int i = 0; i < n; i++) {
        cout << "\nRoll No : " << roll[i];
        cout << "\nName    : " << name[i];
        cout << "\nMarks   : " << marks[i] << endl;
    }
}

int main() {
    input();
    display();

    return 0;
}