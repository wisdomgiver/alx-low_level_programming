#include "main.h"

/**
 * _strncat - Entry point
 * @dest: main string
 * @src: second string to be concatenated
 * @n: number of bytes from src
 * Return: 0 if successful
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest)
	{
		dest++;
	}

	while (n > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	if (n > 0)
	{
		*dest = '\0';
	}

	return (original_dest);
}
