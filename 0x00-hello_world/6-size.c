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
	printf("Size of a char: %iu byte(s)\n".sizeof(char));
	printf("Size of an int: %iu byte(s)\n".sizeof(int));
	printf("Size of a long int: %iu byte(s)\n".sizeof(long int));
	printf("Size of a long long int: %iu byte(s)\n".sizeof(long long int));
	printf("Size of a float: %iu byte(s)\n".sizeof(float));
	return (0);
}
