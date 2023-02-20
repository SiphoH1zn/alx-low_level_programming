#include <stdio.h>
#include <unistd.h>

/**
 * main - print string, printf and puts are not allowed
 *
 * Return: 1
 */

int main(void)
{
	write(1, "and that oiece of art is useful\" - DOra Korpar, 2015-10-19\n", 59);
	return (1);
}

