#include <stdio.h>


int main(void)
{
	char letter;
	for(letter = 'a'; letter <= 'z'; letter++)
		if(letter != 'q'&& letter != 'e')
		{
			putchar(letter);
		}
	putchar('\n');
	return (0);
}
