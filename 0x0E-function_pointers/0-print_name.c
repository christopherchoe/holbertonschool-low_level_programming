#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - function that prints a name
 *
 * @name: pointer to name to print
 * @f: function to use to print name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return NULL;
	f(name);
}

