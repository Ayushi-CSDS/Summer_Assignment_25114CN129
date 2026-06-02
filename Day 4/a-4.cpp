#include <iostream>
using namespace std;

int main()
{
    int start, end, num, temp, r, sum;

    cin >> start >> end;

    for(num = start; num <= end; num++)
    {
        temp = num;
        sum = 0;

        while(temp != 0)
        {
            r = temp % 10;
            sum = sum + (r * r * r);
            temp = temp / 10;
        }

        if(sum == num)
            cout << num << " ";
    }

    return 0;
}