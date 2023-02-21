#include <stdio.h>

/**
 *  main - prints the alphabet in lowercase, and then in uppercase
 *
 *  Description: prints the alphabet in lowercase, and then in uppercase
 *
 *  Return: always 0 (success)
 */

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
ch = 'A';
while (ch <= 'Z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
