#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print numbers from 0 to 15
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int d = 48; /*48 decimal rep of 0 in ASCII*/

while (d <= 102) /*102 dicimal rep of f in ASCII*/
{
putchar (d);
if (d == 57) /*57 decimal rep of 9 in ASCII*/
d += 39;
++d;
}
putchar('\n');
return (0);
}
