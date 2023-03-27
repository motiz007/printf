#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - prints output according to specifiers
 * @format: the format specifiers
 * Return: count
 */
int _printf(const char *format, ...)
{
	int count = 0;
	char c;
	char *s;
	va_list arg;

	va_start(arg, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '%')
		{
			format++;
			if (*format == 'c')
			{
				c = (char)va_arg(arg, int);
				_putchar(c);
				count++;
			}
			else if (*format == 's')
			{
				s = va_arg(arg, char *);
				count += _puts(s);
			}
		}
		else if (*format == '%' && *(format + 1) == '%')
		{
			format++;
			_putchar('%');
			count++;
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(arg);
	return (count);
}
