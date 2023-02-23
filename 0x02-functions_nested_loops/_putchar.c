#include <unistd.h>
#include "main.h" 
/** putchar - writes to the stdout
 *
 * @c: the character to print
 *
 * return: on success 1.
 * on error -1 is returned and errno is set appropriate
 */
int _putchar(char c)
{
        return(write(1, &c,1));
}

