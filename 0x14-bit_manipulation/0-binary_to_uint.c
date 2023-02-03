#include "main.h"

/**
 * binary_to_uint- converts binary to unsigned integer
 * @b: binary
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{

	int night = 0, j;
	unsigned int num = 0, non_binary = 0;

	if (b == NULL)
		return (non_binary);

	while (b[night] != '\0')
		night++;
	night -= 1;
	j = 0;
	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))/*&& logical AND operator*/
			return (non_binary);

		if (b[j] == '1')
			num += (1 * (1 << night));/*<< bitwise left shift operator*/
		j++;

		night--;
	}
	return (num);
}
