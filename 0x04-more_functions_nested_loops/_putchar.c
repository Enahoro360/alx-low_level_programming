#include "main h"
#include <unistd.h>
/**
 * _putchar.c -write the character
 * @c: The character to print
 *
 * Return: on success 1.
 * On error, -1 is return, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1)):
}
