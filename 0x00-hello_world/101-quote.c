#include <unistd.h>
/**
 * main - printing a stiring without any print or puts functions
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

