#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int d1 = 0;
int d2 = 0;

while (d1 <= 9)
{
while (d2 <= 9)
{
if (d1 < d2)
{
putchar(d1 + '0');
putchar(d2 + '0');
if (d1 != 8 || d2 != 9)
{
putchar(',');
putchar(' ');
}
}
++d2;
}
d2 = 0;
++d1;
}
putchar('\n');
return (0);
}
