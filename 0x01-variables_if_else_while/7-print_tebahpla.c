#include <stdio.h>

/**
 *main - Prints reverse alphabet
 *
 *Return: 0
 */

int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}

	putchar('\n');

	return (0);
}
