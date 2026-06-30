#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    Student s[10];
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Roll No: ";
        cin >> s[i].rollNo;

        cin.ignore();

        cout << "Name: ";
        cin.getline(s[i].name, 50);

        cout << "Marks: ";
        cin >> s[i].marks;
    }

    cout << "\n----- Student Records -----\n";

    for (int i = 0; i < n; i++) {
        cout << "\nRoll No : " << s[i].rollNo;
        cout << "\nName    : " << s[i].name;
        cout << "\nMarks   : " << s[i].marks << endl;
    }

    return 0;
}