#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all possible combinations of four digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int d1 = 0;
int d2 = 0;

while (d1 <= 99)
{
while (d2 <= 99)
{
if (d1 < d2)
{
putchar(d1 / 10 + '0');
putchar(d1 % 10 + '0');
putchar(' ');
putchar(d2 / 10 + '0');
putchar(d2 % 10 + '0');
if (d1 != 98 || d2 != 99)
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
