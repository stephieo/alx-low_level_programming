#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %ld byte(s) \n", (long int) sizeof(a));
	printf("Size of an int: %ld byte(s) \n", (long int) sizeof(b));
	printf("Size of a long int: %ld byte(s) \n", (long int) sizeof(c));
	printf("Size of a long long int: %ld byte(s) \n", (long int) sizeof(d));
	printf("Size of a float: %ld byte(s) \n", (long int) sizeof(e));
}

