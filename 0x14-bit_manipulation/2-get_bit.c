#include "main.h"
#include <stdio.h>
#include <stdbool.h>
/**
*count - a function to count
* @n: the number
* @m: num
* @v: num
* @flag: flag
*Return:  Always 0 (Success)
*/
int count(int n, int m, int v, bool flag)
{
	int l;

	l = 0;
	while (m != 0)
	{
		v = n;
		if (v - m >= 0)
		{
			flag = true;
			l++;
			n -= m;
		}
		else if (flag == true)
		{
			l++;
		}
		m = m >> 1;
	}
	return (l);
}
/**
*get_bit - a function that returns the value of a bit at a given index.
* @n: the number
* @index: the index
*Return: Always 0 (Success)
*/
int get_bit(unsigned long int n, unsigned int index)
{
	bool flag;

	int m, v, l, k, c;

	unsigned int s;

	m = 1073741824;
	v = n;
	l = 0;
	flag = false;
	if (n == 0 && index == 0)
		return (0);
	l = count(n, m, v, flag);
	s = l;
	if (index >= s)
		return (-1);
	k = 0;
	l--;
	c = l;
	while (m != 0)
	{
		v = n;
		l = c;
		if (v - m >= 0)
		{
			flag = true;
			s = l - k;
			if (s == index)
				return (1);
			n -= m;
			k++;
		}
		else if (flag == true)
		{
			s = l - k;
			if (s == index)
				return (0);
			k++;
		}
		m = m >> 1;
	}
	return (-1);
}
