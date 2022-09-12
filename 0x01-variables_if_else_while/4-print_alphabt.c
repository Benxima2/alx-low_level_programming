#include <stdio.h>
/**
 * main - writing all the letters of the alphabet except e and q
 *
 * return: always (sucess)
 *
 */

int main(void)
{
	char i = 'a';
	
	while i <= 'z'
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
