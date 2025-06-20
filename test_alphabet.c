#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: 0 on success
 *
 * This program prints the lowercase alphabet from 'a' to 'z'
 * using a for loop and the printf function.
*/
int main(void)
{
	char letter;

	for(letter = 'a'; letter <= 'z'; letter++)
	{
		printf("%c\n", letter);
	}
	return (0);
}
