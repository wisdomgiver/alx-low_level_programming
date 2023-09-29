#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int bit_position;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (bit_position = (sizeof(unsigned long int) * 8) - 1; bit_position >= 0; bit_position--)
	{
		if ((n >> bit_position) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1)
			_putchar('0');
	}
}
