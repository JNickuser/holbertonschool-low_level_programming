#include <stdio.h>

/**
 *main - main function
 *
 *Return: 0
 */

int main(void)
{
	int i = 'a';

	while (i <= 122)
	{
		putchar(i);
		i++;
	}

	putchar('\n');
}
