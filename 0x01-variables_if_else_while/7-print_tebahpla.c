#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: A C program that prints with put function
 *
 *Return: always 0 (success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
