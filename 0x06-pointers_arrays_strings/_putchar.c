#include "main.h"
#include <usistd.h>

/**
 * _putchar - write the charactor c to stdout
 * @c: The charactor to print
 *
 * Return: On success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
