#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_string(va_list list)
{
	char *temp;

	temp = va_arg(list, char *);
	if (temp == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", temp);
}

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_all - prints anything based on passed format string
 *
 * @format: constant that tells what type of format to print
 * Return: void
 */
void print_all(const char * const format, ...)
{
	type_print typs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	int i;

	i = 0;
	while (typs[i].type_name && typs[i].t != a)
		i++;
}
