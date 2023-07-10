#include "main.h"
#include <stdlib.h>
/**
*read_textfile - a function that reads a text file and prints
*@filename: the file we will read
*@letters: the number of chars we will read
*Return: Always 0 (Success)
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;

	int r, w, fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = malloc(sizeof(char) * letters);
	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	free(buff);
	close(fd);
	return (w);
}
