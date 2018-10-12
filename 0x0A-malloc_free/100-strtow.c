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
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) != ' ')
		{
			if (*(str + i + 1) == ' ' || *(str + i + 1) == '\0')
				word_count++;
		}
	}
	a = malloc(sizeof(*a) * (word_count + 1));
	if (a == NULL || word_count == 0)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
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
