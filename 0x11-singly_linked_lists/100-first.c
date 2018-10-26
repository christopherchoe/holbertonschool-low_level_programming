#include "lists.h"
#include <stdio.h>

void print_fast(void) __attribute__ ((constructor));

/**
  * print_fast - prints before main
  *
  * Return: void
  */
void print_fast(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}
