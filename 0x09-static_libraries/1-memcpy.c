#include <string.h>
/**
*_memcpy  - Entry point
*@dest: a char
*@src: a char
*@n: a num
*Return: Always 0 (Success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
