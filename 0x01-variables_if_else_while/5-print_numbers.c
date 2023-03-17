#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int d = 0;

while (d <= 9)
{
printf("%d", d);
++d;
}
putchar('\n');
return (0);
}
