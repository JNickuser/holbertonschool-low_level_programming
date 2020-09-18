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
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}

	putchar('\n');
}
