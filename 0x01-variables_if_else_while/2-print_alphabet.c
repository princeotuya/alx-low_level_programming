#include <stdio.h>
/**
 * main - print thr letters of the alphabet
 *
 * Description: print the letter of the alphabet
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
{
putchar(c);
}
putchar('\n');
return (0);
}

