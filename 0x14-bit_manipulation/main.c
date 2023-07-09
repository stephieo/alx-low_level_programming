#include "main.h"
/**
 * main - tester code
 */
int main(void)
{
	unsigned long int n;
	int m;
	

	n = binary_to_uint("1");
	printf("%lu\n", n);
	n = binary_to_uint("101");
	printf("%lu\n", n);
	n = binary_to_uint("1e01");
	printf("%lu\n", n);
	n = binary_to_uint("1100010");
	printf("%lu\n", n);
	n = binary_to_uint("0000000000000000000110010010");
	printf("%lu\n", n);
	print_binary(0);
	printf("\n");
	print_binary(1);
	printf("\n");
	print_binary(98);
	printf("\n");
	print_binary(1024);
	printf("\n");
	print_binary((1 << 10) + 1);
	printf("\n");

        m = get_bit(1024, 10);
	printf("%d\n", m);
	m = get_bit(98, 1);
	printf("%d\n", m);
	m = get_bit(1024, 0);
	printf("%d\n", m);

	n = 1024;
	set_bit(&n, 5);
	printf("%lu\n", n);
	n = 0;
	set_bit(&n, 10);
	printf("%lu\n", n);
	n = 98;
	set_bit(&n, 0);
	printf("%lu\n", n);
	
	return (0);
}
