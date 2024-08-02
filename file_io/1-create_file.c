#include "main.h"

/**
*create_file - Create 'function that creates a file'
*@filename: name of th file
*@text_content: NULL terminated string to write to the file
*Return: 1 if success, 0 if fail
*/

int	create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		write(fd, text_content, len);
	}
	close(fd);
	return (1);
}