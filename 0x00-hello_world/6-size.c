#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */


int main(void)
{
printf("The size of char is %ld bytes\n", sizeof(char));
printf("The size of short is %ld bytes\n", sizeof(short));
printf("The size of int is %ld bytes\n", sizeof(int));
printf("The size of long is %lu bytes\n", sizeof(long));
printf("The size of long long is %lu bytes\n", sizeof(long int));
printf("The size of float is %ld bytes\n", sizeof(float));
printf("The size of double is %lu bytes\n", sizeof(double));
printf("The size of long double is %lu bytes\n", sizeof(long double));
return (0);
}

