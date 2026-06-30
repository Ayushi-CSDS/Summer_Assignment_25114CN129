#include <iostream>
using namespace std;

int main() {
    int score = 0, answer;

    cout << "===== QUIZ =====\n\n";

    cout << "1. Capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\n2. 5 + 7 = ?\n";
    cout << "1. 10\n2. 12\n3. 15\n4. 14\n";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\n3. C++ was developed by?\n";
    cout << "1. Dennis Ritchie\n";
    cout << "2. James Gosling\n";
    cout << "3. Bjarne Stroustrup\n";
    cout << "4. Guido van Rossum\n";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\nYour Score = " << score << "/3";

    return 0;
}