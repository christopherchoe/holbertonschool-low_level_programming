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
	char **a;
	int i, k, n, word_count = 0, word_len = 0, current_word = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; *(str + i); i++)
	{
		if (*(str + i) != ' ')
		{
			word_count++;
			while (*(str + i) != ' ' && *(str + i))
				i++;
		}
	}
	a = malloc(sizeof(char *) * (word_count + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; current_word < word_count; i++)
	{
		word_len = 0;
		if (*(str + i) != ' ')
		{
			for (k = i; *(str + k) != ' '; k++)
			{
				if (*(str + k) != '\0')
					word_len++;
			}
			a[current_word] = malloc(sizeof(char) * (word_len + 1));
			if (a == NULL)
			{
				for (; current_word >= 0; current_word--)
					free(a[current_word]);
				free(a);
				return (NULL);
			}
			for (n = 0; i < k && *(str + i) != '\0'; i++)
				a[current_word][n++] = *(str + i);
			a[current_word++][n] = '\0';
		}
	}
	a[word_count] = NULL;
	return (a);
}
