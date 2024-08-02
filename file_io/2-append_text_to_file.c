#include "main.h"

/**
 * append_text_to_file - 'Appends text at the end of a file'
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, index = 0, bytes_w = 0;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (text_content != NULL)
	{
		while (text_content[index])
			index++;
		bytes_w = write(fd, text_content, index);
	}
	if (fd == -1 && bytes_w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
