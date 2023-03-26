#include <stdio.h>
#include <stdbool.h>
#include "main.h"
/**
*count - to count letters
*@i: a num
*@y: a num
*@c: a strin
*Return: Always 0 (Success)
*/
int count(int i, char *c, int y)
{
	if (c[i] == '\0')
		return (y);
	y++;
	i++;
	return (count(i, c, y));
}
/**
*check - Entry point
*@flag: a flag
*@c: the string
*@n: number of letters
*@i: a num
*Return: Always 0 (Success)
*/
int check(bool flag, char *c, int n, int i)
{
	if (i >= n / 2 || flag == false)
		return (flag);
	if (c[i] != c[n - 1 - i])
	{
		flag = false;
		return (flag);
	}
	else
	{
		i++;
		check(flag, c, n, i);
	}
	return (check(flag, c, n, i));
}
/**
*is_palindrome - a function that returns 1 if a string is a pal.
*@s: the string
*Return: Always 0 (Success)
*/
int is_palindrome(char *s)
{
	int v;

	v = check(true, s, count(0, s, 0), 0);
	if (v != 0)
		return (1);
	else
		return (0);
}
