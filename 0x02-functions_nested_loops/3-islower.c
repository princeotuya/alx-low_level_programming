#include "main.h"

/**
 * main - function that checks for lowercase character.
 *
 * Description:  a function that checks for lowercase character.
 *
 * Return: 1 if C is lowercase else return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
