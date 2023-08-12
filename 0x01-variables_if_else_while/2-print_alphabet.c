#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase, followed by a new line
 * Description: Program must use putchars only not printf, and a max of two
 * Return: 0 if successful
 */
int main(void)
{
        char letter;

        for (letter = 'a'; letter <= 'z'; && letter++)
        {
                putchar(letter);
        }

        putchar('\n');
        return (0);
}
