#include <stdio.h>

/**
 *main - combinations of digits
 *
 *Return: 0
 */

int main(void)
{
	int n1, n2;
	n2 = n1 = '0';

	while (n1 <= '9')
	{
		while (n2 <= '9')
		{
			putchar(n1);
			putchar(n2);
			if (n1 != '9' || n2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
			n2++;
		}
		n2 = '0';
		n1++;
	}

	putchar('\n');

	return (0);
}
