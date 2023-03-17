#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'a';
char C = 'A';

/*print lowercase alphabet*/
while (c <= 'z')
{
putchar(c);
++c;
}
/*print uppercase alphabet*/
while (C <= 'Z')
{
putchar(C);
++C;
}
putchar('\n');
return (0);
}
