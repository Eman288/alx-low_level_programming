#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_buff - create a buffer
 * @fg: the file
 * Return: the buffer
 */

char *get_buff(char *fg)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fg);
		exit(99);
	}
	return (buff);
}
/**
 * file_close - close a file
 * @fg: the file
 */

void file_close(int fg)
{
	int n;

	n = close(fg);
	if (n < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fg);
		exit(100);
	}
}
/**
*main - Write a program that copies the content of a file to another file.
*@argc: the number of variables
*@argv: the array of variables
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int f, t, fr, tw;

	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = get_buff(argv[2]);
	f = open(argv[1], O_RDONLY);
	fr = read(f, buff, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (f < 0 || fr < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
			exit(98);
		}
		tw = write(t, buff, fr);
		if (t < 0 || tw < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
			exit(99);
		}
		fr = read(f, buff, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	} while (fr > 0);
	free(buff);
	file_close(f);
	file_close(t);
	return (0);
}
