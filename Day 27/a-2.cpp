#include <iostream>
using namespace std;

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    Employee e[10];
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        cout << "\nEmployee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> e[i].id;

        cin.ignore();

        cout << "Employee Name: ";
        cin.getline(e[i].name, 50);

        cout << "Salary: ";
        cin >> e[i].salary;
    }

    cout << "\n----- Employee Details -----\n";

    for (int i = 0; i < n; i++) {

        cout << "\nID      : " << e[i].id;
        cout << "\nName    : " << e[i].name;
        cout << "\nSalary  : " << e[i].salary << endl;
    }

    return 0;
}