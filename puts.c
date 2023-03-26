#include <stdio.h>

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
		put_char(s[i]);
	}
}
