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
    unsigned long int hash_table_array_size;


    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    printf("%p\n", (void *)ht);

    printf("-------------\n");

    hash_table_array_size = 1024;
    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    hash_table_set(ht, "betty", "cool");
    printf("%lu\n", hash_djb2((unsigned char *)"betty"));
    printf("%lu\n", key_index((unsigned char *)"betty", hash_table_array_size));
    return (EXIT_SUCCESS);
}
