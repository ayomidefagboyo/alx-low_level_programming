#include <stdio.h>
/**
 * main - funtion that prints combinations of single-digit numbers.
 * section header: Section description)*
 * Return:0 Description of the returned value
 */
int main(void)
{
int x = 0;
for (x = 48; x < 58; x++)
{
putchar(x);
if (x != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
