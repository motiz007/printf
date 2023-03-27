# printf
# Description
In C programming language, printf() function is used to print the “character, string, float, integer, octal and hexadecimal values” onto the output screen.

The available convertion specifiers are:

%c: Prints a single character.
%s: Prints a string of characters.
%d: Prints integers.
%i: Prints integers.
%b: Prints the binary representation of an unsigned decimal.
%u: Prints unsigned integers
%p: Prints address of pointer
%x: Prints the hexadecial representation of an unsigned decimal in lowercase letters
%X:Prints the hexadecial representation of an unsigned decimal in uppercase letters
%r: Prints a reversed string
%R: Prints the Rot13 interpretation of a string
Usage
All the files are to be compiled on Ubuntu 14.04 LTS
Compile your code with gcc -Wall -Werror -Wextra -pedantic *.c
Include the "main.h" header file on the functions using the _printf()
Create a file (main.c) with below contend
Example
#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int a;
	int b;
	char *str;

	str = "school";
	a = _printf("%r\n", "hello"); /*expected: notrebloh*/
	printf("--->%d\n", a); /*expected: 10*/

	b = _printf("%r\n", str); /*expected: loohcs*/
	printf("%d\n", b); /*expected: 7*/

	b = _printf("%r\n", str); /*expected: loohcs*/
	printf("%d\n", b); /*expected: 7*/
	return (0);
}

# Files:

1. put_char.c - this contains the function to print out a character.
2. main.h  - contains function prototypes.
3. print_s.c - contains function to print out a string.
4. __printf.c - contains function that prints output according to format specifiers.
5. print_count.c - printing character count
6. print_b.c - print binary numbers
7. print_c.c -print character
8. print_d.c - prints decimal numbers
9. print_o.c - prints octal numbers 
10. print_p.c - prints a pointer address in lower case
11. print_rev.c - prints a string in reverse
12. print_rot13.c - encodes and prints a string in rot-13
13. print_u.c - prints unsigned integers
14. print_x.c - converts and prints integer in hexadecimal
15. get_func.c - determines which function to use
16. print_X.c - converts and prints ineger in hexadcimal in uppercase
17. print_S.c - prints a string and allows values that arent ASCII

# Authors
	_TENNIL KANGETHE and FRANCIS MOTOTO_
