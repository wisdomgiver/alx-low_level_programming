#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: C program that prints out two strings
 * Return: (1) if successful
 */

int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, sizeof(message) - 1);
	return (1);
}
