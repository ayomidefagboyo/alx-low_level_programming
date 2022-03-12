#include <stdio.h>

/**
 * main - prints out the alphabets in lower case and in upper case too
 * section header: Section description)*
 * Return:0 Description of the returned value
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
putchar(c);
for (c = 'A'; c <= 'Z'; ++c)
putchar(c);
putchar('\n');
return (0);
}

