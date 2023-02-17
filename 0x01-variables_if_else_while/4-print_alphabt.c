#include <stdio.h>
/**
 * main - prints the alphabets in lower case,eclude e & q
 *
 * Return: O, if succesful
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
