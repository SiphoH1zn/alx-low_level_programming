#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * C to print
 *@c: c
 * Return: On success 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
