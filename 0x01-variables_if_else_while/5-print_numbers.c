#include <stdio.h>

/**
 *main - print numbers 0-9
 *
 *Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}

	putchar('\n');
}
