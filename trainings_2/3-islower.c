#include "main.h"
#include <stdio.h>

int _islower(int c)
{
	if(c > 'a' && c < 'z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
