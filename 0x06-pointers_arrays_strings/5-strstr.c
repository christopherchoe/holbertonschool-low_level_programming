#include <stdio.h>
#include "holberton.h"

/**
 * *_strstr - locates a substring in a string
 *
 * @haystack: pointer to string to search through
 * @needle: pointer to substring to search for
 * Return: pointer to beginning of located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
  int i, k, n;

  for (i = 0; *(haystack + i) != '\0'; i++)
    {
      if (*(haystack + i) == *(needle))
	{
	  k = 1;
	  n = i + 1;
	  while (*(needle + k) != '\0')
	    {
	      if (*(haystack + n) == *(needle + k))
		{
		  k++;
		  n++;
		}
	      else
		{
		  break;
		}
	    }
	  if (*(needle + k) == '\0')
	    return (haystack + i);
	}
    }
  return (NULL);
}
