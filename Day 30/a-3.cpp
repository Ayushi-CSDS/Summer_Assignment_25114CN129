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
    cin.ignore();

    for (int i = 0; i < n; i++) {

        cout << "\nEmployee " << i + 1 << endl;

        cout << "ID: ";
        cin >> e[i].id;
        cin.ignore();

        cout << "Name: ";
        cin.getline(e[i].name, 50);

        cout << "Salary: ";
        cin >> e[i].salary;
        cin.ignore();
    }

    cout << "\n===== EMPLOYEE DETAILS =====\n";

    for (int i = 0; i < n; i++) {

        cout << "\nID     : " << e[i].id;
        cout << "\nName   : " << e[i].name;
        cout << "\nSalary : " << e[i].salary << endl;
    }

    return 0;
}