#include "main.h"
#include <stdlib.h>/**
 * Read up to `letters` bytes from the file `filename` and write the contents
 * to the standard output. Returns the number of bytes read and written, or
 * 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = (char *) malloc(letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if
		(bytes_written == -1 || bytes_written != bytes_read)
		{
			free(buffer);
			close(fd);
			return (0);
		}
	free(buffer);
	close(fd);
	return (bytes_written);
}
