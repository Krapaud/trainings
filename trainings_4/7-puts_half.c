#include "main.h"
#include <stdio.h>

void puts_half(char *str)
{
	int len = 0;
	int len2;
	int n;

	/* Find the length of the string */
	while (str[len] != '\0')
		len++;

	len2 = len;

	n = (len + 1) / 2;

	while (n < len2)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
