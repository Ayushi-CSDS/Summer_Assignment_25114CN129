#include <iostream>
using namespace std;

int main() {
    char name[50];
    int rollNo;
    float m1, m2, m3, m4, m5;
    float total, percentage;

    cout << "Enter Student Name: ";
    cin.getline(name, 50);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Marks of 5 Subjects:\n";
    cout << "Subject 1: ";
    cin >> m1;
    cout << "Subject 2: ";
    cin >> m2;
    cout << "Subject 3: ";
    cin >> m3;
    cout << "Subject 4: ";
    cin >> m4;
    cout << "Subject 5: ";
    cin >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    cout << "\n========== MARKSHEET ==========\n";
    cout << "Student Name : " << name << endl;
    cout << "Roll Number  : " << rollNo << endl;
    cout << "--------------------------------\n";
    cout << "Subject 1 : " << m1 << endl;
    cout << "Subject 2 : " << m2 << endl;
    cout << "Subject 3 : " << m3 << endl;
    cout << "Subject 4 : " << m4 << endl;
    cout << "Subject 5 : " << m5 << endl;
    cout << "--------------------------------\n";
    cout << "Total Marks : " << total << "/500" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade : A+" << endl;
    else if (percentage >= 80)
        cout << "Grade : A" << endl;
    else if (percentage >= 70)
        cout << "Grade : B" << endl;
    else if (percentage >= 60)
        cout << "Grade : C" << endl;
    else if (percentage >= 50)
        cout << "Grade : D" << endl;
    else
        cout << "Grade : F" << endl;

    if (percentage >= 40)
        cout << "Result : PASS" << endl;
    else
        cout << "Result : FAIL" << endl;

    return 0;
}