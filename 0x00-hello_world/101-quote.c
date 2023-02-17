#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */



int main(void) 
{
  const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  const int length = sizeof(message) - 1;

  write(STDERR_FILENO, message, length);

  return 1;
}

