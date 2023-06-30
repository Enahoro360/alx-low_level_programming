#include "main.h"
/**
*_strncat - concatenate two strings
*@dest: input value
*@src: input value
*@n: input value
* Return: Always 0 (Success)
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
