#include "holberton.h"

/**
  * get_endianness - checks the endianness
  *
  * Return: void
  */
int get_endianness(void)
{
	int test = 256;
	void *i = &test;
	/*
	if ((*((char *)i + 1) & 1) != 0)
		return (1);
	else
		return (0);*/
	return (1);
}

