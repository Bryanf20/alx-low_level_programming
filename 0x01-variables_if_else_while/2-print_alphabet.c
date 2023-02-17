#include <stdio.h>
/**
 * main - prints the lower case of the alphabet
 *
 * Return: 0, if succesful
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
