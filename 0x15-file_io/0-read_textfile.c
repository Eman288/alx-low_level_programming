#include "main.h"
#include <stdlib.h>

/**
*read_textfile - a function that reads a text file and prints it to the POSIX
*@filename: the file name
*@letters: size of the letters
*Return: Always 0 (Success)
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, w, r;

	char *bur;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	bur = malloc(sizeof(char) * letters);
	r = read(fp, bur, letters);
	w = write(STDOUT_FILENO, bur, r);
	free(bur);
	close(fp);
	return(w);
}
