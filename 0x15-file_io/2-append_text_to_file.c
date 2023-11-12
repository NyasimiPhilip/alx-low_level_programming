#include "main.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: a pointer to a string.
 * @text_content: a pointer to a string
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, content_len = 0;

	if (!filename)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[content_len])
		{
			content_len++;
		}
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	bytes_written = write(fd, text_content, content_len);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
