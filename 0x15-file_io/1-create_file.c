#include "main.h"
/**
 * create_file - Create a function that creates a file.
 *@filename: the file's name
 *@text_content: the file's content
 */
int create_file(const char *filename, char *text_content)
{
	int fp, n, w;

	w = 0;
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (n = 0; text_content[n]; )
		{
			n++;
		}
	}
	fp = open(filename, O_CREAT | O_RDWR, 0600);
	w = write(fp, text_content, n);
	if (fp == -1 || w == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
