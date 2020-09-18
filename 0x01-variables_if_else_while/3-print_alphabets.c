#include <stdio.h>


/**
 *main - main function
 *
 *Return: 0
 */

int main(void)
{
	int i, I;

	i = 'a';
	I = 'A';

	while (i <= 122)
	{
		putchar(i);
		i++;
	}

	while (I <= 90)
	{
		putchar(I);
		I++;
	}

	putchar('\n');
}
