#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
  * read_textfile - reads a text file and prints it to standard out
  * @filename: name of file
  * @letters: how many letters to read and print
  * Return: 0 if error, otherwise number letters printed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fi;
	unsigned int re, wr;
	char *buf;

	if (!filename)
		return (0);
	fi = open(filename, O_RDWR);
	if (fi == -1)
		return (0);
	buf = malloc(sizeof(char) * letters + 1);
	if (!buf)
		return (0);
	re = read(fi, buf, letters);
	buf[re] = '\0';
	wr = write(1, buf, re);
	if (re != wr)
		return (0);
	free(buf);
	return (wr);
}

