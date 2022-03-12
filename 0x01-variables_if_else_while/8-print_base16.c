#include <stdio.h>
/**
 * main - function that prints all the numbers of base 16 in lowercase
 * section header: Section description)*
 * Return:0 Description of the returned value
 */
int main(void)
{
char lower_case;
int i;
for (i = 0; i <= 10; i++)
putchar(i + '0');
for (lower_case = 'a'; lower_case < 'g'; lower_case++)
putchar(lower_case);
putchar('\n');
return (0);
}


