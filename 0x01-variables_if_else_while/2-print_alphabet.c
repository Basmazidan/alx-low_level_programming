#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: print all  alphabet letters
 *
 *Return: always 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putcher(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
