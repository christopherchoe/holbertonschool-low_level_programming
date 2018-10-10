#include <stdlib.h>
#include <stdio.h>



/**
 * **strtow - splits a string into words
 *
 * @str: string to split
 * Return: pointer to array of strings, or NULL if fail
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	return (s);
}

/**
 * word_size - finds size of word
 *
 * @s: string positioned to find word
 * Return: length of word
 */
int word_size(char *s)
{
	int i, k;

	while (*(s + k) == ' ')
		k++;
	for (i = 0; *(s + k + i) != ' ' && *(s + k + i) != '\0'; i++)
		;
	return (1 + i + (word_size(s + i + k));
}
