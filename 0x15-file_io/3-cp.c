#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024

char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - Allocates BUFFER_SIZE bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (buffer == NULL)
	{
		perror("Error");
		exit(1);
	}
	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		perror("Error");
		exit(1);
	}
}
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		perror("Error");
		free(buffer);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		perror("Error");
		free(buffer);
		exit(99);
	}
	do {
		r = read(from, buffer, BUFFER_SIZE);
		if (r == -1)
		{
			perror("Error");
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, r);
		if (w == -1)
		{
			perror("Error");
			free(buffer);
			exit(99);
		}
	} while (r > 0);
	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}
