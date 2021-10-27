#include "NumClass.h"
#include <stdio.h>

int main()
{

    int x, y;

    printf("enter 2 numbers : \n");
    scanf("%d", &x);
    scanf("%d", &y);

    if (x < y)
    {
        for (int i = x; i <= y; i++)
        {
            if (isPrime(i))
            {
                printf("number %d is prime \n",i);
            }
            if (isArmstrong(i))
            {
                printf("number %d is armstrong \n",i);
            }
            
            if (isStrong(i))
            {
                printf("number %d is strong \n",i);
            }

            if (isPalindrome(i))
            {
                printf("number %d is palindrome \n",i);
            }
        }
    }else{
         for (int i = y; i <= x; i++)
        {
            if (isPrime(i))
            {
                printf("number %d is prime \n",i);
            }
            if (isArmstrong(i))
            {
                printf("number %d is armstrong \n",i);
            }
            
            if (isStrong(i))
            {
                printf("number %d is strong \n",i);
            }

            if (isPalindrome(i))
            {
                printf("number %d is palindrome \n",i);
            }
        }
    }
    

    return 0;
}