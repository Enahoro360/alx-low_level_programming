#include <unistd.h>
/**
*_putchar writes the character c to stdout
*return 1 on success
*@c:check character c
*return -1 on error
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
