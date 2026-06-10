#include <stdio.h>

int main()
{
    int n, temp, r, rev = 0;

    scanf("%d", &n);

    temp = n\

    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    if (temp == rev)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}