#include <iostream>
using namespace std;

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    Item item[10];
    int n;

    cout << "Enter number of items: ";
    cin >> n;

    cin.ignore();

    for (int i = 0; i < n; i++) {

        cout << "\nItem " << i + 1 << endl;

        cout << "Item ID: ";
        cin >> item[i].id;

        cin.ignore();

        cout << "Item Name: ";
        cin.getline(item[i].name, 50);

        cout << "Quantity: ";
        cin >> item[i].quantity;

        cout << "Price: ";
        cin >> item[i].price;
    }

    cout << "\n===== INVENTORY =====\n";

    for (int i = 0; i < n; i++) {

        cout << "\nID       : " << item[i].id << endl;
        cout << "Name     : " << item[i].name << endl;
        cout << "Quantity : " << item[i].quantity << endl;
        cout << "Price    : Rs. " << item[i].price << endl;
    }

    return 0;
}