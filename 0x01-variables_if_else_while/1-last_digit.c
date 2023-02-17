#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
        int n,m;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        m = n % 10;
        if (m > 5)
        {
                printf("%d is %d and is greater than 5", n, m);
        }
        else if (m < 5)
        {
                printf("%d is %d and is less than 6 and not 0", n, m);
        }
        else
        {
                printf("%d is %d and is less than 6 and not 0", n, m);
        }
        return (0);
}
