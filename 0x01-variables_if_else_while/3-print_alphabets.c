#include <stdio.h>
/**
*main -entry point
*
*Description: printing the lowercase and then the uppercase alphabet
*
* *Return: Always 0 (sucess)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z' ; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}

