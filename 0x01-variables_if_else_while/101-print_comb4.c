#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int d1 = 0;
int d2 = 0;
int d3 = 0;

while (d1 <= 9)
{
while (d2 <= 9)
{
while (d3 <= 9)
{
if (d1 < d2 && d2 < d3)
{
putchar(d1 + '0');
putchar(d2 + '0');
putchar(d3 + '0');
if (d1 != 7 || d2 != 8 || d3 != 9)
{
putchar(',');
putchar(' ');
}
}
++d3;
}
d3 = 0;
++d2;
}
d2 = 0;
++d1;
}
putchar('\n');
return (0);
}
