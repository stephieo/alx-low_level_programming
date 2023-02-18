#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main (void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %ld bytes \n", (long int) sizeof(a));
	printf("Size of an int: %ld bytes \n", (long int) sizeof(b));
	printf("Size of an long int: %ld bytes \n", (long int) sizeof(c));
	printf("Size of an long long int: %ld bytes \n", (long int) sizeof(d));
	printf("Size of an long long int: %ld bytes \n", (long int) sizeof(e));
}

