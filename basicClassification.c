#include "NumClass.h"

int isPrime(int x)
{
    int flag = 1;

    for (int i = 2; i < x && flag; i++)
    {
        if (x % i == 0)
        {
            flag = 0;
        }
    }

    return flag;
}

int isStrong(int x)
{
    int sum = 0;
    int y = x;

    while (y)
    {
        int digit = y % 10;
        //get factorial of digit
        int factorial = 1;
        while (digit)
        {
            factorial *= digit;
            digit--;
        }
        sum += factorial;
        y /= 10;
    }

    if (sum == x)
    {
        return 1;
    }
    return 0;
}