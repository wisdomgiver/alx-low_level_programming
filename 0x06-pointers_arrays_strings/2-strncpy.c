#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: main string
 * @src: set for replacement
 * @n: number of places
 * Return: 0 if successful
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *original_dest = dest;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (original_dest);
}
