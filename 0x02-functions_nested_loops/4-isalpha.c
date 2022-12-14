#include "main.h"

/**
 * isalpha - checks for alphabetic character
 * @c: character to be checked
 *
 * Return: if character is a letter 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
