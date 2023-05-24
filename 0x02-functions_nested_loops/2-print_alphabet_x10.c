#include "main.h"

/**
 * print_alphabet_x10 - Hello world
 * Description: hello world print alphabets 10-times
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char ch[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= sizeof(ch); j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
