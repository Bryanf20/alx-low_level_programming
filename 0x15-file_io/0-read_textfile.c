#include "main.h"

/**
* read_textfile - a function that reads a text file
* and prints it to the POSIX standard output
* @filename: the file name
* @letters: the number of letters
*
* Return: the actual number of letters or 0 if fails
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buffer;
  /*w -for write and r-for read*/

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	r = read(fd, buffer, letters);
	close(fd);
	if (r == -1)
	{
		free(buffer);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	if (r != w)
		return (0);
	return (w);
}
