#include <stdio.h>
/**
 * main - print alphabet a - z except e and q
 *
 * Description: print alphatbet a-z except e and q
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}

