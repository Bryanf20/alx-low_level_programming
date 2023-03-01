#include "main.h"

/**
 * _strncat - Concatenates two strings using
 *            inputted number of bytes from src.
 * @dest: pointer to destination tobe appended upon.
 * @src: pointer to string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, d_count = 0;

	while (dest[a++])
	{
		d_count++;
	}

	for (a = 0; src[a] && a < n; a++)
	{
		dest[d_count++] = src[a];
	}

	return (dest);
}
