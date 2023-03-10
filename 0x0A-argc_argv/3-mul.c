#include <stdio.h>
#include "main.h"
/**
*atoi - a conversion function
*@s: a char
*Return: Always 0 (Success)
*/
int atoi(char *s)
{
	int i;

    	i=0;
    	while (s[i] != '\0')
	{
		i++;
	}
	if (s[0] == '-')
	{
        	i--;
        	int n, m;

		n =0;
        	int c;

       		 m = 0;
		 while (i != 0)
		 {
			 c = s[i] - 48;
            		n += c * pow(10,m);
            		m++;
            		i--;
        	}
		 return (n * -1);
	}
	else
	{
        	int n, m;

        	n =0;
       		int c;

       		 m = 0;
		 while (i != 0)
		 {
            		c = s[i-1] - 48;
           		 n += c * pow(10,m);
           		 m++;
           		 i--;
        	}
      		 return (n);
	}
}
/**
*main - Entry point
*@argc: the number of arguments
*@argv: thar array of arguments
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int n, m;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	m = aroi(argv[2];
	printf("%d\n", n * m);
	return (0);
}
