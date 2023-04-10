#include "main.h"
#include <stdio.h>

/**
 * error_check - checks if files can be opened.
 * @fd1: file descriptor of first file.
 * @fd2: file descriptor of second file.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_check(int fd1, int fd2, char *argv[])
{
	if (fd1 < 0)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd2 < 0)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, err;
	ssize_t nread, nwrite;
	char buffer[1024];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* Open file_from and file_to */
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_check(fd1, fd2, argv);
	while ((nread = read(fd1, buffer, 1024)) > 0)
	{
		nwrite = write(fd2, buffer, nread);
		if (nwrite != nread)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (nread < 0)
	{
		frintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	err = close(fd1);
	if (err < 0)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	err = close(fd2);
	if (err < 0)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
