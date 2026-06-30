#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    char longest[100];
    char word[100];

    int i = 0, j = 0, maxLen = 0;

    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    while (true) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';

            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }

            j = 0;

            if (str[i] == '\0')
                break;
        }
        i++;
    }

    cout << "Longest Word = " << longest;

    return 0;
}