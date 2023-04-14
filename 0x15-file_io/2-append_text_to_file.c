#include "main.h"
/**
 * append_text_to_file - Write a function that appends text at the end of a fil
 * @filename: the file's name
 * @text_content: the file's content
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, w, n;

	n = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (n = 0; text_content[n]; )
			n++;
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	w = write(fp, text_content, n);
	if (fp == -1 || w == -1)
		return (-1);
	close(fp);
	return (1);
}
