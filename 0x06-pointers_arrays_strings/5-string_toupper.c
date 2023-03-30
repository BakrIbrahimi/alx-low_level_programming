#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to change
 * Return: pointer to the resulting string s
 */
char *string_toupper(char *s)
{
char *ptr = s;

while (*s != '\0')
{
if (*s >= 'a' && *s <= 'z')
*s -= 32;
s++;
}
return (ptr);
}
