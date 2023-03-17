#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print numbers 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int d = 0;

while (d <= 9)
{
putchar (d + '0');
if (d != 9)
{
putchar (',');
putchar (' ');
}
++d;
}
putchar('\n');
return (0);
}
