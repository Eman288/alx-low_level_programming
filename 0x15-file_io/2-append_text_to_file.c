#include "main.h"
/**
 * append_text_to_file - Write a function that appends text at the end of a fil
 * @filename: the file
 * @text_content: the text
 * *Return: Always 0 (Success)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, n;

	n = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[n])
		{
			n++;
		}
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	w = write(fd, text_content, n);
	if (w < 0)
		return (-1);
	close(fd);
	return (1);
}
