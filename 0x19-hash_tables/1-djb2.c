#include "hash_tables.h"

/**
  * hash_djb2 - creates a hash with djb2 algorithm
  *
  * @str: the string key to create a hash for
  * Return: the generated hash
  */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while (*str)
	{
		c = *str++;
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
