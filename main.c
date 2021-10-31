#include "NumClass.h"
#include <stdio.h>

int main()
{
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    int start, end;

    if (x < y)
    {
        start = x;
        end = y;
    }
    else
    {
        start = y;
        end = x;
    }

    printf("The Armstrong numbers are:");
    for (int i = start; i <= end; i++)
    {
        if (isArmstrong(i))
        {
            printf(" %d", i);
        }
    }

    printf("\nThe Palindromes are:");
    for (int i = start; i <= end; i++)
    {
        if (isPalindrome(i))
        {
            printf(" %d", i);
        }
    }

    printf("\nThe Prime numbers are:");
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            printf(" %d", i);
        }
    }

    printf("\nThe Strong numbers are:");
    for (int i = start; i <= end; i++)
    {
        if (isStrong(i))
        {
            printf(" %d", i);
        }
    }
    printf("\n");

    return 0;
}