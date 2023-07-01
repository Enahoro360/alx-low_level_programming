#include <stdio.h>
#include "main.h"
/**
*reverse_array - print reveres array
*@a: check pointer a
*@n:check variable n
*Return: void
*/
void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0; i < n--; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
	}
}
