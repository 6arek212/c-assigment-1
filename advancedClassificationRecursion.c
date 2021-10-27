#include "NumClass.h"

int isPalindromeHelper(int n, int temp)
{
    if (n == 0)
        return temp;

    temp = (temp * 10) + (n % 10);
    return isPalindromeHelper(n / 10, temp);
}

int isPalindrome(int n)
{
    return isPalindromeHelper(n, 0) == n ? 1 : 0;
}










int power(int x, int e)
{
    if (e == 0)
    {
        return 1;
    }
    return x * power(x, e - 1);
}

int isArmstrongHelper(int x, int digits)
{
    if (x == 0)
        return 0;

    return (power(x % 10, digits) + isArmstrongHelper(x / 10, digits));
}

int isArmstrong(int x)
{
    int y = x;
    int digits = 0;

    while (y)
    {
        digits++;
        y /= 10;
    }

    if (x == isArmstrongHelper(x, digits))
        return 1;
    return 0;
}
