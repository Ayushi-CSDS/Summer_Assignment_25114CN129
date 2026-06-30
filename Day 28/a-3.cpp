#include <iostream>
using namespace std;

int main() {
    char name[50];
    int tickets;
    const int price = 250;

    cin.ignore();

    cout << "Enter Customer Name: ";
    cin.getline(name, 50);

    cout << "Enter Number of Tickets: ";
    cin >> tickets;

    cout << "\n===== TICKET DETAILS =====\n";
    cout << "Customer Name : " << name << endl;
    cout << "Tickets       : " << tickets << endl;
    cout << "Price/Ticket  : Rs. " << price << endl;
    cout << "Total Amount  : Rs. " << tickets * price << endl;

    return 0;
}