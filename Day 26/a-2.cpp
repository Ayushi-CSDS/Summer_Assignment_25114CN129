#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
        cout << "You are Eligible to Vote.";
    else
        cout << "You are Not Eligible to Vote.";

    return 0;
}