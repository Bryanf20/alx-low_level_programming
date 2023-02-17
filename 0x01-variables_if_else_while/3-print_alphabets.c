#include <stdio.h>
/**
 * main - print lowercase followed by uppercase alphabets
 *
 * Return: 0, if succesful
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; ++c)
	{
		putchar(c);
	}
	putchar("\n");
	return (0);
}
