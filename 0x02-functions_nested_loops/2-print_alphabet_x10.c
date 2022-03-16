#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: A function that prints the alphabet, in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
int t = 0;
char alphabet = 'a';
while (t <= 10)
{
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
_putchar('\n');
}
t++;
}
}
