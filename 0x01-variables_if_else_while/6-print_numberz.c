#include <stdio.h>

/**
 *main - Prints all digit from 0 to 9
 *
 *Return: 0;
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	putchar('\n');
}
