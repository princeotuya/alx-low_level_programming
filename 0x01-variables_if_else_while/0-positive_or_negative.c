#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determine if the number is negative or positive
 *
 * Description:program assign  random number to the variable n
 *
 * Return: always 0 (success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
printf("%d is zero\n", n);
else if (n > 0)
printf("%d positive\n", n);
else
printf(" %d is nagative\n", n);
return (0);
}