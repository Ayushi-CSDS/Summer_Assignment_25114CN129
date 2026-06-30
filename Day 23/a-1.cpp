#include <iostream>
using namespace std;

int main() {
    char str[100];
    int freq[256] = {0};

    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Count frequency
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Find first non-repeating character
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] == 1) {
            cout << "First Non-Repeating Character = " << str[i];
            return 0;
        }
    }

    cout << "No Non-Repeating Character Found";

    return 0;
}