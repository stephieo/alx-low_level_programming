#include "hash_tables.h"
/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    char *s;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);

    printf("-------------\n");

    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    return (EXIT_SUCCESS);
}
