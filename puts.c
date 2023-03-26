#include <stdio.h>
#include "main.h"

/**
 * _puts - this prints a string
 * @s: string to be printed
 * Return: void
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
