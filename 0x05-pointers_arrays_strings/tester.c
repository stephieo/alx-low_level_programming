#include "main.h"
#include <stdio.h>
/**
 * main- for checking code
 *
 * Returns: Always 0
 */
int main(void)
{
	int m;
	int *p;


	m = 402;
	p = &m;

	printf("m= %d \n", m);
	printf("p= %d\n", *p);

	reset_to_98(p);
	printf("m is now = %d \n", m);
	
	return (0);
}	
