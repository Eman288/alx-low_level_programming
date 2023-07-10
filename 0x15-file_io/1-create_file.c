#include "main.h"
/**
 * create_file - Create a function that creates a file.
 * @filename: the new file name
 * @text_content: the text to write to the file
 * *Return: Always 1 (Success) or -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n, w;

	n = 0;
	if (filename == NULL)
		return (-1);
	while (text_content[n])
	{
		n++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	w = write(fd, text_content, n);
	if (w < 0)
		return (-1);
	close(fd);
	return (1);
}
