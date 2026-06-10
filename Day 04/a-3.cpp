#include <iostream>
using namespace std;

int main()
{
    int n, temp, r, sum = 0;

    cin >> n;

    temp = n;

    while(temp != 0)
    {
        r = temp % 10;
        sum = sum + (r * r * r);
        temp = temp / 10;
    }

    if(sum == n)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}