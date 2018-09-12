#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is ", sizeof("and that piece of art is "));
	write(2, "useful\" - Dora Korpar, ", sizeof("useful\" - Dora Korpar, "));
	write(2, "2015-10-19\n", sizeof("2015-10-19\n"));
	return (1);
}
