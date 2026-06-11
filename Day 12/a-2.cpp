#include <iostream>
using namespace std;

bool isArmstrong(int n)
{
    int original = n;
    int sum = 0;

    while(n > 0)
    {
        int digit = n % 10;
        sum += digit * digit * digit;
        n = n / 10;
    }

    return sum == original;
}

int main()
{
    int num;
    cin >> num;

    if(isArmstrong(num))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}