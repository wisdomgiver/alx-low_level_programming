#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase, followed by a new line
 * Description: Program must use putchars only not printf, and a max of two
 * Return: 1 if successful
 */
int main(void)
{
	char letter;
	char new_letter;

	printf("Enter letter: ");
	scanf("%c", &letter);

	new_letter = letter;

	if (letter >= 'A' && letter <= 'Z')
	{
		new_letter = letter - 'A' + 'a';
	}

	putchar(new_letter);
	putchar('\n');
	return (0);
}
