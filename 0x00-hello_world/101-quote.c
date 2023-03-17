#include <unistd.h>
/**
 * main - function that write to stdout
 *
 * Return: 0 always
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
