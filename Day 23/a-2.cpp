#include <iostream>
using namespace std;

int main() {
    char str[100];
    int freq[256] = {0};

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;

        if (freq[(int)str[i]] == 2) {
            cout << "First Repeating Character = " << str[i];
            return 0;
        }
    }

    cout << "No Repeating Character Found";

    return 0;
}