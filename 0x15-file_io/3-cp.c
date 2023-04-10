#include "main.h"
#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
=======
#include <stlib.h>

>>>>>>> 2860ac4f7520a8bac608ccb049b2eddb7edcd9df
/**
 * error_check - checks if files can be opened.
 * @fd1: file descriptor of first file.
 * @fd2: file descriptor of second file.
 * @argv: arguments vector.
 * Return: no return.
 */
void check_num_args(int num_args)
{
	if (num_args != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
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
void check_fd_close(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
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
	return 0;
}
