#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: print all alphabet letters
 *
 *Return: always 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';
	/*prints a -z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
