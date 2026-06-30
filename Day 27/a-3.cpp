#include <iostream>
using namespace std;

struct Employee {
    int id;
    char name[50];
    float basicSalary, hra, da, totalSalary;
};

int main() {
    Employee e;

    cout << "Enter Employee ID: ";
    cin >> e.id;

    cin.ignore();

    cout << "Enter Employee Name: ";
    cin.getline(e.name, 50);

    cout << "Enter Basic Salary: ";
    cin >> e.basicSalary;

    e.hra = 0.20 * e.basicSalary;
    e.da = 0.10 * e.basicSalary;
    e.totalSalary = e.basicSalary + e.hra + e.da;

    cout << "\n----- Salary Details -----\n";
    cout << "Employee ID   : " << e.id << endl;
    cout << "Employee Name : " << e.name << endl;
    cout << "Basic Salary  : " << e.basicSalary << endl;
    cout << "HRA           : " << e.hra << endl;
    cout << "DA            : " << e.da << endl;
    cout << "Total Salary  : " << e.totalSalary << endl;

    return 0;
}