#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n: number of bytes to copy
 *
 * Return: pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int c;

for (c = 0; c < n; c++)
dest[c] = src[c];

return (dest);
}
