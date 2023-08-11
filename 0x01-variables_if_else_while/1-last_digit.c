#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point to main program will assign a random number
 * Description: to print the last digit of the number and test some conditions
 * Return: 0 if successful
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d, %d is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d, is  0\n", n);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d, %d is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}
