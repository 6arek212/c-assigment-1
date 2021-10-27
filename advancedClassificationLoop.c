#include "NumClass.h"


int isArmstrong(int x)
{
    int sum = 0;
    int y = x;
    int numberOfDigits = 0;

    while (y)
    {
        numberOfDigits++;
        y/=10;
    }

    y = x;


    while (y)
    {
        int dig = y % 10;
        int power = 1;
        for (int i = 0; i < numberOfDigits; i++)
        {
            power *= dig;
        }
        sum += power;
        y /= 10;
    }

    if (sum == x)
    {
        return 1;
    }

    return 0;
}

int isPalindrome(int x)
{
	int org = x;
	int reversed = 0;

	while (org)
	{
		int dig = org % 10;

		reversed = reversed * 10 + dig;

		org /= 10;
	}

	while (x)
	{
		int right = x % 10;
		int left = reversed % 10;

		if (right != left)
		{
			return 0;
		}
		x /= 10;
		reversed /= 10;
	}
	return 1;
}


