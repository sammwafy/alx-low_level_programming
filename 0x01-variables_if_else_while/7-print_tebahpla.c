#include <stdio.h>

/**
* main - Print the reversed alphabet in lowercase letters
*
* Return: 0 always
*/

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

	putchar('\n');

	return (0);
}
