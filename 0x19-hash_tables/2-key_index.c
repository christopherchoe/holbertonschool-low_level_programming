#include "hash_tables.h"

/**
  * key_index - gives the index of a key
  *
  * @key: the key to find index for
  * @size: size of the array of hash table
  * Return: the index of the key
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index = 0;

	hash = hash_djb2(key);

	if (size != 0)
		index = hash % size;
	return (index);
}
