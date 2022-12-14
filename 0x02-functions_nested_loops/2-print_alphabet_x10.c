#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 */

void print_alphabet_x10(void)
{
	int count;
	char alpha;

	for (count = 0; count <= 9; count++)
	{
		for (alpa = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
