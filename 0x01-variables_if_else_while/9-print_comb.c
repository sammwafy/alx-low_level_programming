#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: prints single digit numbers of base 10
 * starting from 0 then a new line.
 * Return: 0 always
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}

