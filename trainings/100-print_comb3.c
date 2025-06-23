#include <stdio.h>

int main(void)
{
	int a, b;
	for (a = 0; a < 8; a++)
	{
		for (b = 1; b < 9; b++)
		{
			putchar('0' + a);
			putchar('0' + b);
			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
