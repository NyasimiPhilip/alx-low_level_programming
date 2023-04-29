#include "main.h"
/**
 * create_file - Creates a file with given text content
 * @filename: string specifying the file name
 * @text_content: is a string
 * Return: int
 **/
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, text_len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	bytes_written = write(fd, text_content, text_len);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
