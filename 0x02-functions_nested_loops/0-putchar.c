#include "main.h"
/*
 * main - Entry point of the program
 *
 * Return: 0 if successful
 */
int main(void)
{
	char *str = "_putchar";
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);

		i++;
	}
	_putchar('\n');

	return (0);
}
