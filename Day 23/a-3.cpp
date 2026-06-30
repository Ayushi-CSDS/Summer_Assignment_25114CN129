#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    int i;

    // Count characters of first string
    for (i = 0; str1[i] != '\0'; i++) {
        freq[(int)str1[i]]++;
    }

    // Subtract characters of second string
    for (i = 0; str2[i] != '\0'; i++) {
        freq[(int)str2[i]]--;
    }

    // Check frequencies
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";

    return 0;
}