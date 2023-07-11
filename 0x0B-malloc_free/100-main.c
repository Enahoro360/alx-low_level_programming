#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-argstostr.c -o args
julien@ubuntu:~/0x0a. malloc, free$ ./args I will "show you" how great I am
./args
I
will
show you
how
great
I
am
julien@ubuntu:~/0x0a. malloc, free$
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x0B-malloc_free
File: 100-argstostr.c
   
6. I will show you how great I am
#advanced
Write a function that splits a string into words.

Prototype: char **strtow(char *str);
The function returns a pointer to an array of strings (words)
Each element of this array should contain a single word, null-terminated
The last element of the returned array should be NULL
Words are separated by spaces
Returns NULL if str == NULL or str == ""
If your function fails, it should return NULL
julien@ubuntu:~/0x0a. malloc, free$ cat 101-main.c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}
