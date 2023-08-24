#include "main.h"

/**
 * string_toupper - Entry point
 * @str: string of words
 * Return: 0 if true
 */
char *string_toupper(char *str)
{
	char *original = str;
	int i = 0;

	while (original[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (original);

}
