#include "main.h"

/**
*create_file - Create 'function that creates a file'
*@filename: name of the file
*@text_content: NULL terminated string to write to the file
*Return: 1 if success, 0 if fail
*/

int	create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
    ssize_t	write_2;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
        write_2 = write(fd, text_content, len);
        if (write_2 == -1)
        {
            close(fd);
            return (-1);
        }
	}
	close(fd);
	return (1);
}