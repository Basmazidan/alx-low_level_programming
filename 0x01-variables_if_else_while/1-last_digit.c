#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		digit = (n * -1) % 10;
		printf("Last digit of %i and is %i less than 6 and not 0\n", n, digit * -1);
	}
	else
	{
		digit = n % 10;
		if (digit > 5)
			printf("Last digit of %i and is %i greater than 5\n", n, digit);
		else if (digit == 0)
			printf("Last digit of %i and is 0\n", n);
		else if (digit < 6 && digit > 0)
			printf("Last digit of %i and is %i less than 6 and not 0\n", n, digit);
	}
	return (0);
}
