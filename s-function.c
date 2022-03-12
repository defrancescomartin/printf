#include "main.h"

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: void
 */

void s_print(va_list s)
{
	char *str;
	int i = 0;

	str = va_arg(s, char*);
	if (str == NULL)
	{
		write(1, "(nil)", 7);
		return;
	}
	for (i = 0; str[i] != '\0'; i++)
		_putchar(i);

	return (0);
}
