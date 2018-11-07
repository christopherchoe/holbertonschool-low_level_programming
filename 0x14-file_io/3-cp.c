#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void error_file_from(char *);
void error_file_to(char *);
void error_close(int);

/**
  * copy_file - copies a file to another
  * @file_to: file to copy to
  * @file_from: file to copy from
  * Return: 1 if success
  */
int copy_file(char *file_to, char *file_from)
{
	int to, from, wr, re = 1;
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (!buf || !file_to)
		error_file_to(file_to);

	from = open(file_from, O_RDONLY);
	if (from == -1)
		error_file_from(file_from);

	to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
		error_file_to(file_to);

	while (re != 0)
	{
		re = read(from, buf, 1024);
		if (re == -1)
			error_file_from(file_from);
		wr = write(to, buf, re);
		if (wr == -1)
			error_file_to(file_to);
	}
	error_close(to);
	error_close(from);
	return (1);
}

/**
  * error_close - error procedure when issue with closing
  * @
  * Return: void
  */
void error_close(int fd)
{
	int err;

	err = close(fd);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
  * error_file_from - error procedure when issue with file from
  * @file_from: name of file from
  * Return: void
  */
void error_file_from(char *file_from)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}

/**
  * error_file_to - error procedure when file to cant be created
  * @file_to: name of file to
  * Return: void
  */
void error_file_to(char *file_to)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_to);
	exit(99);
}

/**
  * main - main of our program
  * @argc: number of arugments
  * @argv: array of arguments
  * Return: 0
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[2], argv[1]);
	return (0);
}


