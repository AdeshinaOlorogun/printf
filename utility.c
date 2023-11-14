#include "main.h"

/**
 * is_print - Evaluates if a char is printable
 * @a: Char to be evaluated.
 *
 * Return: 1 if c is printable, 0 otherwise
 */
int is_print(char a)
{
	if (a >= 32 && a < 127)
		return (1);

	return (0);
}

/**
 * append_hexacode - Append ascci in hexadecimal code to buffer
 * @buffer: Array of chars.
 * @c: Index at which to start appending.
 * @ascii_code: ASSCI CODE.
 *
 * Return: Always 3
 */
int append_hexacode(char ascii_code, char buffer[], int c)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[c++] = '\\';
	buffer[c++] = 'x';

	buffer[c++] = map_to[ascii_code / 16];
	buffer[c] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_char_digit - Verifies if a char is a digit
 * @d: Char to be evaluated
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_char_digit(char d)
{
	if (d >= '0' && d <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_num - Casts a number to the specified size
 * @num: Number to be casted.
 * @size: Number indicating the type to be casted.
 *
 * Return: Casted value of num
 */
long int convert_size_num(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - Casts a number to the specified size
 * @num: Number to be casted
 * @size: Number indicating the type to be casted
 *
 * Return: Casted value of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
