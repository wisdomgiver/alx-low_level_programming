#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while(*dest)
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
