#include <stdio.h>
#include <stdbool.h>
#include "main.h"
/**
*check - Entry point
*@flag: a flag
*@c: the string
*@n: number of letters
*@i: a num
*Return: Always 0 (Success)
*/
int check(bool flag, char *c,int n, int i)
{
        if (i >= n / 2 || flag == false)
                return (flag);
        if (c[i] != c[n - 1 - i])
        {
                flag = false;
                return (flag);
        }else
        {
            i++;
            check(flag,c,n,i);
        }
	        return(check(flag,c,n,i));
}
/**
*is_palindrome - a function that returns 1 if a string is a palindrome and 0 if not.
*@S: the string
*Return: Always 0 (Success)
*/
int is_palindrome(char *s)
{
	int m, v;

	m = 0;
	while (s[m] != '\0')
	{
		m++;
	}
	v = check(true, s, m,0);
	if (v != 0)
		return (1);
	else
		return (0);
}
