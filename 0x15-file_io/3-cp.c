#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * check_num_args - Checks the number of arguments
 * @num_args: number of command-line arguments
 * Return: void
 */
void check_num_args(int num_args)
{
	if (num_args != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * check_file_read  check file read errors
 * @check: result of a file read operation
 * @file_from: name of the source file
 * @fd_from: file descriptor of the source file
 * @fd_to: file descriptor of the destination file
 * Return: void
 */
void check_file_read(ssize_t check, char *file_from, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}
/**
 * check_file_write - Checks for file write error
 * @check: result of write() function call
 * @file_to: name of destination file being written to
 * @fd_from: file descriptor of source file being read from
 * @fd_to: file descriptor of destination file being written to
 * Return: void
 */
void check_file_write(ssize_t check, char *file_to, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}
/**
 * check_fd_close - check if file descriptor was closed
 * @check: an integer to check for error
 * @fd: an integer file descriptor
 * Return: void
 */
void check_fd_close(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the contents of one file to another
 * @argc: specifies the name of the file
 * @argv: array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t read_len, write_len;
	char buffer[1024];
	mode_t file_perm;

	check_num_args(argc);
	fd_from = open(argv[1], O_RDONLY);
	check_file_read((ssize_t) fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check_file_write((ssize_t) fd_to, argv[2], fd_from, -1);
	read_len = 1024;
	while (read_len == 1024)
	{
		read_len = read(fd_from, buffer, 1024);
		check_file_read(read_len, argv[1], fd_from, fd_to);
		write_len = write(fd_to, buffer, read_len);
		if (write_len != read_len)
			write_len = -1;
		check_file_write(write_len, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	check_fd_close(close_to, fd_to);
	check_fd_close(close_from, fd_from);
	return (0);
}
