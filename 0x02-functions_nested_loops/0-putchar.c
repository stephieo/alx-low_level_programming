#include <unistd.h>
/**
 * main - Entry point
 *
 * Description - prints without using standard library
 *
 * Return : Always 0 (Success)
 */
int main(void)
{
	write(1, "_putchar\n",9);
	return (0);
}
