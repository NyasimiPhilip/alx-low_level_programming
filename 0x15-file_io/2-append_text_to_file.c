#include "main.h"
/*
 * Appends text to a file.
 * Parameters:
 * filename: the name of the file to append to
 * text_content: the text to append to the file
 * Returns:
 *  1 on success
 * -1 on failure
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
