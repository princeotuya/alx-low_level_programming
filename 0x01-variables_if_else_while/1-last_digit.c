#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - if the last digit of n is greater than 5: or less than 6
 *
 * Description: print the last digit of the number stored in the variable n
 *
 * Return: always 0 (success)
 */

int main(void)
{
int n;
int last;

srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
printf("Last digit of %d is %d\n", n, last);

if (last > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, last);
else if (last == 0)
printf("Last digit of %d is %d and is 0\n", n, last);
else if (last < 6 && last != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
return (0);
}





