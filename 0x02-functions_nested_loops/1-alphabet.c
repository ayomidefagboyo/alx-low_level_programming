#include <stdio.h>
/**
 * main - funtion that prints putchar
(* a blank line
 * Description: Longer description of the function)
(* section header: Section description)*
 * Return: 0
 */
void  print_alphabet(void)
{
char ch ;
for (ch = 'a';ch <= 'z';ch++)
putchar(ch);
putchar('\n');
return(0);
}
