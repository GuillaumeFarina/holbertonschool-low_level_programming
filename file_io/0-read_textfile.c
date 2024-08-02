#include "main.h"

/**
 * read_textfile - Read 'text file and prints it to the POSIX standard output'
 * @filename: name of th file
 * @letters: Number of letters it should read and print
 * Return: 0 if file open,read or 'filename' is NULL
 * and 'write' fails does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t write_2, read_2;
	char *buffer;

	buffer = malloc(letters * sizeof(char));

	if (!buffer)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	read_2 = read(fd, buffer, letters);
	write_2 = write(STDOUT_FILENO, buffer, read_2);

	if (fd == -1 || write_2 != read_2 || read_2 == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (write_2);
}
