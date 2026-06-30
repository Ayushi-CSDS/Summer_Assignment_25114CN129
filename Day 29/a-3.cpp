#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    int choice;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    do {
        cout << "\n===== STRING MENU =====\n";
        cout << "1. Find Length\n";
        cout << "2. Reverse String\n";
        cout << "3. Convert to Uppercase\n";
        cout << "4. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Length = " << strlen(str) << endl;
            break;

        case 2: {
            char temp[100];
            strcpy(temp, str);

            int len = strlen(temp);

            for (int i = 0; i < len / 2; i++) {
                char ch = temp[i];
                temp[i] = temp[len - 1 - i];
                temp[len - 1 - i] = ch;
            }

            cout << "Reverse = " << temp << endl;
            break;
        }

        case 3:
            for (int i = 0; str[i] != '\0'; i++) {
                if (str[i] >= 'a' && str[i] <= 'z')
                    cout << char(str[i] - 32);
                else
                    cout << str[i];
            }
            cout << endl;
            break;

        case 4:
            cout << "Exit";
            break;

        default:
            cout << "Invalid Choice";
        }

    } while (choice != 4);

    return 0;
}