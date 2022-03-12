#include <stdio.h>
/**
 * main - this prints all possible combinations of single digit numbers
 *
 * Return: 0
 */

int main(void)
{
int x;
for (x = 0; x < 10; x++)
{
for (y =1; y < 10; y++)
{
if (x != y)
{
putchar(x);
putchar(y);
putchar(,)
}
}
}

putchar('\n');
return (0);
}

