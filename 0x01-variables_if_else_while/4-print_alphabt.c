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
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}

	putchar('\n');
}
