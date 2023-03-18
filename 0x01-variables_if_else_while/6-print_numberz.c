#include <stdio.h>

/**
* main - function
* 
* Return:0 always
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	putchar(digit + '0');

	putchar('\n');

	return (0);
}
